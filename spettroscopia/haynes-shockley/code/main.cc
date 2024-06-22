
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



	AppWTF -> Run(kTRUE);
	return 0;
}

/* ========================================================================================= */

void MapAndVectorMemoryAllocator(){

  SegnaleTemporale = new map< string, map< string, vector<double> > >;
  SegnaleVoltico   = new map< string, map< string, vector<double> > >;

  (*SegnaleTemporale)["d"] = new map< string, vector<double> >;
  (*SegnaleTemporale)["v"] = new map< string, vector<double> >; 
  (*SegnaleVoltico)["d"]   = new map< string, vector<double> >;
  (*SegnaleVoltico)["v"]   = new map< string, vector<double> >;
  if(DebugPrint) cout << " MAIN: created inner maps " << endl;
        
        
  auto MappaTempoD   = SegnaleTemporale -> at("d");
  auto MappaVolticaD = SegnaleVoltico   -> at("d");
  
  for( auto index : FileName_dconst ){
    MappaTempoD  [index]   = new vector<double>;
    MappaVolticaD[index] = new vector<double>;
    MappaTempoD   -> at(index) -> reserve(2016);
    MappaVolticaD -> at(index) -> reserve(2016);    
  }
  if(DebugPrint) cout << " MAIN: allocated vectors for D " << endl;
  
  
  auto MappaTempoV   = SegnaleTemporale -> at("v");
  auto MappaVolticaV = SegnaleVoltico   -> at("v");
  
  for( auto index : FileName_vconst ){
    MappaTempoV  [index]   = new vector<double>;
    MappaVolticaV[index] = new vector<double>;
    MappaTempoV   -> at(index) -> reserve(2016);
    MappaVolticaV -> at(index) -> reserve(2016);
  }
  if(DebugPrint) cout << " MAIN: allocated vectors for V " << endl;

  return;
};
