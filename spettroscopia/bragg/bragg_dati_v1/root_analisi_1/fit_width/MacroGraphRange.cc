/* Questo codice (macro) si occupa di prendere i risultati del fit gaussiano per l'integral
   ATTENZIONE: valori sono hardcoded
*/


#include <TGraphErrors.h> //grafico con errori
#include <TAxis.h> //bho dovrebbe gestire gli assi credo
#include <TCanvas.h> //dovrebbe essere l'oggetto che contiene il grafico
#include <TMultiGraph.h> //dovrebbe gestire l'avere più di un grafico assieme

struct data_points_nettunio {
  
  //ascisse
  double pressioni[4]    = { 450, 500, 550, 600 }; //udm := mb
  //le varie ordinate - udm := mm
  double nettunio[4]     = { 83.2442, 78.3156, 74.0423, 70.1887 };
  //i relativi errori sulle ordinate - udm := mm
  double err_nettunio[4] = { 0.0575418, 0.0541349, 0.0511811, 0.0485173 }; 
  // il numero di punti coincide con il numero di presa dati in pressione
  int number_of_points = 4;
};

struct data_points_americio { //aggiungere 350??
  
  //ascisse
  double pressioni[4]    = { 450, 500, 550, 600 }; //udm := mb
  //le varie ordinate - udm := mm
  double americio[4]     = { 100.941, 93.9848, 88.4505, 84.0326 };
  //i relativi errori sulle ordinate - udm := mm
  double err_americio[4] = { 0.0697747, 0.0649662, 0.0611406, 0.0580867 };
  // il numero di punti coincide con il numero di presa dati in pressione
  int number_of_points = 4;
};

struct data_points_curio {
  
  //ascisse
  double pressioni[4]    = { 450, 500, 550, 600 }; //udm := mb
  //le varie ordinate - udm := mm
  double curio[4]        = { 108.658, 101.128, 95.5377, 90.1376 };
  //i relativi errori sulle ordinate - udm := mm
  double err_curio[4]    = { 0.0751085, 0.0699037, 0.0660396, 0.0623068 };  
  // il numero di punti coincide con il numero di presa dati in pressione
  int number_of_points = 4;
};

void MacroGraphRange(){

  //creazione di una struttura
  data_points_nettunio data_nettunio;
  data_points_americio data_americio;
  data_points_curio    data_curio;
  
  //creazione della canvas
  
  TCanvas* canvas = new TCanvas("canvas","canvas",1);
  
  //creazione e gestione dello scatter plot
  
  TGraphErrors* scatter_of_nettunio = new TGraphErrors( data_nettunio.number_of_points, data_nettunio.pressioni, data_nettunio.nettunio, 0, data_nettunio.err_nettunio );
                scatter_of_nettunio -> SetTitle("nettunio");
                scatter_of_nettunio -> SetLineWidth(2);
                scatter_of_nettunio -> SetMarkerStyle(kFullDotLarge);
                scatter_of_nettunio -> SetMarkerSize(1);
                scatter_of_nettunio -> SetMarkerColor(kRed);
  
  TGraphErrors* scatter_of_americio = new TGraphErrors( data_americio.number_of_points, data_americio.pressioni, data_americio.americio, 0, data_americio.err_americio );
                scatter_of_americio -> SetTitle("americio");
                scatter_of_americio -> SetLineWidth(2);
                scatter_of_americio -> SetMarkerStyle(kFullDotLarge);
                scatter_of_americio -> SetMarkerSize(1);
                scatter_of_americio -> SetMarkerColor(kGreen+2);
  
  TGraphErrors* scatter_of_curio    = new TGraphErrors( data_curio.number_of_points, data_curio.pressioni, data_curio.curio   , 0, data_curio.err_curio );
                scatter_of_curio    -> SetTitle("curio");
                scatter_of_curio    -> SetLineWidth(2);
                scatter_of_curio    -> SetMarkerStyle(kFullDotLarge);
                scatter_of_curio    -> SetMarkerSize(1);
                scatter_of_curio    -> SetMarkerColor(kBlue);
  
  
  //creazione e gestione del multigraph
  
  TMultiGraph* scatter = new TMultiGraph("scatter", "scatter");
  
  scatter -> Add(scatter_of_nettunio);
  scatter -> Add(scatter_of_americio);
  scatter -> Add(scatter_of_curio);
  
  scatter -> SetTitle("Range");
  scatter -> GetXaxis() -> SetTitle("pressione [mb]");
  scatter -> GetYaxis() -> SetTitle("range [mm]");
  
  //scatter_of_nettunio -> Draw("AP");
  
  scatter -> Draw("AP");
  canvas -> SetGrid();
  canvas -> BuildLegend();

  return;

}
