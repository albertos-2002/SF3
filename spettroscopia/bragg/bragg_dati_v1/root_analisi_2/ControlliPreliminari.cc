/* ======================================================= |
|                                                          |
| Codice per ottenere i grafici dei controlli prliminari   |
|                                                          |
| Il plot signal non rientra tra i controlli inseribili    |
| in questo scope                                          |
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

/* GLOBAL SCOPE ======================================================= */
//config
vector<string> NameOfCanvas1{ "baseline","integral", "vmax", "width", "ev" };
vector<string> NameOfCanvas2{ "integral:ev","vmax:ev","vmax:integral","vmax:width","width:ingtegral" };

bool draw_opt = false;

//app managment
int argAN;
char* argAL[1];
auto AppWTF = new TApplication("MakeThaApppp", &argAN, argAL);

//objects
map<string, TCanvas*> MapOfCanvas;
map<string, TH1F*> MapOf1Histo;
map<string, TH2F*> MapOf2Histo;
map< string, vector<float>* > MapDataHolder;

string FileToOpen;

TNtuple* nt;

/* FUNCTION DECLARATION =============================================== */

void AnalisisInfo( const int& argN, char* argL[] );
void MakeCanvasAndHisto();
void SaveCanvas();
void TFileFucker();

/* ==================================================================== */
int main( int argN, char* argL[] ){

  AnalisisInfo( argN, argL );

  TFileFucker();

  MakeCanvasAndHisto();

  //nt -> Print();
  
  SaveCanvas();

  AppWTF -> Run(kTRUE);
 return 0;
}
/* ==================================================================== */
void AnalisisInfo( const int& argN, char* argL[] ){

  if( argN > 1 ){
  
    for( int i=0; i<argN; i++ ){
    
      string check( argL[i] );
      if( check == "draw_canvas" ) draw_opt = true;
    
    }
  }
 return;
}
/* ==================================================================== */
void MakeCanvasAndHisto(){

 for (auto c : NameOfCanvas1){
 
  MapOfCanvas[c] = new TCanvas( c.c_str(), c.c_str(), 1920,1080 );
  MapOf1Histo[c] = new TH1F( c.c_str(), c.c_str(), 50, 0, 1000 );
 }
 
 for (auto c : NameOfCanvas2){
 
  MapOfCanvas[c] = new TCanvas( c.c_str(), c.c_str() );
  MapOf2Histo[c] = new TH2F( c.c_str(), c.c_str(), 50, 0, 1000, 50, 0, 1000 );
 }
 return;
}
/* ==================================================================== */
void SaveCanvas(){

  for(auto c : NameOfCanvas1){
    
    string NameProjection = c + " >> " + c;
    //disegno del relativo grafico nella corretta canvas
    MapOfCanvas.at(c) -> cd();
    
    auto tmpHolder1 = MapOf1Histo.at(c);
    if(!tmpHolder1){
      cout << "Entered in the if for holder1" << endl;
  
      for(auto j : *MapDataHolder.at(c) ){
        tmpHolder1 -> Fill(j);
      }
      tmpHolder1 -> SetLineColor(kBlue);
      tmpHolder1 -> Draw();
    }
    
/*    auto tmpHolder2 = MapOf2Histo.at(c);
    if(!tmpHolder2){
      cout << "entered in the if for holder2" << endl;
    
      for(auto j : *MapDataHolder.at(c) ){
        //tmpHolder2 -> Fill(j);
      }
      tmpHolder2 -> SetLineColor(0);
      tmpHolder2 -> Draw("ALP");
    }
*/   
    MapOfCanvas.at(c) -> SetGrid();
    
    //MapOfCanvas.at(c) -> Print();
  
  }  

 return;
}
/* ==================================================================== */
void TFileFucker(){

  for(auto c : NameOfCanvas1){
    MapDataHolder[c] = new vector<float>;
    MapDataHolder.at(c) -> reserve(3100);
  }

  cout << "Dame el nome del file da verzare " << endl;
  cin >> FileToOpen;

  TFile* FileReading = TFile::Open( FileToOpen.c_str() );  
  TTree* IHopeIsTheTree = dynamic_cast<TTree*>(FileReading->Get("nt"));
  
  for(auto c : NameOfCanvas1){
  
    float BranchData;
    IHopeIsTheTree -> SetBranchAddress( c.c_str() , &BranchData );
  
    double IHopeIsTheNumberOfEntries = IHopeIsTheTree -> GetEntries();
  
    for( int i=0; i<IHopeIsTheNumberOfEntries; i++){
  
      IHopeIsTheTree -> GetEntry(i);
      cout << BranchData << endl;
      MapDataHolder.at(c) -> push_back(BranchData);  
    }
  
    //nt = (TNtuple*) FileReading -> Get( "nt" );
  }
  
  return;
}
/* ==================================================================== */
/* ==================================================================== */
/* ==================================================================== */
/* ==================================================================== */
/* ==================================================================== */
/* ==================================================================== */
/* ==================================================================== */
/* ==================================================================== */
/* ==================================================================== */
/* ==================================================================== */
/* ==================================================================== */
/* ==================================================================== */
/* ==================================================================== */
/* ==================================================================== */

