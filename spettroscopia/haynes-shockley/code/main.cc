
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

#include "Reader.h"
#include "CalcolatoreVelocita.h"
#include "CalcolatoreMobilita.h"
#include "DisplayTemperatura.h"
#include "ExternalObjects.h"
#include "PreliminaryGraph.h"

using namespace std;

/* ========================================================================================= */

int main (int argN, char* argL[]) {

	auto AppWTF = new TApplication("MakeThaApppp", &argN, argL);


        //constrollo sul salvataggio dei grafici
	bool SaveThaGraph = false;
        int InputForSaveTheGraph = 0;

/*        cout << "Salvare i grafici prodotti (1=y, 0=n): " << std::endl;
        cin >> InputForSaveTheGraph;

        if (InputForSaveTheGraph == 1) {
          SaveThaGraph = true;
        } else if (InputForSaveTheGraph == 0) {
          SaveThaGraph = false;
        } else {
          cout << "Invalid input. Assuming 'no' (0)." << std::endl;
          SaveThaGraph = false;
        }
*/
        //allocazione della memoria a livello di mappe e vettori
        MapAndVectorMemoryAllocator();
        if(DebugPrint) cout << " MAIN: callED the memory allocator " << endl;
        
        //lettura da file
        ReadShit();
        if(DebugPrint) cout << " MAIN: callED read file " << endl;
        
        //si occupa di creare i grafici dei dati appena letti
        MakePreliminaryGraph();
        if(DebugPrint) cout << " MAIN: callED preliminay graph " << endl;


	AppWTF -> Run(kTRUE);
	return 0;
}

/* ========================================================================================= */

void MapAndVectorMemoryAllocator(){

  SegnaleTemporale_d = DataMap();
  SegnaleTemporale_v = DataMap();
  SegnaleVoltico_d = DataMap(); 
  SegnaleVoltico_v = DataMap();

  
  for( auto index : FileName_dconst ){
    SegnaleTemporale_d[index] = vector<double>();
    SegnaleVoltico_d  [index] = vector<double>();
    SegnaleTemporale_d.at(index).reserve(2002);
    SegnaleVoltico_d  .at(index).reserve(2002);    
  }
  if(DebugPrint) cout << " MAIN: allocated vectors for D " << endl;

  
  for( auto index : FileName_vconst ){
    SegnaleTemporale_v[index] = vector<double>();
    SegnaleVoltico_v  [index] = vector<double>();
    SegnaleTemporale_v.at(index).reserve(2002);
    SegnaleVoltico_v  .at(index).reserve(2002);
  }
  if(DebugPrint) cout << " MAIN: allocated vectors for V " << endl;
  
  if(DebugPrint){
    cout << " prova di accesso ad ogni vettore nella mappa " << endl;
    for( auto index : FileName_dconst ){
      auto AssignmentTestT = SegnaleTemporale_d.at(index);
      cout << "accessed to D: " << index << " for time " << endl;
      auto AssignmentTestV = SegnaleVoltico_d.at(index);
      cout << "accessed to D: " << index << " for volt " << endl;
    }
    for( auto index : FileName_vconst ){
      auto AssignmentTestT = SegnaleTemporale_v.at(index);
      cout << "accessed to V: " << index << " for time " << endl;
      auto AssignmentTestV = SegnaleVoltico_v.at(index);
      cout << "accessed to V: " << index << " for volt " << endl;
    }
  }

  return;
};


