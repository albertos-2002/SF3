/* ==============================================================
|                                                               |
| Macro per fare il grafico per la calibrazione energetica,     |
| calcolo delle risoluzione (in udm arb) e la loro media        |
|                                                               |
============================================================== */ 

#include <iostream>
#include <vector>
#include <cmath>

#include "TApplication.h"
#include "TGraph.h"
#include "TGraphErrors.h"
#include "TF1.h"
#include "TLegend.h"
#include "TCanvas.h"
#include "TAxis.h"
#include "TPad.h"
#include "TLine.h"

using namespace std;

/* =================================================================
|                                                                  |
| Note:                                                            |
|   i dati sono vettorializzati come Np Am Cm                      |
|   aka fit basso, medio, alto                                     |
|                                                                  |
================================================================= */

//GLOBAL VARIABLE ==================================================
vector<double> Peak    = { 5.10989e+03, 5.88751e+03, 6.22112e+03 };
vector<double> ErrPeak = { 2.05750e+01, 4.79314e+00, 3.76649e+00 };

vector<double> Energy    = { 4788.0, 5485.56, 5804.77 };
vector<double> ErrEnergy = { 0.9, 0.12, 0.05 };

vector<double> Sigma    = { 9.62325e+01, 7.17975e+01, 5.95106e+01 };
vector<double> ErrSigma = { 1.89015e+01, 4.52968e+00, 2.79365e+00 };

vector<double> Risoluzione;
vector<double> ErrRisoluzione;

double MediaRisoluzione;
double ErrMediaRisoluzione;

constexpr double ConstFWHM = 2*sqrt( 2*log(2) );


/* ============================================================== */

int main( int argN, char* argL[] ){

  TApplication* AppWTF = new TApplication("ThisShouldBeAnApp", &argN, argL);
  
  //creazione del grafico
  TCanvas* can = new TCanvas( "can", "can", 1920, 1080 );
           can -> cd();
  
  TPad *pad1 = new TPad("pad1", "Pad 1", 0.0, 0.3, 1.0, 1.0); // Upper pad
  TPad *pad2 = new TPad("pad2", "Pad 2", 0.0, 0.0, 1.0, 0.3); // Lower pad
  
  pad1 -> Draw();
  pad2 -> Draw();  
  
  
  TGraphErrors* graph = new TGraphErrors( Peak.size(), Peak.data(), Energy.data(), ErrPeak.data(), ErrEnergy.data() );
                graph -> SetTitle( "Calibrazione" );
                graph -> GetXaxis() -> SetTitle( "Peak [a.u]" );
                graph -> GetYaxis() -> SetTitle( "Energy [keV] " );
                graph -> SetMarkerStyle(8);
                graph -> SetMarkerColor(kBlue);
  
  //fit lineare (parametri automatici di root)
  TF1* fit = new TF1("fit: p0 + p1*x", "pol1", 5000, 6300);  
       fit -> SetLineColor(kOrange-3);
       fit -> SetLineStyle(2); //dashed line for the fit line
  
  
  
  //prima canvas, quella del grafico e del fit
  pad1 -> cd();
  
    graph -> Fit(fit, "RV");
    graph -> Draw("AP");
    fit -> Draw("same");
  
    auto legend = new TLegend();
    legend -> AddEntry( graph, "Data", "lpe");
    legend -> AddEntry( fit, "fit: p0 + p1*x", "lp");
    legend -> Draw();
    
    pad1 -> SetGrid();
  
  
  //seconda canvas, quella con il grafico dei residui
  pad2 -> cd();
  
    // Create a TGraphErrors for the residuals
    TGraphErrors* residualsGraph = new TGraphErrors();
    for (int i = 0; i < graph->GetN(); ++i) {
      double x, y;
      graph->GetPoint(i, x, y);
      double fittedValue = fit->Eval(x);
      double residual = y - fittedValue;
      residualsGraph->SetPoint(i, x, residual);
      residualsGraph->SetPointError(i, graph->GetErrorX(i), graph->GetErrorY(i));
    }

    // Set up style for the residuals graph
    residualsGraph->SetTitle("Residui Fit");
    residualsGraph->SetMarkerStyle(20);
    residualsGraph->SetMarkerSize(1);
    residualsGraph->SetMarkerColor(kBlue);

    // Draw the residuals graph
    residualsGraph->Draw("AP");
  
    auto legend2 = new TLegend();
    legend2 -> AddEntry(residualsGraph, "Residui", "lpe");
    legend2 -> Draw();
    
    pad2 -> SetGrid();
    
    double xmin = 5000;
    double xmax = 6300;
    TLine *line = new TLine(xmin, 0, xmax, 0);
    line -> SetLineColor(kViolet-3); // Set the color of the line
    line -> SetLineStyle(9);    // Set the line style (optional, e.g., dashed line)
    line -> SetLineWidth(1);
    line -> Draw();
  
  
  can -> Update();
  
  //calcoli di risoluzione
  double Holder;
  double ErrHolder;
  
  for(int i=0; i < Peak.size(); i++){
  
    Holder = 0;
    Holder = ( ConstFWHM * Sigma.at(i) ) / Peak.at(i);
    Risoluzione.push_back(Holder);
    
    ErrHolder = 0;
    ErrHolder = Holder * sqrt( pow( ( ErrPeak.at(i)/Peak.at(i) ) ,2 ) + pow( ( ErrSigma.at(i)/Sigma.at(i) ) ,2 ) );
    ErrRisoluzione.push_back(ErrHolder);
  }
  
  //print risoluzioni -----------------
  cout << " Print delle risoluzioni " << "\n" << endl;
  
  cout << "Risoluzione Nettunio: " << endl;
  cout << Risoluzione.at(0) << " \\pm " << ErrRisoluzione.at(0) << "\n" << endl;
  cout << "Risoluzione Americio: " << endl;
  cout << Risoluzione.at(1) << " \\pm " << ErrRisoluzione.at(1) << "\n" << endl;
  cout << "Risoluzione Curio: " << endl;
  cout << Risoluzione.at(2) << " \\pm " << ErrRisoluzione.at(2) << "\n" << endl;
  
  cout << " ............................................................................... " << endl;
  //-----------------------------------
  cout << " Print della matrice dei coefficienti di compatibilità (spoiler non è una matrice): " << "\n" << endl;
  
  double compA = abs( Risoluzione.at(0) - Risoluzione.at(1) ) / sqrt( pow( ErrRisoluzione.at(0) ,2) + pow( Risoluzione.at(1) ,2) );
  double compB = abs( Risoluzione.at(0) - Risoluzione.at(2) ) / sqrt( pow( ErrRisoluzione.at(0) ,2) + pow( Risoluzione.at(2) ,2) );
  double compC = abs( Risoluzione.at(1) - Risoluzione.at(2) ) / sqrt( pow( ErrRisoluzione.at(1) ,2) + pow( Risoluzione.at(2) ,2) );
  
  cout << " Nettunio - Americio: " << endl;
  cout << compA << "\n" << endl;
  cout << " Nettunio - Curio: " << endl;
  cout << compB << "\n" << endl;
  cout << " Americio - Curio: " << endl;
  cout << compC << "\n" << endl;
  
  cout << " ............................................................................... " << endl;
  //-----------------------------------
  cout << "Media pesata dei valori di risoluzione: " << endl;
  
  double k = 0;
  Holder = 0;
    
  for( unsigned int i=0; i < Risoluzione.size(); i++){

    k += ( 1/pow( ErrRisoluzione.at(i),2 ) );
    Holder += Risoluzione.at(i) / pow( ErrRisoluzione.at(i),2);
  }

  MediaRisoluzione = Holder/k ;
  ErrMediaRisoluzione = sqrt(1/k) ;
  
  cout << MediaRisoluzione << " \\pm " << ErrMediaRisoluzione << endl;
  
  
  AppWTF -> Run(kTRUE);
  
  return 0;
}
