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

//global -----------------------------------------------------------------------------------
bool db_print = false;
bool db_one = false;
bool db_two = false;
bool fit_zone = false;

//vector of data
vector<float> GreyValue;
vector<float> PointPosition;

//------------------------------------------------------------------------------------------
//function ---------------------------------------------------------------------------------

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
    
    //second column
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

}

//------------------------------------------------------------------------------------------

int main(int argN, char* argL[]){

  TApplication* AppWTF = new TApplication("PublicConstructor", &argN, argL); 

  //debug printing option
  if (argN > 1) {
    for (int i=0; i<argN; i++){
      string debug_option_check( argL[i] );
      if( debug_option_check == "db" ) db_print = true;
      if( debug_option_check == "1" ) db_one = true;
      if( debug_option_check == "2" ) db_two = true;
      if( debug_option_check == "fit" ) fit_zone = true;
    }
  }

  GreyValue.reserve(10000);
  PointPosition.reserve(10000);

  ReadShit();

  int NumeroPunti = PointPosition.size();

  auto canvas_one = new TCanvas("can", "can");
  
  if(db_one){
  
    //sezione monografico
    auto SpettroCheNonEHisto = new TGraph( NumeroPunti, PointPosition.data(), GreyValue.data() );

    SpettroCheNonEHisto -> SetTitle("Spettro Zeeman B-off");
    SpettroCheNonEHisto -> GetYaxis() -> SetTitle("Gray Scale [a.u.]");
    SpettroCheNonEHisto -> GetXaxis() -> SetTitle("Distance [pixel]");
    SpettroCheNonEHisto -> SetMarkerColor(kBlue-4);
    SpettroCheNonEHisto -> SetMarkerSize(5);
  
    SpettroCheNonEHisto -> SetFillColor(30);
    SpettroCheNonEHisto -> SetFillStyle(3003);
    
    SpettroCheNonEHisto -> Draw("APL");
    canvas_one -> SetGrid();
    canvas_one -> BuildLegend();

    AppWTF -> Run(kTRUE);

  }
  
  //-------------------------------------------------------------------------------------------------
  
  //fitting and filling zone
  if(db_two){
  
    //ci servono 9*2 vettori dato che volgiamo che ogni curva
    //sia un grafico per conto suo
    vector< vector<double>* > VectorHolderX;
    VectorHolderX.reserve(9);
    for (int i=0; i<9; i++) {
      VectorHolderX.push_back( new vector<double> );
      VectorHolderX.at(i) -> reserve(1000);
    }
    
    if(db_print) cout << " vector of vector for X created correctly" << endl;
    
    vector< vector<double>* > VectorHolderY;
    VectorHolderY.reserve(9);
    for (int i=0; i<9; i++) {
      VectorHolderY.push_back( new vector<double> );
      VectorHolderY.at(i) -> reserve(1000);
    }
    
    if(db_print) cout << " vector of vector for Y created correctly" << endl;
    
    // inserting extraction data
    vector<unsigned int> SplitPoint{3755-1, 4000,4250,4500,4750,5000,5250,5480,5750, 6035-1};
    
    for(unsigned int c = 0; c < ( SplitPoint.size()-1 ); c++){

      for(int j= SplitPoint.at(c); j<= SplitPoint.at(c+1); j++){
         VectorHolderX.at(c) -> push_back( j );
         VectorHolderY.at(c) -> push_back( GreyValue.at(j) );
      } 
   } 
   
   if (db_print) cout << " filling of the vector of X and Y done correctly" << endl;
    
    //facciamo anche un vettore per tutti i TGraph
    TMultiGraph* mg = new TMultiGraph("multi", "multi");
    
    vector< TGraph* > VectorGraph;
    VectorGraph.reserve(9);
    
    if(db_print) cout << "\n starting intese debug for the graph creation and management" << endl;
    for (int i=0; i<9; i++){
      VectorGraph.push_back( new TGraph( VectorHolderX.at(i) -> size(), 
                                         VectorHolderX.at(i) -> data(), 
                                         VectorHolderY.at(i) -> data() 
                                       ) 
                           );
      if(db_print) cout << "graph filled correctly" << endl; 
      
      TGraph* g = VectorGraph.at(i);
      if(db_print) cout << " element extracted from the vector of graph" << endl;
                    
      g -> SetFillStyle(3001);
      //g -> SetMarkerColor(kBlue-4);
      //g -> SetMarkerSize(5);
      g -> SetLineColor(kBlack);
      g -> SetLineWidth(1.5);
      
      if(i==2) g -> SetTitle("Zona sinistra");
      if(i==5) g -> SetTitle("Zona centrale");
      if(i==8) g -> SetTitle("Zona destra");
      
      if(i==0 || i==1 || i==2)  g -> SetFillColor(42);
      if(i==3 || i==4 || i==5)  g -> SetFillColor(30);
      if(i==6 || i==7 || i==8)  g -> SetFillColor(38);
            
      if(db_print) cout << " graph colored correctrly" << endl;
    }
    
    if(db_print) cout << " managing of the 9 TGraph done correctly" << endl;

    //style of multi
    mg -> SetTitle("Spettro Zoom - B off");
    mg -> GetXaxis() -> SetTitle("Distance [pixel]");
    mg -> GetYaxis() -> SetTitle("Gray Scale [a.u.]");
 
    //adding of graph
    for(auto g : VectorGraph) mg->Add(g);
    
    if(db_print) cout << " adding of graph into multi done correctly" << endl;
    
    mg -> GetXaxis() -> SetLimits(3740,6050);
    mg -> GetYaxis() -> SetRangeUser(1,29);  
    mg -> Draw("APLF");

    /*-------------------------------------------------------------------------------*/
  
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
    

    //------------------ 
      
    canvas_one -> SetGrid();
    
    auto legend = new TLegend();
    
    legend -> SetNColumns(3);
    
    //a quanto pare vengono fillate prima le righe 
    //le prime tre entry andranno in riga
    
    legend -> AddEntry( VectorGraph.at(1) , "Zona sinistra", "lf");
    legend -> AddEntry( VectorGraph.at(4) , "Zone centrale", "lf" );
    legend -> AddEntry( VectorGraph.at(7) , "Zona destra", "lf" );
    
    legend -> AddEntry( VectorFunction.at(0) , "Fit A", "l" );
    legend -> AddEntry( VectorFunction.at(1) , "Fit B", "l" );
    legend -> AddEntry( VectorFunction.at(2) , "Fit C", "l" );
    
    legend -> AddEntry( VectorFunction.at(3) , "Fit D", "l" );
    legend -> AddEntry( VectorFunction.at(4) , "Fit E", "l" );
    legend -> AddEntry( VectorFunction.at(5) , "Fit F", "l" );
    
    legend -> AddEntry( VectorFunction.at(6) , "Fit G", "l" );
    legend -> AddEntry( VectorFunction.at(7) , "Fit H", "l" );
    legend -> AddEntry( VectorFunction.at(8) , "Fit I", "l" );
    
    legend -> Draw();
    
    
    AppWTF -> Run(kTRUE);
  
  }

  return 0;
}
