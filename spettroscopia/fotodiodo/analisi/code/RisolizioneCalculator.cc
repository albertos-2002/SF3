/* =================================================================
|                                                                  |
| Calcolatore per la risoluzione energetica                        |
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
|                                                                  |
|   Assimuamo che l'energia del picco sia di 60 keV                |
|     e assumiamo che sia noto senza errore                        |
|                                                                  |
================================================================= */

// GLOBAL SCOPE ====================================================
vector<double> ShapingTime = {3,4}; //micro secondi
vector<double> SigmaGaussianaFit = { 1.35139e+01, 1.37335e+01 }; 
vector<double> ErrSigmaGaussianaFit = { 2.53407e-01, 2.77488e-01 };

vector<double> Risoluzione;
vector<double> ErrRisoluzione;

double TheConstant = 2 * sqrt(2) * sqrt( log(2) );
vector<double> TheEnergy = {539.3,530}; //le medie delle gaussiane

//------------------------------------------------------------------

int main(int argN, char* argL[]){

  TApplication* AppWTF = new TApplication("ThisShouldBeAnApp", &argN, argL);
  
  Risoluzione.reserve(2);
  ErrRisoluzione.reserve(2);
  
  double Holder;
  //calcolo delle risoluzioni
  for(int i=0; i<ShapingTime.size(); i++){
    Holder = 0;
    Holder = TheConstant * SigmaGaussianaFit.at(i) / TheEnergy.at(i);
    Risoluzione.push_back(Holder);
    
    Holder = 0;
    Holder = TheConstant * ErrSigmaGaussianaFit.at(i) / TheEnergy.at(i);
    ErrRisoluzione.push_back(Holder);
  }
  
  //creazione del grafico
  TCanvas* can = new TCanvas( "can", "can", 1920, 1080 );
  
  auto graph = new TGraphErrors( Risoluzione.size(), ShapingTime.data(), Risoluzione.data(), 0, ErrRisoluzione.data() );
       graph -> SetTitle("Risoluzione VS Shaping Time");
       graph -> GetXaxis() -> SetTitle("Shapint Time [us]");
       graph -> GetYaxis() -> SetTitle("Risoluzione");
       graph -> SetMarkerStyle(8);
       
  can -> SetGrid();
  graph -> Draw("ap");
  
  auto legend = new TLegend();
       legend -> AddEntry( graph, "Data", "lpe");
       legend -> Draw();
  
  cout << "Risoluzioni con relativo errore: " << endl;
  cout << endl;
  cout << Risoluzione.at(0) << " \\pm " << ErrRisoluzione.at(0) << endl;
  cout << Risoluzione.at(1) << " \\pm " << ErrRisoluzione.at(1) << endl;
  cout << endl;
  
  AppWTF -> Run(kTRUE);

 return 0;
}
