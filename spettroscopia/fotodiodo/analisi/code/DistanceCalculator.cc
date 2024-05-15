/* =================================================================
|                                                                  |
| Calcolatore per il rate deggli x e relativa legge quadratica     |
|                                                                  |
================================================================= */

#include <iostream>
#include <vector>
#include <string>
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
|   Per vivere serenamente assumiamo che sia il tempo che la       |
|   ditanza siano senza errore (sensa info possiamo dargli una     |
|   uniforme), l'errore commesso dovrebbe essere piccolo (si lo è) |
|                                                                  |
================================================================= */


// GLOBAL SCOPE ====================================================
vector<double> Distanza{ 1.2, 2.2, 3.2, 4.2, 5.2, 6.2, 7.2, 8.2, 9.2, 10.2, 15.2 }; //cm
vector<double> Tempo{ 147.14, 89.50, 206.78, 345.23, 193.29, 199.49, 114.23, 140.36, 235.88, 235.88, 342.36 }; //s
vector<double> Counts{ 25831, 9092, 12848, 15055, 5973, 4765, 1999, 2063, 2695, 2473, 1723 }; //no udm
/* per cambiamenti nel fit punti da modificare */
// . . . . 

vector<double> ErrCounts; 
vector<double> Rate; //cps
vector<double> ErrRate;

//------------------------------------------------------------------
// FUNCTION DECLARATION ============================================
void ErrorCountsCalculator();
void RateCalculator();
void ErrorRateCalculator();

double FunctionToFit(double* x, double* par){
  double result = par[0] / pow((*x-par[1]),2);
  return result;
}

//------------------------------------------------------------------

int main( int argN, char* argL[] ){

  TApplication* AppWTF = new TApplication("ThisShouldBeAnApp", &argN, argL);

  ErrCounts.reserve(11);
  Rate.reserve(11);

  //chiamata ai calcolatori
  ErrorCountsCalculator();
  RateCalculator();
  ErrorRateCalculator();
  
  //creazione del grafico
  TCanvas* can = new TCanvas( "can", "can", 1920, 1080 );
    
  TPad *pad1 = new TPad("pad1", "Pad 1", 0.0, 0.3, 1.0, 1.0); // Upper pad
  TPad *pad2 = new TPad("pad2", "Pad 2", 0.0, 0.0, 1.0, 0.3); // Lower pad
  
  pad1 -> Draw();
  pad2 -> Draw();
  
  TGraphErrors* graph = new TGraphErrors( Distanza.size(), Distanza.data(), Rate.data(), 0, ErrRate.data() );
                graph -> SetTitle( "Rate vs Distanza" );
                graph -> GetXaxis() -> SetTitle( "Distanza [cm]" );
                graph -> GetYaxis() -> SetTitle( "Rate [cps] " );
                graph -> SetMarkerStyle(8);
                graph -> SetMarkerColor(kBlue);
                graph -> SetName("Data");
  
  //fit di tipo a/x^2
  TF1* fit = new TF1("fit: p0/(x^2 - p1)", FunctionToFit, 1, 15.5, 2);  
       fit -> SetLineColor(kOrange-3);
       fit -> SetLineStyle(2); //dashed line for the fit line
  
  //prima canvas, quella del grafico e del fit
  pad1 -> cd();
  
    graph -> Fit(fit, "RV");
    graph -> Draw("AP");
    fit -> Draw("same");
  
    auto legend = new TLegend();
    legend -> AddEntry( graph, "Data", "lpe");
    legend -> AddEntry( fit, "fit: p0/(x^2 - p1)", "lp");
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
      residualsGraph->SetPointError(i, 0, graph->GetErrorY(i)); // Assuming no error in x-direction, only y-direction
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
    
    double xmin = 0;//pad2->GetUxmin();
    double xmax = 16.25;//pad2->GetUxmax();
    TLine *line = new TLine(xmin, 0, xmax, 0);
    line -> SetLineColor(kViolet-3); // Set the color of the line
    line -> SetLineStyle(9);    // Set the line style (optional, e.g., dashed line)
    line -> SetLineWidth(1);
    line -> Draw();
  
  can -> Update();

  AppWTF -> Run(kTRUE);

 return 0;
}

// Calcolatore errore entries ======================================
void ErrorCountsCalculator(){

  for(auto k : Counts){
    ErrCounts.push_back( sqrt(k) );
  }

 return;
}

// Calcolatore Rate ================================================
void RateCalculator(){

  //controllo di dimensione
  if( Tempo.size() != Counts.size() ) exit(-1);
  
  double Holder;
  for( int i=0; i<Tempo.size(); i++ ){
    Holder = 0;
    Holder = Counts.at(i) / Tempo.at(i);
    Rate.push_back(Holder);
  }
  
 return;
}

// Calcolatore errore rate =========================================
void ErrorRateCalculator(){

  if( Counts.size() != ErrCounts.size() || Rate.size() != Counts.size() ) exit(-1);
  
  double Holder;
  for( int i=0; i<Counts.size(); i++ ){
    Holder = 0;
    Holder = Rate.at(i) * ( ErrCounts.at(i) / Counts.at(i) );
    ErrRate.push_back(Holder);
  }

 return;
}


