/* ======================================================= |
|                                                          |
| Codice per ottenere i grafici dei controlli prliminari   |
|                                                          |
| Il plot signal non rientra tra i controlli inseribili    |
| in questo scope                                          |
|                                                          |
| Questa è una versione hardcoded                          |
|                                                          |
========================================================= */

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "TApplication.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TH2F.h"
#include "TLegend.h"
#include "TH1F.h"
#include "TNtuple.h"
#include "TTree.h"
//#include ".h"
//#include ".h"
using namespace std;

//global scope object

TCanvas* ev       = new TCanvas( "ev","ev", 1920, 1080 );
TCanvas* baseline = new TCanvas( "baseline","baseline", 1920, 1080 );
TCanvas* integral = new TCanvas( "integral","integral", 1920, 1080 );
TCanvas* vmax     = new TCanvas( "vmax","vmax", 1920, 1080 );
TCanvas* width    = new TCanvas( "width","width", 1920, 1080 );

vector<double> vectorEV;
vector<double> vectorBASELINE;
vector<double> vectorINTEGRAL;
vector<double> vectorVMAX;
vector<double> vectorWIDTH;

// ------------------------------------------------------------------------

string FileToOpen = "AlgoritmoV1/anabragg_bragg3000_500_th15.root";

// ------------------------------------------------------------------------

int main( int argN, char* argL[] ){

  TApplication* AppWTF = new TApplication("ThaApp", &argN, argL);
  
//reading
  TFile* FileReading = TFile::Open( FileToOpen );  
  TTree* IHopeIsTheTree = dynamic_cast<TTree*>(FileReading->Get("nt"));
  float dataEV,
        dataINTEGRAL,
        dataVMAX,
        dataWIDTH,
        dataBASELINE;
  
  IHopeIsTheTree -> SetBranchAddress( "ev" , &dataEV );
  IHopeIsTheTree -> SetBranchAddress( "integral" , &dataINTEGRAL );
  IHopeIsTheTree -> SetBranchAddress( "vmax" , &dataVMAX );
  IHopeIsTheTree -> SetBranchAddress( "width" , &dataWIDTH );
  IHopeIsTheTree -> SetBranchAddress( "baseline" , &dataBASELINE );
        
  double IHopeIsTheNumberOfEntries = IHopeIsTheTree -> GetEntries();
  for( int i=0; i<IHopeIsTheNumberOfEntries; i++){
  
      IHopeIsTheTree -> GetEntry(i);
      
      vectorEV       -> push_back(dataEV);
      vectorINTEGRAL -> push_back(dataINTEGRAL);
      vectorVMAX     -> push_back(dataVMAX);
      vectorWIDTH    -> push_back(dataWIDTH);
      vectorBASELINE -> push_back(dataBASELINE);
    }
// ------------------------------------------------------------------------   
  
  
  
  
  
  
  AppWTF -> Run(kTRUE);


}
