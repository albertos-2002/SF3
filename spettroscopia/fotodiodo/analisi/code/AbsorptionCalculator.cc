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
|    |
|    |
|    |
|    |
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


       multi -> Add(graph_ag);
       multi -> Add(graph_cu);
       
  multi -> Draw("ap");
  can -> SetGrid();
  can -> BuildLegend();
  
  
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
