/* ========================================================================= 
 |                                                                         |
 | Il codice è adattato per analizzare 9 picchi con                        |
 | split zeeman normale, per un totale di 18 fit gaussiani                 | 
 |                                                                         |
 | Sotto gli include è disponibile una sezione in cui                      |
 | configurare i parametri numerici per l'analisi                          |
 | La configurazione non è totale in quanto permangono                     |
 | un numero limitato ma non indifferente di "dettagli" hardcoded          |
 |                                                                         |
========================================================================== */


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "TGraph.h"
#include "TCanvas.h"
#include "TApplication.h"
#include "TAxis.h"
#include "TSystem.h"
#include "TGraphPainter.h"
#include "TMultiGraph.h"
#include "TF1.h"
#include "TPaveStats.h"
#include "TLegend.h"
using namespace std;

/* CONFIGURATION SECTION =================================================================== */

 string NomeGrafico = "B ruotato polarizzato";
 string DrawOptionForAll = "APLF";
 
 //range di taglio per lo spettro (in forma generale)
 int TaglioXminM = 3780;
 int TaglioXmaxM = 6060;
 int TaglioYminM = 8;
 int TaglioYmaxM = 58;
 
 //range di taglio per lo spettro (zoom sui picchi di interesse)
 vector<unsigned int> SplitPoint;//{, , , , , , , , , , , , , , , , , , };
 vector<string> Letters;//{"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R"};
 vector<float> FitRangeLowerBound;//{ , , , , , , , , , , , , , , , , , };
 vector<float> FitRangeUpperBound;//{ , , , , , , , , , , , , , , , , , };
 string NameFittingFunction = "gaus";
 
 //splitting
 int HowManyPeaks = 18;

/* ========================================================================================= */

/* GLOBAL VARIABLE DEFINITION ============================================================== */
//"debugging" options
bool db_print = false;
bool db_one = false;
bool db_two = false;
bool fit_zone = false;
bool cut_zone = false;

//vector of data
vector<float> GreyValue;
vector<float> PointPosition;

//root canvas and app
int VoidArgumentI;
char* VoidArgumentC[1];
TApplication* AppWTF = new TApplication("PublicConstructor", &VoidArgumentI, VoidArgumentC); 
auto canvas_one = new TCanvas("can", "can");

//vector for the splitting
vector< vector<double>* > VectorHolderX;
vector< vector<double>* > VectorHolderY;

//vector for the multi
vector< TGraph* > VectorGraph;

//vector for the fitting
vector< TF1* > VectorFunction;


/*  FUNCTION DECLARATION =================================================================== */

void ReadShit();
void AnalisisInfo(const int &argN, char* argL[]);
void MakeGeneralSpectrum();
void DataCutter();
void MakeMulti();
void MakeThaLegend();
void MakeThaFit();

/* ----------------------------------------------------------------------------------------- */

int main(int argN, char* argL[]){

  AnalisisInfo(argN, argL);

  canvas_one -> SetGrid();

  GreyValue.reserve(10000);
  PointPosition.reserve(10000);


  ReadShit();
  
  if(db_one) MakeGeneralSpectrum();
  
  if(db_two){ 
  
    DataCutter();
    MakeMulti();
    //fit of peak
    if(fit_zone) MakeThaFit();
    MakeThaLegend();
    
    AppWTF -> Run(kTRUE);   
  }

  return 0;
}

/* ............................................................................................................. */
/* DATA READING FUNCTION ======================================================================================= */
void ReadShit(){

  //name 
  string name_of_file;
  cout << "insert csv file name (path if required); " << endl;
  cin >> name_of_file;
  
  //opening
  ifstream CSVFile_in (name_of_file);
  if ( !CSVFile_in.is_open() ) {
    cout << "the fooking file is not opening !!! " << endl;
  }
  
  //reading
  //il file che consideriamo noi TEORICAMENTE hanno solo una riga inutile all inizio
  string LineToDiscard;
  string LineToKeep;
  string LineToVector;
  string LineToVector2;
  
  //discard of first line
  getline( CSVFile_in, LineToDiscard );
  
  //reading of lines
  float tmpDataStorage;
  while ( getline( CSVFile_in, LineToKeep ) ){
    istringstream StringToStream( LineToKeep );  
    
    //first column
    if( getline(StringToStream, LineToVector2, ',') ){
      tmpDataStorage = 0;
      tmpDataStorage = stof(LineToVector2);
      PointPosition.push_back(tmpDataStorage);
    }
    else{
      cout << "why the fuck i can't read evend the data that i do not need " << endl;
    }
    
    //second column
    if( getline( StringToStream, LineToVector, ',' ) ){
       tmpDataStorage = 0;
       tmpDataStorage = stof(LineToVector);
       GreyValue.push_back(tmpDataStorage);
    }
    else{
      cout << "that whas the data i needed (sad moth stiker)" << endl; 
    }
    
  }

 return;
}
/* ............................................................................................................. */
/* ANALISIS OPTION SELECTOR ==================================================================================== */
void AnalisisInfo(const int &argN, char* argL[]){
  if (argN > 1) {
    for (int i=0; i<argN; i++){
      string debug_option_check( argL[i] );
      if( debug_option_check == "db" ) db_print = true;
      if( debug_option_check == "1" ) db_one = true;
      if( debug_option_check == "2" ) db_two = true;
      if( debug_option_check == "fit" ) fit_zone = true;
      if( debug_option_check == "cut" ) cut_zone = true;
      if( debug_option_check == "nocolor" ) DrawOptionForAll = "APL";
    }
  }
  return;
}
/* ............................................................................................................. */
/* SEZIONE MONOGRAFICO ========================================================================================= */
void MakeGeneralSpectrum(){

    //string InternalNomeGrafico = NomeGrafico;
    int NumeroPunti = PointPosition.size();
    auto SpettroCheNonEHisto = new TGraph( NumeroPunti, PointPosition.data(), GreyValue.data() );

    SpettroCheNonEHisto -> SetTitle( NomeGrafico.c_str() );
    SpettroCheNonEHisto -> GetYaxis() -> SetTitle("Gray Scale [a.u.]");
    SpettroCheNonEHisto -> GetXaxis() -> SetTitle("Distance [pixel]");
    SpettroCheNonEHisto -> SetMarkerColor(kBlue-4);
    SpettroCheNonEHisto -> SetMarkerSize(5);
  
    SpettroCheNonEHisto -> SetFillColor(41);
    SpettroCheNonEHisto -> SetFillStyle(3001);
    
    if(cut_zone){
      SpettroCheNonEHisto -> GetXaxis() -> SetLimits(TaglioXminM,TaglioXmaxM);
      SpettroCheNonEHisto -> GetYaxis() -> SetRangeUser(TaglioYminM,TaglioYmaxM);
    }
            
    SpettroCheNonEHisto -> Draw( DrawOptionForAll.c_str() );
    canvas_one -> BuildLegend();

    AppWTF -> Run(kTRUE);
  
  return;
}
/* ............................................................................................................. */
/* SPLITTING DEL VETTORE DEI DATI ============================================================================== */
void DataCutter(){
  
    //in numero di tagli dovrebbe essere proporzionale al numero di picchi
    //da fittare, in modo tale da poter avere la fit box per ognuno di essi
    
    VectorHolderX.reserve(HowManyPeaks);
    for (int i=0; i<HowManyPeaks; i++) {
      VectorHolderX.push_back( new vector<double> );
      VectorHolderX.at(i) -> reserve(1000);
    }   
    if(db_print) cout << " vector of vector for X created correctly" << endl;
      
    VectorHolderY.reserve(HowManyPeaks);
    for (int i=0; i<HowManyPeaks; i++) {
      VectorHolderY.push_back( new vector<double> );
      VectorHolderY.at(i) -> reserve(1000);
    }    
    if(db_print) cout << " vector of vector for Y created correctly" << endl;
    
    //cutting data
    for(unsigned int c = 0; c < ( SplitPoint.size()-1 ); c++){

      for(int j= SplitPoint.at(c); j<= SplitPoint.at(c+1); j++){
         VectorHolderX.at(c) -> push_back( j );
         VectorHolderY.at(c) -> push_back( GreyValue.at(j) );
      } 
   } 
   
   if (db_print) cout << " filling of the vector of X and Y done correctly" << endl;

  return;
}
/* ............................................................................................................. */
/* MULTIGRAFH BUILDER ========================================================================================== */
void MakeMulti(){

  TMultiGraph* mg = new TMultiGraph("multi", "multi");
  
  VectorGraph.reserve(HowManyPeaks);
    
  for (int i=0; i<HowManyPeaks; i++){
    VectorGraph.push_back( new TGraph( VectorHolderX.at(i) -> size(), 
                                       VectorHolderX.at(i) -> data(), 
                                       VectorHolderY.at(i) -> data() 
                                       ) 
                         );
    if(db_print) cout << "graph filled correctly" << endl; 
      
    TGraph* g = VectorGraph.at(i);
    if(db_print) cout << " element extracted from the vector of graph" << endl;
                    
    g -> SetFillStyle(3001);
    g -> SetLineColor(kBlack);
    g -> SetLineWidth(1.5);
      
    if(i==1)  g -> SetTitle("Zona sinistra");
    if(i==8)  g -> SetTitle("Zona centrale");
    if(i==16) g -> SetTitle("Zona destra");
    
    if( i<6 )           g -> SetFillColor(42);
    if( i>=6 && i<12 )  g -> SetFillColor(30);
    if( i>=12 && i<18 ) g -> SetFillColor(38);
            
    if(db_print) cout << " graph colored correctrly" << endl;
  }    
  if(db_print) cout << " managing of the 18 TGraph done correctly" << endl;

  //style of multi
  mg -> SetTitle( NomeGrafico.c_str() );
  mg -> GetXaxis() -> SetTitle("Distance [pixel]");
  mg -> GetYaxis() -> SetTitle("Gray Scale [a.u.]");
 
  //adding of graph
  for(auto g : VectorGraph) mg->Add(g);  
  if(db_print) cout << " adding of graph into multi done correctly" << endl;
    
  mg -> GetXaxis() -> SetLimits(TaglioXminM,TaglioXmaxM);
  mg -> GetYaxis() -> SetRangeUser(TaglioYminM,TaglioYmaxM);  
  if(db_print) cout << " this time setting ranges does not create a segmentation fault" << endl;  
    
  mg -> Draw( DrawOptionForAll.c_str() );
  //if(!fit_zone) canvas_one -> BuildLegend();

  return;
}
/* ............................................................................................................. */
/* LEGEND BUILDER (have to be custom almost always) ============================================================ */
void MakeThaLegend(){

  auto legend = new TLegend();
  
  //a quanto pare vengono fillate prima le righe 
  //le prime tre entry andranno in riga
  legend -> SetNColumns(3);
      
  legend -> AddEntry( VectorGraph.at(1) , "Zona sinistra", "lf");
  legend -> AddEntry( VectorGraph.at(8) , "Zone centrale", "lf" );
  legend -> AddEntry( VectorGraph.at(16) , "Zona destra", "lf" );
  
  if(fit_zone){  //se sono presenti aggiungiamo alla legenda tutti i fit necessari
  
    for(int i=0; i<HowManyPeaks; i++){
  
      string NomeFitToDisplay = "Fit " + Letters.at(i);
      legend -> AddEntry( VectorFunction.at(i), NomeFitToDisplay.c_str(), "l" );
  
    }
  }

  legend -> Draw();

}
/* ............................................................................................................. */
/* FIT FITTER AND GRAPH ADDER ================================================================================== */
void MakeThaFit(){

  //creazione delle funzioni di fitting  
  VectorFunction.reserve(HowManyPeaks);      
  for (int i=0; i<HowManyPeaks; i++){
    VectorFunction.push_back( new TF1( ( Letters.at(i) ).c_str(), 
                                       NameFittingFunction.c_str(), 
                                       FitRangeLowerBound.at(i), 
                                       FitRangeUpperBound.at(i) 
                                     ) 
                            );
  }
  if(db_print) cout << "fitting object created " << endl;
  
  //esecuzione dei fit
  for(int i=0; i<HowManyPeaks; i++){
      
    auto FitFunction = VectorFunction.at(i);
    auto Graph       = VectorGraph.at(i);
      
    //fit drawing style      
    FitFunction -> SetLineColor(kRed);
    FitFunction -> SetLineStyle(9);
    FitFunction -> SetTitle( ( Letters.at(i) ).c_str() );
    FitFunction -> SetLineWidth(2);
    
    cout << "\n" << "Fit:  " << Letters.at(i) << "\n" << endl;
    Graph       -> Fit(FitFunction, "RV");
    FitFunction -> Draw("same");
      
  }
  if(db_print) cout << " fit done or skipped" << endl;
  
  return;
}
/* ============================================================================================================= */
