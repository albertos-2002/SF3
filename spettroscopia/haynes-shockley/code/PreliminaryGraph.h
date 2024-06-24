//questa è pura code duplication 
//non ho voglia di sistemarlo

#include <iostream>
#include <string>

#include <TGraph.h>
#include <TCanvas.h>
#include <TAxis.h>

#include "ExternalObjects.h"

using namespace std;

void MakePreliminaryGraph(){

  string AdaptedTitle;
  string FluxControl;
  string SaveNameGraph;

  int HowManyPrimitiveIteration = 20;
  double HolderUpperBoundFit = 0.0;

  TCanvas* PreliminaryCanvas = new TCanvas("PreliminaryCanvas","PreliminaryCanvas"/*,1400,900*/);
  TGraph* PreliminaryGraph;
  
  /* ------------------------------------------------------------------------------------------------ */  
  
  for( auto index : FileName_dconst ){
  
    //PreliminaryCanvas -> cd();
  
    PreliminaryGraph = new TGraph( SegnaleTemporale_d.at(index).size(), 
                                   SegnaleTemporale_d.at(index).data(), 
                                   SegnaleVoltico_d.at(index).data() );
    
    AdaptedTitle = index + " D";
    PreliminaryGraph -> SetTitle( AdaptedTitle.c_str() );
    PreliminaryGraph -> GetXaxis() -> SetTitle("Tempo [s]");
    PreliminaryGraph -> GetYaxis() -> SetTitle("Segnale [V]");
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
    
    
    //salvataggio di un grafico preliminare
    if(SaveThaGraph){
      SaveNameGraph = PathToSaveGraph + "raw-data/unzoom/D-" + index + ".png";
      PreliminaryCanvas -> SaveAs( SaveNameGraph.c_str() );
      cout << " file saved succesfully " << endl;
    }
    
    //azioni per la modifica del grafico
    cout << " Hai a disposizione " << HowManyPrimitiveIteration << " azioni per modificare la canvas prima del continue " << endl;
    for(int i=0; i<HowManyPrimitiveIteration; i++){
      PreliminaryCanvas -> WaitPrimitive();
      cout << "Iterazioni restanti " << HowManyPrimitiveIteration-1-i << endl;
    }

	//inserimento del bound superiore per il successivo fit
	cout << endl;
	cout << " Inserici il valore numerico, con scala, per l'upper boud del fit " << endl;
	cout << " WARNING: inserting a letter will break the flux " << endl;
	cin >> HolderUpperBoundFit;
	FitUpperLevel_d.at(index) = HolderUpperBoundFit;
	if(DebugPrint) logFile << " PRELIMINARYGRAPH: upper boud d inseted " << endl;
	cout << endl;	

    
    //salvataggio del grafico modificato
    if(SaveThaGraph){
      SaveNameGraph = PathToSaveGraph + "raw-data/zoom/D-" + index + ".png";
      PreliminaryCanvas -> SaveAs( SaveNameGraph.c_str() );
      cout << " file saved succesfully " << endl;
    }
    
   
    //pulizia delle variabili usate
    FluxControl.clear();
    PreliminaryCanvas -> Clear();
    delete PreliminaryGraph;
    AdaptedTitle.clear();    
    HolderUpperBoundFit = 0.0;
  
  }
  
  /* ------------------------------------------------------------------------------------------------ */
  
  for( auto index : FileName_vconst ){
  
    PreliminaryGraph = new TGraph( SegnaleTemporale_v.at(index).size(), 
                                   SegnaleTemporale_v.at(index).data(), 
                                   SegnaleVoltico_v.at(index).data() );
    
    AdaptedTitle = index + " V";
    PreliminaryGraph -> SetTitle( AdaptedTitle.c_str() );
    PreliminaryGraph -> GetXaxis() -> SetTitle("Tempo [s]");
    PreliminaryGraph -> GetYaxis() -> SetTitle("Segnale [V]");
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
    
    
    //salvataggio di un grafico preliminare
    if(SaveThaGraph){
      SaveNameGraph = PathToSaveGraph + "raw-data/unzoom/V-" + index + ".png";
      PreliminaryCanvas -> SaveAs( SaveNameGraph.c_str() );
      cout << " file saved succesfully " << endl;
    }
    
    cout << " Hai a disposizione " << HowManyPrimitiveIteration <<  " azioni per modificare la canvas prima del continue " << endl;
    for(int i=0; i<HowManyPrimitiveIteration; i++){
      PreliminaryCanvas -> WaitPrimitive();
      cout << "Iterazioni restanti " << HowManyPrimitiveIteration-1-i << endl;
    }

	//inserimento del bound superiore per il successivo fit
	cout << endl;
	cout << " Inserici il valore numerico, con scala, per l'upper boud del fit " << endl;
	cout << " WARNING: inserting a letter will break the flux " << endl;
	cin >> HolderUpperBoundFit;
	FitUpperLevel_v.at(index) = HolderUpperBoundFit;
	if(DebugPrint) logFile << " PRELIMINARYGRAPH: upper boud v inseted " << endl;
	cout << endl;
	    
    
    //salvataggio del grafico modificato
    if(SaveThaGraph){
      SaveNameGraph = PathToSaveGraph + "raw-data/zoom/V-" + index + ".png";
      PreliminaryCanvas -> SaveAs( SaveNameGraph.c_str() );
      cout << " file saved succesfully " << endl;
    }
   
    //pulizia delle variabili usate
    FluxControl.clear();
    PreliminaryCanvas -> Clear();
    delete PreliminaryGraph;
    AdaptedTitle.clear();
    HolderUpperBoundFit = 0.0;
  
  }
  
  
  cout << "Next Enter will close the canvas" << endl;
  cin.clear(); // Clear any error flags
  cin.ignore();  // Ignore any leftover characters in the input buffer
  cin.get();     // Wait for the user to press Enter
  
  PreliminaryCanvas -> Close();
  delete PreliminaryCanvas;

  return;
}
