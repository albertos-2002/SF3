/* Questo codice (macro) si occupa di prendere i risultati del fit gaussiano per le vmax
   ATTENZIONE: valori sono hardcoded
*/

// ricordiamo che per i 350mb non si è riusciti ad ottenere un singolo picco quindi non è stato inserito nel grafico

#include <TGraphErrors.h> //grafico con errori
#include <TAxis.h> //bho dovrebbe gestire gli assi credo
#include <TCanvas.h> //dovrebbe essere l'oggetto che contiene il grafico

struct data_points {
  
  //ascisse
  double pressioni[5] = { 450, 500, 550, 600, 650 }; //udm := mb
  //le varie ordinate - udm := a.u.
  double vmax[5]     = { 1.45569e+02, 1.55938e+02, 1.65713e+02, 1.72538e+02, 1.78286e+02 };

  //i relativi errori sulle ordinate - udm := a.u.
  double err_vmax[5] = { 8.89308e-02, 8.60831e-02, 8.14234e-02, 7.73807e-02, 8.50251e-02 };
  
  // il numero di punti coincide con il numero di presa dati in pressione
  int number_of_points = 5;

};

void MacroGraphVmax(){

  //creazione di una struttura
  data_points data;
  
  //creazione della canvas
  
  TCanvas* canvas = new TCanvas("canvas","canvas",1);
  
  canvas -> SetGrid();
  
  //creazione e gestione dello scatter plot
  
  TGraphErrors* scatter_of_vmax = new TGraphErrors( data.number_of_points, data.pressioni, data.vmax, 0, data.err_vmax );
  
  scatter_of_vmax -> SetTitle("vmax - pressione");
  scatter_of_vmax -> GetXaxis() -> SetTitle("pressione (mb)");
  scatter_of_vmax -> GetYaxis() -> SetTitle("vmax (a.u.)");
  scatter_of_vmax -> SetLineWidth(2);
  scatter_of_vmax -> SetMarkerStyle(kFullDotLarge);
  scatter_of_vmax -> SetMarkerSize(1);
  scatter_of_vmax -> SetMarkerColor(kBlue-4);
  
  scatter_of_vmax -> Draw("AP");

  return;

}
