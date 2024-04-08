#include <iostream>
#include <TFile.h>
#include <TNtuple.h>
#include <TH1D.h>
#include <TF1.h>
#include <TGraphErrors.h>
#include <TCanvas.h>

void fitGaussianAndPlotResiduals(const char* fileName, const char* ntupleName, const char* variableName, int binning_number_ext, double rangeMin, double rangeMax) {
    // Open the ROOT file
    TFile *file = TFile::Open(fileName);
    if (!file || file->IsZombie()) {
        std::cerr << "Error: Failed to open file " << fileName << std::endl;
        return;
    }

    // Access the TNtuple from the file
    TNtuple *ntuple = dynamic_cast<TNtuple*>(file->Get(ntupleName));
    if (!ntuple) {
        std::cerr << "Error: Failed to retrieve TNtuple " << ntupleName << " from file " << fileName << std::endl;
        file->Close();
        return;
    }
    
    TCanvas* canvas = new TCanvas("canvas","canvas",1);

    // Create a histogram for the variable
    TH1D *histogram = new TH1D("histogram", "Histogram of Integral", binning_number_ext, rangeMin, rangeMax);
    ntuple->Draw(Form("%s>>histogram", variableName));

    // Fit a Gaussian to the histogram
    TF1 *gaussianFunc = new TF1("gaussianFunc", "gaus", rangeMin, rangeMax);
    histogram->Fit(gaussianFunc, "R");

    // Create a TGraphErrors for the residuals
    TGraphErrors *residualsGraph = new TGraphErrors();
    for (int i = 1; i <= histogram->GetNbinsX(); ++i) {
        double binCenter = histogram->GetBinCenter(i);
        double binContent = histogram->GetBinContent(i);
        double fittedValue = gaussianFunc->Eval(binCenter);
        double residual = binContent - fittedValue;
        residualsGraph->SetPoint(i-1, binCenter, residual);
        residualsGraph->SetPointError(i-1, 0, histogram->GetBinError(i)); // Assuming no error in x-direction, only y-direction
    }

    // Draw the residuals graph
    residualsGraph->SetTitle("Residui Fit");
    residualsGraph->SetMarkerStyle(20);
    residualsGraph->SetMarkerSize(1);
    residualsGraph->SetMarkerColor(kBlue);
    residualsGraph->GetXaxis()->SetTitle("vmax [a.u.]");
    residualsGraph->Draw("AP");
    
    canvas->SetGrid();
    canvas->BuildLegend();

    // Close the file
    file->Close();
}

