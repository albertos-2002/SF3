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

 string NomeGrafico = "B-on: max";
 
 //range di taglio per lo spettro (in forma generale)
 int TaglioXminM = 3300;
 int TaglioXmaxM = 5500;
 int TaglioYminM = 12;
 int TaglioYmaxM = 75;
 
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
vector<unsigned int> SplitPoint{3755-1, 4000,4250,4500,4750,5000,5250,5480,5750, 6035-1};

//vector for the multi
vector< TGraph* > VectorGraph;

/*  FUNCTION DECLARATION =================================================================== */

void ReadShit();
void AnalisisInfo(const int &argN, char* argL[]);
void MakeGeneralSpectrum(string IsFilling);
void DataCutter();
void MakeMulti(string IsFilling);

/* ----------------------------------------------------------------------------------------- */

int main(int argN, char* argL[]){

  AnalisisInfo(argN, argL);

  canvas_one -> SetGrid();

  GreyValue.reserve(10000);
  PointPosition.reserve(10000);


  ReadShit();
  
  if(db_one) MakeGeneralSpectrum("");
  
  if(db_two){ 
  
    DataCutter();
    MakeMulti("f");
    
    AppWTF -> Run(kTRUE);
    
  }
  



  //fitting and filling zone
  
  
/*  
    
    

    //fitting zone
    vector< TF1* > VectorFunction;
    
    if (fit_zone){
      
      //creazione delle funzioni di fitting  
      VectorFunction.reserve(9);
      
      //storing dei "nomi"
      //vector<char> Letters{'A','B','C','D','E','F','G','H','I'};
      vector<string> Letters{"A","B","C","D","E","F","G","H","I"};
      
      VectorFunction.push_back( new TF1("A", "gaus", 3860, 3900) );
      VectorFunction.push_back( new TF1("B", "gaus", 4095, 4135) );
      VectorFunction.push_back( new TF1("C", "gaus", 4340, 4380) );
      VectorFunction.push_back( new TF1("D", "gaus", 4580, 4625) );
      VectorFunction.push_back( new TF1("E", "gaus", 4830, 4880) );
      VectorFunction.push_back( new TF1("F", "gaus", 5090, 5130) );
      VectorFunction.push_back( new TF1("G", "gaus", 5340, 5385) );
      VectorFunction.push_back( new TF1("H", "gaus", 5610, 5650) );
      VectorFunction.push_back( new TF1("I", "gaus", 5880, 5920) );
      
      for(int i=0; i<9; i++){
      
        auto FitFunction = VectorFunction.at(i);
        auto Graph       = VectorGraph.at(i);
      
        cout << "\n" << "Fit " <<  i << "\n" << endl;      
        FitFunction -> SetLineColor(kRed);
        FitFunction -> SetLineStyle(9);
        FitFunction -> SetTitle( ( Letters.at(i) ).c_str() );
        FitFunction -> SetLineWidth(2);
        //Graph       -> Fit(FitFunction, "RV");
        Graph       -> Fit(FitFunction, "R");
        FitFunction -> Draw("same");
      
      }
    
    }
    
    if(db_print) cout << " fit done or skipped" << endl;

    //------------------ 
      
    
    auto legend = new TLegend();
    
    legend -> SetNColumns(3);
    
    //a quanto pare vengono fillate prima le righe 
    //le prime tre entry andranno in riga
    
    legend -> AddEntry( VectorGraph.at(1) , "Zona sinistra", "lf");
    legend -> AddEntry( VectorGraph.at(4) , "Zone centrale", "lf" );
    legend -> AddEntry( VectorGraph.at(7) , "Zona destra", "lf" );
    
    if(fit_zone){
    
      legend -> AddEntry( VectorFunction.at(0) , "Fit A", "l" );
      legend -> AddEntry( VectorFunction.at(1) ,AppWTF -> Run(kTRUE); "Fit B", "l" );
      legend -> AddEntry( VectorFunction.at(2) , "Fit C", "l" );
    
      legend -> AddEntry( VectorFunction.at(3) , "Fit D", "l" );
      legend -> AddEntry( VectorFunction.at(4) , "Fit E", "l" );
      legend -> AddEntry( VectorFunction.at(5) , "Fit F", "l" );
    
      legend -> AddEntry( VectorFunction.at(6) , "Fit G", "l" );
      legend -> AddEntry( VectorFunction.at(7) , "Fit H", "l" );
      legend -> AddEntry( VectorFunction.at(8) , "Fit I", "l" );
    
    }
    
    //legend -> Draw();
    
    //AppWTF -> Run(kTRUE);
  
  }
*/


  return 0;
}

/* ------------------------------------------------------------------------------------------------------------- */
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
    }
  }
  return;
}
/* SEZIONE MONOGRAFICO ========================================================================================= */
void MakeGeneralSpectrum(string IsFilling){

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
            
    SpettroCheNonEHisto -> Draw("APL");
    if(IsFilling == "f") SpettroCheNonEHisto -> Draw("APLF");
    canvas_one -> BuildLegend();

    AppWTF -> Run(kTRUE);
  
  return;
}
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
/* ============================================================================================================= */
void MakeMulti(string IsFilling){

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
      
    if(i==1) g -> SetTitle("Zona sinistra");
    if(i==8) g -> SetTitle("Zona centrale");
    if(i==16) g -> SetTitle("Zona destra");
    
    for( int i=0; i<6; i++ ){
      g -> SetFillColor(42);
    }
    for( int i=6; i<12; i++ ){
      g -> SetFillColor(30);
    }
    for( int i=12; i<18; i++ ){
      g -> SetFillColor(38);
    }
            
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
    
  mg -> Draw("APL");
  if(IsFilling == "f") mg -> Draw("APLF");

  return;
}
/* ============================================================================================================= */
/* ============================================================================================================= */
/* ============================================================================================================= */
/* ============================================================================================================= */
/* ============================================================================================================= */
/* ============================================================================================================= */
/* ============================================================================================================= */
/* ============================================================================================================= */
/* ============================================================================================================= */
/* ============================================================================================================= */
/* ============================================================================================================= */
/* ============================================================================================================= */
