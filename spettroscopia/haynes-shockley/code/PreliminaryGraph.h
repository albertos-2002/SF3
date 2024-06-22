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

  string EventControl;

  auto PreliminaryCanvas = new TCanvas("PreliminaryCanvas","PreliminaryCanvas",1000,800);
  TGraph* PreliminaryGraph;
  
  
  for( auto index : FileName_dconst ){
  
    PreliminaryGraph = new TGraph( SegnaleTemporale_d.at(index).size(), 
                                   SegnaleTemporale_d.at(index).data(), 
                                   SegnaleVoltico_d.at(index).data() );
                                   
    PreliminaryGraph -> SetTitle( index.c_str() );
    PreliminaryGraph -> GetXaxis() -> SetTitle("Tempo [ ]");
    PreliminaryGraph -> GetYaxis() -> SetTitle("Segnale [ ]");
                                 
    PreliminaryGraph -> Draw("AP");                             
    PreliminaryCanvas -> SetGrid();
    PreliminaryCanvas -> BuildLegend();
    
    PreliminaryCanvas -> Update();
    
    cout << " Insert string to control events " << endl;
    cout << " Insert c to continue " << endl;
    
    while( EventControl != "c" ){
      cin >> EventControl;
    }
    EventControl = "hflkdshfkdljfhjkd";
    delete PreliminaryGraph;
  
  }
  
  
  
  
  
  
  

  return;
}
