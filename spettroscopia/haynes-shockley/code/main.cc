#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <cmath>
#include <map>

#include <TApplication.h>
#include <TGraphErrors.h>
#include <TMultiGraph.h>
#include <TLegend.h>
#include <TFile.h>
#include <TCanvas.h>
#include <TF1.h>
#include <TPad.h>
#include <TLine.h>
#include <TAxis.h>
#include <TSystem.h>

#include "Reader.h"
#include "CalcolatoreVelocita.h"
#include "CalcolatoreMobilita.h"
#include "DisplayTemperatura.h"
#include "ExternalObjects.h"
#include "PreliminaryGraph.h"
#include "FitPreliminaryGraph.h"
using namespace std;

/* ========================================================================================= */

int main (int argN, char* argL[]) {

	auto AppWTF = new TApplication("MakeThaApppp", &argN, argL);

       
        //flag setting
		AnalysisInfo();

        

        //allocazione della memoria a livello di mappe e vettori
        MapAndVectorMemoryAllocator();
        if(DebugPrint) logFile << " MAIN: callED the memory allocator " << endl;

        
        
        //lettura da file
        if(FunctionActivator.at("ReadShit") == "y")              ReadShit();
        if(DebugPrint) logFile << " MAIN: callED read file " << endl;
        
        //si occupa di creare i grafici dei dati appena letti
        if(FunctionActivator.at("MakePreliminaryGraph") == "y")  MakePreliminaryGraph();
        if(DebugPrint) logFile << " MAIN: callED preliminay graph " << endl;     

        //fitting dei grafici preliminari per ottenerne i parametri
        if(FunctionActivator.at("FitPreliminaryGraph") == "y")   FitPreliminaryGraph(); 
        if(DebugPrint) logFile << " MAIN: callED fit preliminay graph " << endl;


        
        //costruisce il grafico che fa vedere la temperatura durante la presa dati
        if(FunctionActivator.at("MakeTemperatureGraph") == "y")  MakeTemperatureGraph();
        if(DebugPrint) logFile << " MAIN: callED make temperature graph " << endl;
        
        


        logFile.close();

	AppWTF -> Run(kTRUE);
	return 0;
}

/* ========================================================================================= */

void AnalysisInfo(){

	//controllo sulla corretta apertura del file di logging
	if( !logFile.is_open() ) cout << " Errore apertura file di log " << endl;

	//constrollo sul salvataggio dei grafici
	  cout << " Salvare i grafici prodotti [Y/N]: " << endl;
	  cin >> InputForSaveTheGraph;
	
	  if (InputForSaveTheGraph == "y" || InputForSaveTheGraph == "Y" ) {
	 	 SaveThaGraph = true;
	  } else if (InputForSaveTheGraph == "n" || InputForSaveTheGraph == "N") {
	     SaveThaGraph = false;
	  } else {
	     cout << "Invalid input. Assuming 'no' (0)" << endl;
	     SaveThaGraph = false;
	  }


	//attivazione/disattivazione chiamata funzioni
	string FunctionActivatorFlag = "";
	FunctionActivator = map<string,string>();
    if(DebugPrint) logFile << " MAIN: start process of activator calling " << endl;

    cout << " Select function to activate [Y/N] " << endl;
    
	cout << " ReadShit " << endl;
	cin >> FunctionActivatorFlag;
	FunctionActivator["ReadShit"] = FunctionActivatorFlag;

	cout << " MakePreliminaryGraph " << endl;
    cin >> FunctionActivatorFlag;
    FunctionActivator["MakePreliminaryGraph"] = FunctionActivatorFlag;

    cout << " FitPreliminaryGraph " << endl;
    cin >> FunctionActivatorFlag;
    FunctionActivator["FitPreliminaryGraph"] = FunctionActivatorFlag;

	cout << " MakeTemperatureGraph " << endl;
    cin >> FunctionActivatorFlag;
    FunctionActivator["MakeTemperatureGraph"] = FunctionActivatorFlag;
    
	if(DebugPrint) logFile << " MAIN: end process of activator calling " << endl;
		

	return;
}

/* ========================================================================================= */

void MapAndVectorMemoryAllocator(){

  SegnaleTemporale_d = DataMap();
  SegnaleTemporale_v = DataMap();
  SegnaleVoltico_d = DataMap(); 
  SegnaleVoltico_v = DataMap();

  FitUpperLevel_d = DataMap2();
  FitUpperLevel_v = DataMap2();

  
  for( auto index : FileName_dconst ){
    SegnaleTemporale_d[index] = vector<double>();
    SegnaleVoltico_d  [index] = vector<double>();
    SegnaleTemporale_d.at(index).reserve(2002);
    SegnaleVoltico_d  .at(index).reserve(2002);    

    FitUpperLevel_d[index] = 0.0; 
  }
  if(DebugPrint) logFile << " MAIN: allocated vectors for D " << endl;

  
  for( auto index : FileName_vconst ){
    SegnaleTemporale_v[index] = vector<double>();
    SegnaleVoltico_v  [index] = vector<double>();
    SegnaleTemporale_v.at(index).reserve(2002);
    SegnaleVoltico_v  .at(index).reserve(2002);

    FitUpperLevel_v[index] = 0.0;
  }
  if(DebugPrint) logFile << " MAIN: allocated vectors for V " << endl;

  
  if(DebugPrint){
    logFile << " prova di accesso ad ogni vettore nella mappa " << endl;
    for( auto index : FileName_dconst ){
      auto AssignmentTestT = SegnaleTemporale_d.at(index);
      logFile << "accessed to D: " << index << " for time " << endl;
      auto AssignmentTestV = SegnaleVoltico_d.at(index);
      logFile << "accessed to D: " << index << " for volt " << endl;
    }
    for( auto index : FileName_vconst ){
      auto AssignmentTestT = SegnaleTemporale_v.at(index);
      logFile << "accessed to V: " << index << " for time " << endl;
      auto AssignmentTestV = SegnaleVoltico_v.at(index);
      logFile << "accessed to V: " << index << " for volt " << endl;
    }
  }

  return;
};

/* ========================================================================================= */



//logFile.open("logs.txt");
