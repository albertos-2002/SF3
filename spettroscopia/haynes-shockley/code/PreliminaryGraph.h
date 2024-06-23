//questa è pura code duplication 
//non ho voglia di sistemarlo

#include <iostream>
#include <string>

#include <TGraphErrors.h>
#include <TMultiGraph.h>
#include <TLegend.h>
#include <TFile.h>
#include <TCanvas.h>
#include <TF1.h>
#include <TPad.h>
#include <TLine.h>
#include <TAxis.h>

#include "ExternalObjects.h"

using namespace std;

void MakePreliminaryGraph(){

  string AdaptedTitle;

  auto PreliminaryCanvas = new TCanvas("PreliminaryCanvas","PreliminaryCanvas",1000,800);
  TGraph* PreliminaryGraph;
  
  /* ------------------------------------------------------------------------------------------------ */  
  
  for( auto index : FileName_dconst ){
  
    PreliminaryGraph = new TGraph( SegnaleTemporale_d.at(index).size(), 
                                   SegnaleTemporale_d.at(index).data(), 
                                   SegnaleVoltico_d.at(index).data() );
    
    AdaptedTitle = index + " D";
    PreliminaryGraph -> SetTitle( AdaptedTitle.c_str() );
    PreliminaryGraph -> GetXaxis() -> SetTitle("Tempo [ ]");
    PreliminaryGraph -> GetYaxis() -> SetTitle("Segnale [ ]");
    PreliminaryGraph -> SetLineColor(kBlue);  // Set the line color for the graph
    PreliminaryGraph -> SetMarkerStyle(8);   // Set the marker style for the graph
                                 
    PreliminaryGraph -> Draw("AP");                             
    PreliminaryCanvas -> SetGrid();
    PreliminaryCanvas -> BuildLegend();
    
    //update della GUI del grafico
    PreliminaryCanvas->Modified();
    PreliminaryCanvas -> Update();
    gSystem->ProcessEvents();
    
    cout << "Press Enter to continue to the next graph..." << endl;
    cin.clear(); // Clear any error flags
    cin.ignore();  // Ignore any leftover characters in the input buffer
    cin.get();     // Wait for the user to press Enter
    
    //pulizia delle variabili usate
    PreliminaryCanvas->Clear();
    delete PreliminaryGraph;
    AdaptedTitle.clear();    
  
  }
  
  /* ------------------------------------------------------------------------------------------------ */
  
  for( auto index : FileName_vconst ){
  
    PreliminaryGraph = new TGraph( SegnaleTemporale_v.at(index).size(), 
                                   SegnaleTemporale_v.at(index).data(), 
                                   SegnaleVoltico_v.at(index).data() );
    
    AdaptedTitle = index + " V";
    PreliminaryGraph -> SetTitle( AdaptedTitle.c_str() );
    PreliminaryGraph -> GetXaxis() -> SetTitle("Tempo [ ]");
    PreliminaryGraph -> GetYaxis() -> SetTitle("Segnale [ ]");
    PreliminaryGraph -> SetLineColor(kBlue);  // Set the line color for the graph
    PreliminaryGraph -> SetMarkerStyle(8);   // Set the marker style for the graph
                                 
    PreliminaryGraph -> Draw("AP");                             
    PreliminaryCanvas -> SetGrid();
    PreliminaryCanvas -> BuildLegend();
    
    //update della GUI del grafico
    PreliminaryCanvas->Modified();
    PreliminaryCanvas -> Update();
    gSystem->ProcessEvents();
    
    cout << "Press Enter to continue to the next graph..." << endl;
    cin.clear(); // Clear any error flags
    cin.ignore();  // Ignore any leftover characters in the input buffer
    cin.get();     // Wait for the user to press Enter
    
    //pulizia delle variabili usate
    PreliminaryCanvas->Clear();
    delete PreliminaryGraph;
    AdaptedTitle.clear();
  
  }
  
  
  cout << "Next Enter will close the canvas" << endl;
  cin.clear(); // Clear any error flags
  cin.ignore();  // Ignore any leftover characters in the input buffer
  cin.get();     // Wait for the user to press Enter
  
  PreliminaryCanvas -> Close();

  return;
}
