//========================================================================================================
//
//  macro di ROOT per fittare il segnale dell'esperienza di Haynes e Shockley del laboratorio
//  di Fisica del terzo anno dell'Università di Padova
//
//  Prof. R. Stroili (2024)
//
//========================================================================================================


#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

#include "TGraph.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TAxis.h"
#include "TStyle.h"

//
//  read data extracted from the oscilloscope for the Haynes-Shockley experiment
//
void readData(const char* infile, vector<float>& x, vector<float>& y) {

  //  open the input stream
  std::ifstream ifile(infile);

  // check stream status
  if (!ifile) {
    std::cerr << "Can't open input file " << infile << " !!!" << std::endl;
    exit(-1);
  }

  // string used for data reading
  std::string line;

  // flag to skip the file header
  bool skip = true;
  while (ifile) {
    std::getline(ifile, line);
    if (not skip and line.size() > 1) {
      // remove the csv data separators (, and  ;)
      std::replace(line.begin(), line.end(), ',', ' ');
      std::replace(line.begin(), line.end(), ';', ' ');
      // instanciate a stringstream to extract the values
      std::stringstream ss(line);
      float v1, v2;
      ss >> v1 >> v2;
      // put time and amplitude values in their vectors
      x.push_back(v1);
      // invert the signal: work with positive signals
      y.push_back(v2);
    }
    // check if we have reached the bottom of the file header, delimited by the "TIME" word
    if (line.find("TIME") != std::string::npos) skip = false;
  }
  ifile.close();
  if (x.size() == 0) {
    std::cerr << "empty or wrong file: " << infile << "\n\t...\t exiting" << std::endl;
    exit(-1);
  }
}

//========================================================================================================

//
//  signal fitting function: gaussian + decaying exponential
//
Double_t myfunction(Double_t* x, Double_t* par) {
  // get the x value 
  Float_t xx = x[0];
  // temporary variable
  Float_t val = 0;
  // gaussian component
  val = par[0] * exp(-0.5 * ((xx - par[1]) / par[2]) * ((xx - par[1]) / par[2]));
  // exponential component
  val += par[3] * exp(xx / par[4]);
  val -= par[5];
  // return the value of the function at the given x
  return val;
}

//========================================================================================================

//
//  subtract the baseline computed with the last 50 samples of the signal
//
float baseline(const vector<float>& y) {
  // compute the baseline
  float val = 0;
  for (int k = 1; k < 51; ++k) {
    val += y[y.size() - k] * 0.02;
  }
  return val;
}

void baseline(vector<float>& y) {
  // compute the baseline
  float val = 0;
  for (int k = 1; k < 51; ++k) {
    val += y[y.size() - k] * 0.02;
  }
  // subtract the baseline
  for (unsigned int k = 0; k < y.size(); ++k) {
    y[k] -= val;
  }
}

//========================================================================================================

//
//  fit the signal
//
void fitSignal(TGraph* graph, const vector<float>& x, const vector<float>& y) {
  //   find the initial values for the function parameters

  // find the position of the maximum
  auto it = max_element(std::begin(y), std::end(y));
  int pos = it - y.begin();

  // find the "width" of the gaussian
  int llimit = 0;
  for (int k = pos; k > 0; --k) {
    if (y[k] < (y[pos] * 0.5)) {
      llimit = k;
      break;;
    }
  }

  int ulimit = 0;
  for (unsigned int k = pos; k < y.size(); ++k) {
    if (y[k] < (y[pos] * 0.5)) {
      ulimit = k;
      break;;
    }
  }

  // lower time limit for fitting 
  float xllimit = 0.;

  // create the fitting function object
  TF1* f1 = new TF1("myfunc", myfunction, xllimit, x[x.size() - 1], 6);
  f1->SetNpx(2000);
  // set initial parameters and limits 
  f1->SetParameter(0, 0.001);
  f1->SetParLimits(0, 0, 10000);
  f1->SetParName(0, "GaussNorm");
  f1->SetParameter(1, x[pos]);
  f1->SetParLimits(1, x[pos] * 0.8, x[pos] * 1.5);
  f1->SetParName(1, "t0");
  f1->SetParameter(2, (x[ulimit] - x[llimit]) * 0.5);
  f1->SetParLimits(2, (x[ulimit] - x[llimit]) * 0.1, (x[ulimit] - x[llimit]));
  f1->SetParName(2, "width");
  f1->SetParameter(3, 0.0005);
  f1->SetParLimits(3, 0.0, 1);
  f1->SetParName(3, "ExpNorm");
  f1->SetParameter(4, -x[pos] * 0.5);
  f1->SetParLimits(4, -x[pos + 100], 0.);
  f1->SetParName(4, "decay");
  f1->SetParameter(5, 0.);
  f1->SetParLimits(5, -1., 1.);
  f1->SetParName(5, "offset");

  // fit the signal
  graph->Fit("myfunc", "+", "same", xllimit, x[x.size() - 1]);

}

//========================================================================================================

// 
//  main function
//
void Haynes(const char* infile) {
  // instantiate the containers
  std::vector<float> x;
  std::vector<float> y;

  // gStyle->SetTitleSize(.1, "Y");
  gStyle->SetLabelSize(.08, "XY");
  gStyle->SetStripDecimals(kFALSE);

  // read the data
  readData(infile, x, y);

  TGraph* rawgraph = new TGraph(x.size(), &x[0], &y[0]);
  // format the graph
  rawgraph->SetTitle("raw data;s;V");
  rawgraph->GetXaxis()->SetTitleSize(0.08);
  rawgraph->GetXaxis()->SetTitleOffset(0.5);
  rawgraph->GetYaxis()->SetTitleSize(0.08);
  rawgraph->GetYaxis()->SetTitleOffset(0.5);

  // invert signal
  for (unsigned int i = 0; i < y.size(); ++i) y[i] = -y[i];

  // subtract the baseline
  baseline(y);

  // generate the signal graph object
  TGraph* graph = new TGraph(x.size(), &x[0], &y[0]);
  // format the graph
  graph->SetTitle("processed data;s;V");
  graph->GetXaxis()->SetTitleSize(0.08);
  graph->GetXaxis()->SetTitleOffset(0.5);
  graph->GetYaxis()->SetTitleSize(0.08);
  graph->GetYaxis()->SetTitleOffset(0.5);

  // fit the signal
  fitSignal(graph, x, y);

  // draw the signal with superimposed the fitted function
  TCanvas* can = new TCanvas("Haynes-Shockley");
  can->Divide(1, 2);
  can->cd(1);
  rawgraph->Draw("al");
  can->cd(2);
  graph->Draw("al");
}