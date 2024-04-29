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
    
    SpettroCheNonEHisto -> Draw("APLF");
    canvas_one -> SetGrid();
    canvas_one -> BuildLegend();

    AppWTF -> Run(kTRUE);

  }

  if(db_two){

    //sezione di estrazione di range
    vector<double> x1;
    vector<double> x2;
    vector<double> x3;
  
    vector<double> y1;
    vector<double> y2;
    vector<double> y3;
  
    x1.reserve(1100);
    x2.reserve(1100);
    x3.reserve(1100);
  
    y1.reserve(1100);
    y2.reserve(1100);
    y3.reserve(1100);
  
    double tempValue;
    for(int i=3755-1; i<4480; i++){
      tempValue = 0;
      tempValue = GreyValue.at(i);
      x1.push_back(i);
      y1.push_back(tempValue);
    }
  
    for(int i=4480- 1; i<5240; i++){
      tempValue = 0;
      tempValue = GreyValue.at(i);
      x2.push_back(i);
      y2.push_back(tempValue);
    }
  
    for(int i=5240-1; i<6035; i++){
      tempValue = 0;
      tempValue = GreyValue.at(i);
      x3.push_back(i);
      y3.push_back(tempValue);
    }
  
    if(db_print){
  
      for(int i=0; i<500; i++){
        cout << x1.at(i) << "  " << y1.at(i) << endl;
        cout << x2.at(i) << "  " << y2.at(i) << endl;
        cout << x3.at(i) << "  " << y3.at(i) << endl;
        cout << "- - - - - - - - - - - - - - - - -" << endl;
      }
    }

    /*-------------------------------------------------------------------------------*/
  
    TMultiGraph* mg = new TMultiGraph("multi", "multi");
    int punti1 = x1.size();
    int punti2 = x2.size();
    int punti3 = x3.size();
  
    TGraph* g1 = new TGraph(punti1, x1.data(), y1.data());
    g1 -> SetFillColor(42);
    g1 -> SetFillStyle(3001);
    g1 -> SetMarkerColor(kBlue-4);
    g1 -> SetMarkerSize(5);
    g1 -> SetLineColor(kBlack);
    g1 -> SetLineWidth(1.5);
    g1 -> SetTitle("Zona sinistra");
  
    TGraph* g2 = new TGraph(punti2, x2.data(), y2.data());
    g2 -> SetFillColor(30);
    g2 -> SetFillStyle(3001);
    g2 -> SetMarkerColor(kBlue-4);
    g2 -> SetMarkerSize(5);
    g2 -> SetLineColor(kBlack);
    g2 -> SetLineWidth(1.5);
    g2 -> SetTitle("Zona centrale");
  
    TGraph* g3 = new TGraph(punti3, x3.data(), y3.data());
    g3 -> SetFillColor(38);
    g3 -> SetFillStyle(3001);
    g3 -> SetMarkerColor(kBlue-4);
    g3 -> SetMarkerSize(5);
    g3 -> SetLineColor(kBlack);
    g3 -> SetLineWidth(1.5);
    g3 -> SetTitle("Zona destra");
  
    //style of multi
    mg -> SetTitle("Spettro Zoom - B off");
    mg -> GetXaxis() -> SetTitle("Distance [pixel]");
    mg -> GetYaxis() -> SetTitle("Gray Scale [a.u.]");

    //adding of graph
    mg->Add(g1);
    mg->Add(g2);
    mg->Add(g3);
    
    mg -> GetXaxis() -> SetLimits(3740,6050);
    mg -> GetYaxis() -> SetRangeUser(1,29);  
    mg -> Draw("APLF");
    
    //fitting zone
    
      if (fit_zone){
        
        TF1* fitA = new TF1("A", "gaus", 3860, 3900);
        cout << "\n" << "Fit A" << "\n" << endl;      
        fitA -> SetLineColor(kRed);
        fitA -> SetLineStyle(2);
        fitA -> SetTitle("A");
        fitA -> SetLineWidth(3);
        g1 -> Fit(fitA, "RV");
        fitA -> Draw("same");
        canvas_one -> Update();
        auto statsA = (TPaveStats*)g1 -> GetListOfFunctions() -> FindObject("stats");
        if(statsA == nullptr) cout << "\n whyyyyyyyyyyyyy \n" << endl;
        //canvas_one -> Modified();
        //if(statsA == nullptr) cout << "\n why null \n" << endl;
        //statsA -> Draw();
        
        
        TF1* fitB = new TF1("B", "gaus", 4095, 4135);
        cout << "\n" << "Fit B" << "\n" << endl;      
        fitB -> SetLineColor(kRed);
        fitB -> SetLineStyle(2);
        fitB -> SetTitle("B");
        fitB -> SetLineWidth(3);
        g1 -> Fit(fitB, "RV");
        //TPaveStats* statsB = (TPaveStats*)g1 -> FindObject("stats");
        //statsB -> Draw("same");
        fitB -> Draw("same");
        
        TF1* fitC = new TF1("C", "gaus", 4340, 4380);
        cout << "\n" << "Fit C" << "\n" << endl;        
        fitC -> SetLineColor(kRed);
        fitC -> SetLineStyle(2);
        fitC -> SetTitle("C");
        fitC -> SetLineWidth(3);
        g1 -> Fit(fitC, "RV");
        //TPaveStats* statsC = (TPaveStats*)g1 -> FindObject("stats");
        //statsC -> Draw("same");
        fitC -> Draw("same");
        
        TF1* fitD = new TF1("D", "gaus", 4580, 4625);
        cout << "\n" << "Fit D" << "\n" << endl;        
        fitD -> SetLineColor(kRed);
        fitD -> SetLineStyle(2);
        fitD -> SetTitle("D");
        fitD -> SetLineWidth(3);
        g2 -> Fit(fitD, "RV");
        //TPaveStats* statsD = (TPaveStats*)g2 -> FindObject("stats");
        //statsD -> Draw("same");
        fitD -> Draw("sames");
        
        TF1* fitE = new TF1("E", "gaus", 4830, 4880);
        cout << "\n" << "Fit E" << "\n" << endl;        
        fitE -> SetLineColor(kRed);
        fitE -> SetLineStyle(2);
        fitE -> SetTitle("E");
        fitE -> SetLineWidth(3);
        g2 -> Fit(fitE, "RV");
        //TPaveStats* statsE = (TPaveStats*)g2 -> FindObject("stats");
        //statsE -> Draw("same");
        fitE -> Draw("sames");
        
        TF1* fitF = new TF1("F", "gaus", 5090, 5130);
        cout << "\n" << "Fit F" << "\n" << endl;        
        fitF -> SetLineColor(kRed);
        fitF -> SetLineStyle(2);
        fitF -> SetTitle("F");
        fitF -> SetLineWidth(3);
        g2 -> Fit(fitF, "RV");
        //TPaveStats* statsF = (TPaveStats*)g2 -> FindObject("stats");
        //statsF -> Draw("same");
        fitF -> Draw("sames");
        
        TF1* fitG = new TF1("G", "gaus", 5340, 5385);
        cout << "\n" << "Fit G" << "\n" << endl;        
        fitG -> SetLineColor(kRed);
        fitG -> SetLineStyle(2);
        fitG -> SetTitle("G");
        fitG -> SetLineWidth(3);
        g3 -> Fit(fitG, "RV");
        //TPaveStats* statsG = (TPaveStats*)g3 -> FindObject("stats");
        //statsG -> Draw("same");
        fitG -> Draw("sames");
        
        TF1* fitH = new TF1("H", "gaus", 5610, 5650);
        cout << "\n" << "Fit H" << "\n" << endl;        
        fitH -> SetLineColor(kRed);
        fitH -> SetLineStyle(2);
        fitH -> SetTitle("H");
        fitH -> SetLineWidth(3);
        g3 -> Fit(fitH, "RV");
        //TPaveStats* statsH = (TPaveStats*)g3 -> FindObject("stats");
        //statsH -> Draw("same");
        fitH -> Draw("sames");
        
        TF1* fitI = new TF1("I", "gaus", 5880, 5920);
        cout << "\n" << "Fit I" << "\n" << endl;     
        fitI -> SetLineColor(kRed);
        fitI -> SetLineStyle(2);
        fitI -> SetTitle("I");
        fitI -> SetLineWidth(3);
        g3 -> Fit(fitI, "RV");
        //TPaveStats* statsI = (TPaveStats*)g3 -> FindObject("stats");
        //statsI -> Draw("same");
        fitI -> Draw("sames");       
     
      }
    
    //------------------ 
      
    canvas_one -> SetGrid();
    canvas_one -> BuildLegend();
    
    AppWTF -> Run(kTRUE);
  
  }

  return 0;
}
