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
  string FluxControl;

  TCanvas* PreliminaryCanvas = new TCanvas("PreliminaryCanvas","PreliminaryCanvas",1400,900);
  TGraph* PreliminaryGraph;
  
  /* ------------------------------------------------------------------------------------------------ */  
  
  for( auto index : FileName_dconst ){
  
    //PreliminaryCanvas -> cd();
  
    PreliminaryGraph = new TGraph( SegnaleTemporale_d.at(index).size(), 
                                   SegnaleTemporale_d.at(index).data(), 
                                   SegnaleVoltico_d.at(index).data() );
    
    AdaptedTitle = index + " D";
    PreliminaryGraph -> SetTitle( AdaptedTitle.c_str() );
    PreliminaryGraph -> GetXaxis() -> SetTitle("Tempo [ ]");
    PreliminaryGraph -> GetYaxis() -> SetTitle("Segnale [ ]");
    PreliminaryGraph -> SetLineColor(kBlue);  // Set the line color for the graph
    PreliminaryGraph -> SetMarkerStyle(6);   // Set the marker style for the graph
    PreliminaryGraph -> SetMarkerSize(2);
                                 
    //PreliminaryCanvas -> Draw();
    PreliminaryGraph -> Draw("AP");                             
    PreliminaryCanvas -> SetGrid();
    PreliminaryCanvas -> BuildLegend();
    
    //update della GUI del grafico
    PreliminaryCanvas->Modified();
    PreliminaryCanvas -> Update();
    gSystem->ProcessEvents();
    
    cout << " Hai a disposizione 30 azioni per modificare la canvas prima del continue " << endl;
    for(int i=0; i<30; i++){
      PreliminaryCanvas -> WaitPrimitive();
      cout << "Iterazioni restanti " << 29-i << endl;
    }
    
   
    //pulizia delle variabili usate
    FluxControl.clear();
    PreliminaryCanvas -> Clear();
    delete PreliminaryGraph;
    AdaptedTitle.clear();    
  
  }
  
  /* ------------------------------------------------------------------------------------------------ */
  
  for( auto index : FileName_vconst ){
  
    auto PreliminaryCanvas = new TCanvas("PreliminaryCanvas","PreliminaryCanvas",1400,900);
  
    PreliminaryGraph = new TGraph( SegnaleTemporale_v.at(index).size(), 
                                   SegnaleTemporale_v.at(index).data(), 
                                   SegnaleVoltico_v.at(index).data() );
    
    AdaptedTitle = index + " V";
    PreliminaryGraph -> SetTitle( AdaptedTitle.c_str() );
    PreliminaryGraph -> GetXaxis() -> SetTitle("Tempo [ ]");
    PreliminaryGraph -> GetYaxis() -> SetTitle("Segnale [ ]");
    PreliminaryGraph -> SetLineColor(kBlue);  // Set the line color for the graph
    PreliminaryGraph -> SetMarkerStyle(6);   // Set the marker style for the graph
    PreliminaryGraph -> SetMarkerSize(2);
                                 
    PreliminaryGraph -> Draw("AP");                             
    PreliminaryCanvas -> SetGrid();
    PreliminaryCanvas -> BuildLegend();
    
    //update della GUI del grafico
    PreliminaryCanvas->Modified();
    PreliminaryCanvas -> Update();
    gSystem->ProcessEvents();
    
    cout << " Hai a disposizione 30 azioni per modificare la canvas prima del continue " << endl;
    for(int i=0; i<30; i++){
      PreliminaryCanvas -> WaitPrimitive();
      cout << "Iterazioni restanti " << 29-i << endl;
    }
    
   
    //pulizia delle variabili usate
    FluxControl.clear();
    PreliminaryCanvas -> Clear();
    delete PreliminaryGraph;
    AdaptedTitle.clear();
  
  }
  
  
  cout << "Next Enter will close the canvas" << endl;
  cin.clear(); // Clear any error flags
  cin.ignore();  // Ignore any leftover characters in the input buffer
  cin.get();     // Wait for the user to press Enter
  
  PreliminaryCanvas -> Close();
  delete PreliminaryCanvas;

  return;
}
