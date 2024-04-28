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

using namespace std;

//global -----------------------------------------------------------------------------------
bool db_print = false;

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
    string debug_option_check( argL[1] );
    if( debug_option_check == "db" ) db_print = true;
  }

  GreyValue.reserve(10000);
  PointPosition.reserve(10000);

  ReadShit();

  int NumeroPunti = PointPosition.size();

  auto canvas_one = new TCanvas("can", "can", 1);
  auto SpettroCheNonEHisto = new TGraph( NumeroPunti, PointPosition.data(), GreyValue.data() );

  SpettroCheNonEHisto -> SetTitle("Spettro Zeeman B-off");
  SpettroCheNonEHisto -> GetYaxis() -> SetTitle("Gray Scale [a.u.]");
  SpettroCheNonEHisto -> GetXaxis() -> SetTitle("Distance [pixel]");
  SpettroCheNonEHisto -> SetMarkerColor(kBlue-4);
  SpettroCheNonEHisto -> SetMarkerSize(5);
  
  //TGraphPainter::PaintGraph(SpettroCheNonEHisto);
  
  SpettroCheNonEHisto -> SetFillColor(30);
  SpettroCheNonEHisto -> SetFillStyle(3003);

  //SpettroCheNonEHisto -> Draw("AP");
  SpettroCheNonEHisto -> Draw("APLF");

  canvas_one -> SetGrid();
  canvas_one -> BuildLegend();
  
  /*string control_of_exit;
  cout << "Enter for exit" << endl;
  cin >> control_of_exit;
  
  canvas_one -> Close();*/

  cout << "test of what happen " << endl;

  AppWTF -> Run(kTRUE);
  
  return 0;
}
