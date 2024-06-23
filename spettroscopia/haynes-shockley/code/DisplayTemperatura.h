#include <iostream>
#include <string>

#include <TGraph.h>
#include <TMultiGraph.h>
#include <TLegend.h>
#include <TCanvas.h>
#include <TAxis.h>

#include "ExternalObjects.h"
using namespace std;


void MakeTemperatureGraph(){

  string SaveNameGraph;
  float xVoltica[]    = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  float xDistantica[] = {1,2,3,4,5,6,7,8,9,10,11};
  auto CanvasTemperata = new TCanvas("temperata","temperata",1200,750);
       CanvasTemperata -> SetGrid();
  
  //grafico per distanza costante
  auto TemperaturaDistantica = new TGraph( temperatura_dconst.size(),
                                           xDistantica,
                                           temperatura_dconst.data() );
       TemperaturaDistantica -> SetLineColor(kRed);
       TemperaturaDistantica -> SetMarkerStyle(8);
       TemperaturaDistantica -> SetLineStyle(9);
       TemperaturaDistantica -> SetMarkerColor(kRed);
       TemperaturaDistantica -> SetLineWidth(2);
  
  //grafico volt costante
  auto TemperaturaVoltica    = new TGraph( temperatura_vconst.size(),
                                           xVoltica,
                                           temperatura_vconst.data() );
       TemperaturaVoltica -> SetLineColor(kGreen+2);
       TemperaturaVoltica -> SetMarkerStyle(8);
       TemperaturaVoltica -> SetLineStyle(9);
       TemperaturaVoltica -> SetMarkerColor(kGreen+2);
       TemperaturaVoltica -> SetLineWidth(2);
                         
  //gestione multigraph                       
  auto MultiTemperato = new TMultiGraph();
       MultiTemperato -> Add(TemperaturaVoltica);
       MultiTemperato -> Add(TemperaturaDistantica);
       MultiTemperato -> SetTitle( "Temperatura vs Misura" );
       MultiTemperato -> GetXaxis() -> SetTitle("Numero Misura [#]");
       MultiTemperato -> GetYaxis() -> SetTitle("Temperatura [°C]");
       
       MultiTemperato -> Draw("APL");

  
  //costruzione della legenda
  auto legend = new TLegend();
      
  legend -> AddEntry( TemperaturaVoltica    , "V costante", "lp");
  legend -> AddEntry( TemperaturaDistantica , "D costante", "lp" );

  legend -> Draw();
  
  //azioni per la modifica del grafico
    cout << " Hai a disposizione 7 azioni per modificare la canvas prima del continue " << endl;
    for(int i=0; i<7; i++){
      CanvasTemperata -> WaitPrimitive();
      cout << "Iterazioni restanti " << 7-i << endl;
    }
  
  
  //salvataggio del grafico modificato
    if(SaveThaGraph){
      SaveNameGraph = PathToSaveGraph + "temperatura/graph.png";
      CanvasTemperata -> SaveAs( SaveNameGraph.c_str() );
      cout << " file saved succesfully " << endl;
    }  
    
  gSystem -> Sleep(100); //100ms giusto per stare sicuri  
  CanvasTemperata -> Close();  


  return;
};
