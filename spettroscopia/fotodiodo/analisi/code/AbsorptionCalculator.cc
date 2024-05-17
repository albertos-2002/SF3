/* =================================================================
|                                                                  |
| Calcolatore per il rate dei gamma                                |
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
#include "TMultiGraph.h"

using namespace std;

/* =================================================================
|                                                                  |
| Note:                                                            |
|   La distanza a cui è stata presa la misura è fissa              |
|                                                                  |
|   Assumiamo che lo spessore sia noto senza incertezza            |
|   Assumiamo che il tempo sia noto senza incertezza               |
|                                                                  |
================================================================= */

// GLOBAL SCOPE ====================================================
vector<double> Spessore_ag = { 60, 120, 180, 240 }; //um
vector<double> Spessore_cu = { 92, 184, 276, 368 }; //um

vector<double> Tempo_ag = { 538.72, 786.11, 1070.73, 409.91 }; //s
vector<double> Tempo_cu = { 1070.73, 487.55, 555.89, 466.49 }; //s

vector<double> Counts_ag = { 2521, 2426, 2408, 703 };
vector<double> Counts_cu = { 2405, 2581, 2522, 2381 };

vector<double> ErrCounts_ag = {};
vector<double> ErrCounts_cu = {};

vector<double> Rate_ag = {}; //cps
vector<double> Rate_cu = {}; //cps

vector<double> ErrRate_ag = {};
vector<double> ErrRate_cu = {};

//------------------------------------------------------------------
// FUNCTION DECLARATION ============================================
void ErrorCountsCalculator();
void RateCalculator();
void ErrorRateCalculator();

double FunctionToFit(double* x, double* par){
  double result = par[0]*exp(-par[1]*(*x));
  return result;
}

//------------------------------------------------------------------

int main( int argN, char* argL[] ){

  TApplication* AppWTF = new TApplication("ThisShouldBeAnApp", &argN, argL);

  ErrCounts_ag.reserve(4);
  ErrCounts_cu.reserve(4);
  Rate_ag.reserve(4);
  Rate_cu.reserve(4);
  ErrRate_ag.reserve(4);
  ErrRate_cu.reserve(4);
  

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
  
  
  auto multi = new TMultiGraph();
       multi -> SetTitle("Rate vs Spessore; Spessore [um]; Rate [cps]");

  TGraphErrors* graph_ag = new TGraphErrors( Spessore_ag.size(), Spessore_ag.data(), Rate_ag.data(), 0, ErrRate_ag.data() );
                graph_ag -> SetTitle( "Ag data" );
                graph_ag -> SetMarkerStyle(8);
                graph_ag -> SetMarkerColor(kGray+1);
                
  TGraphErrors* graph_cu = new TGraphErrors( Spessore_cu.size(), Spessore_cu.data(), Rate_cu.data(), 0, ErrRate_cu.data() );
                graph_cu -> SetTitle( "Cu data" );
                graph_cu -> SetMarkerStyle(8);
                graph_cu -> SetMarkerColor(kOrange+8);

  //fit
  TF1* fit_ag = new TF1("fit_ag", FunctionToFit, 50, 250, 2);  
       fit_ag -> SetLineColor(kGreen+3);
       fit_ag -> SetLineStyle(2); //dashed line for the fit line


  multi -> Add(graph_ag);
  multi -> Add(graph_cu);
  
  
  //prima canvas, quella del grafico e del fit
  pad1 -> cd();
  
  graph_ag -> Fit(fit_ag, "RV");
  fit_ag -> Draw("same");
  multi -> Draw("ap");
  pad1 -> SetGrid();
  
  auto legend = new TLegend();
       legend -> AddEntry( graph_ag, "Ag data", "lpe");
       legend -> AddEntry( graph_cu, "Cu data", "lpe");
       legend -> AddEntry( fit_ag, "fit Ag: p0*e^(-p1*x)", "lpe" );
       legend -> Draw();
  
  
  //seconda canvas, quella con il grafico dei residui
  pad2 -> cd();
  
    // Create a TGraphErrors for the residuals
    TGraphErrors* residualsGraph = new TGraphErrors();
    for (int i = 0; i < graph_ag->GetN(); ++i) {
      double x, y;
      graph_ag->GetPoint(i, x, y);
      double fittedValue = fit_ag->Eval(x);
      double residual = y - fittedValue;
      residualsGraph->SetPoint(i, x, residual);
      residualsGraph->SetPointError(i, 0, graph_ag->GetErrorY(i)); // Assuming no error in x-direction, only y-direction
    }

    // Set up style for the residuals graph
    residualsGraph->SetTitle("Residui Fit");
    residualsGraph->SetMarkerStyle(20);
    residualsGraph->SetMarkerSize(1);
    residualsGraph->SetMarkerColor(kGray+1);

    // Draw the residuals graph
    residualsGraph->Draw("AP");
  
    auto legend2 = new TLegend();
    legend2 -> AddEntry(residualsGraph, "Residui Ag", "lpe");
    legend2 -> Draw();
    
    pad2 -> SetGrid();
    
    double xmin = 50;//pad2->GetUxmin();
    double xmax = 250;//pad2->GetUxmax();
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

  for(auto k : Counts_ag){
    ErrCounts_ag.push_back( sqrt(k) );
  }
  
  for(auto k : Counts_cu){
    ErrCounts_cu.push_back( sqrt(k) );
  }

 return;
}

// Calcolatore Rate ================================================
void RateCalculator(){
  
  double Holder;
  for( int i=0; i<Tempo_ag.size(); i++ ){
    Holder = 0;
    Holder = Counts_ag.at(i) / Tempo_ag.at(i);
    Rate_ag.push_back(Holder);
  }
  
  for( int i=0; i<Tempo_cu.size(); i++ ){
    Holder = 0;
    Holder = Counts_cu.at(i) / Tempo_cu.at(i);
    Rate_cu.push_back(Holder);
  }
  
 return;
}

// Calcolatore errore rate =========================================
void ErrorRateCalculator(){

  if( Counts_ag.size() != ErrCounts_ag.size() || Rate_ag.size() != Counts_ag.size() ) exit(-1);
  if( Counts_cu.size() != ErrCounts_cu.size() || Rate_cu.size() != Counts_cu.size() ) exit(-1);
  
  double Holder;
  for( int i=0; i<Counts_ag.size(); i++ ){
    Holder = 0;
    Holder = Rate_ag.at(i) * ( ErrCounts_ag.at(i) / Counts_ag.at(i) );
    ErrRate_ag.push_back(Holder);
  }
  
  for( int i=0; i<Counts_cu.size(); i++ ){
    Holder = 0;
    Holder = Rate_cu.at(i) * ( ErrCounts_cu.at(i) / Counts_cu.at(i) );
    ErrRate_cu.push_back(Holder);
  }

 return;
}
