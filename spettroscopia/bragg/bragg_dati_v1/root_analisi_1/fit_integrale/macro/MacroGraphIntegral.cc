/* Questo codice (macro) si occupa di prendere i risultati del fit gaussiano per l'integral
   ATTENZIONE: valori sono hardcoded
*/


#include <TGraphErrors.h> //grafico con errori
#include <TAxis.h> //bho dovrebbe gestire gli assi credo
#include <TCanvas.h> //dovrebbe essere l'oggetto che contiene il grafico
#include <TMultiGraph.h> //dovrebbe gestire l'avere più di un grafico assieme

struct data_points {
  
  //ascisse
  double pressioni[6]    = { 350, 450, 500, 550, 600, 650 }; //udm := mb
  //le varie ordinate - udm := a.u.
  double nettunio[6]     = { 2.97769e+03, 5.06935e+03, 5.08024e+03, 5.12461e+03, 5.12954e+03, 5.11845e+03 };
  double americio[6]     = { 4.66951e+03, 5.79538e+03, 5.85366e+03, 5.88909e+03, 5.91140e+03, 5.93146e+03 };
  double curio[6]        = { 5.07594e+03, 6.12201e+03, 6.17339e+03, 6.21925e+03, 6.25014e+03, 6.27799e+03 };

  //i relativi errori sulle ordinate - udm := a.u.
  double err_nettunio[6] = { 3.62214e+01, 7.71928e+00, 9.77148e+00, 9.95358e+00, 1.39160e+01, 1.20664e+01 };
  double err_americio[6] = { 7.10394e+00, 3.14879e+00, 3.62782e+00, 3.37861e+00, 3.31615e+00, 4.60111e+00 };
  double err_curio[6]    = { 7.53948e+00, 3.42640e+00, 5.18833e+00, 3.69840e+00, 4.00240e+00, 4.38340e+00 };
  
  // il numero di punti coincide con il numero di presa dati in pressione
  int number_of_points = 6;

};

void MacroGraphIntegral(){

  //creazione di una struttura
  data_points data;
  
  //creazione della canvas
  
  TCanvas* canvas = new TCanvas("canvas","canvas",1);
  
  //creazione e gestione dello scatter plot
  
  TGraphErrors* scatter_of_nettunio = new TGraphErrors( data.number_of_points, data.pressioni, data.nettunio, 0, data.err_nettunio );
                scatter_of_nettunio -> SetTitle("nettunio");
                scatter_of_nettunio -> SetLineWidth(2);
                scatter_of_nettunio -> SetMarkerStyle(kFullDotLarge);
                scatter_of_nettunio -> SetMarkerSize(1);
                scatter_of_nettunio -> SetMarkerColor(kRed);
  
  TGraphErrors* scatter_of_americio = new TGraphErrors( data.number_of_points, data.pressioni, data.americio, 0, data.err_americio );
                scatter_of_americio -> SetTitle("americio");
                scatter_of_americio -> SetLineWidth(2);
                scatter_of_americio -> SetMarkerStyle(kFullDotLarge);
                scatter_of_americio -> SetMarkerSize(1);
                scatter_of_americio -> SetMarkerColor(kGreen+2);
  
  TGraphErrors* scatter_of_curio    = new TGraphErrors( data.number_of_points, data.pressioni, data.curio   , 0, data.err_curio );
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
  
  scatter -> SetTitle("integral - pressione");
  scatter -> GetXaxis() -> SetTitle("pressione (mb)");
  scatter -> GetYaxis() -> SetTitle("integral (a.u.)");
  
  //scatter_of_nettunio -> Draw("AP");
  
  scatter -> Draw("AP");
  canvas -> SetGrid();
  canvas -> BuildLegend();

  return;

}
