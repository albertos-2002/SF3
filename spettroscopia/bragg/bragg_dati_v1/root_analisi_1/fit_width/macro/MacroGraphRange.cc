/* Questo codice (macro) si occupa di prendere i risultati del fit gaussiano per l'integral
   ATTENZIONE: valori sono hardcoded
*/

#include <TGraphErrors.h> //grafico con errori
#include <TAxis.h>        //bho dovrebbe gestire gli assi credo
#include <TCanvas.h>      //dovrebbe essere l'oggetto che contiene il grafico
#include <TMultiGraph.h>  //dovrebbe gestire l'avere più di un grafico assieme
#include <TF1.h>          //oggetti funzione
#include <TFitResult.h>
#include <TFitResultPtr.h>

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

//definizione funzione di fit
double FunctionFitIperbole( double* x, double* par ){
    double result = par[0] + ( par[1] / (*x) );
    return result;
}

void MacroGraphRange(){

bool fit_activator = true;

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
  
  scatter -> Draw("AP");
  
  //fit 
  if (fit_activator) {
  
  TF1* fit_iperbolico_americio = new TF1("fit Am: p0 + p1/x", FunctionFitIperbole, 425, 625, 2);  
       fit_iperbolico_americio -> SetLineColor(kOrange-3);
       fit_iperbolico_americio -> SetLineStyle(2); //dashed line for the fit line
  
  scatter_of_americio -> Fit(fit_iperbolico_americio, "R");
  
  TFitResultPtr risultati_fit_americio = scatter_of_americio -> Fit( fit_iperbolico_americio, "RS" );
                risultati_fit_americio -> Print("V"); //bho
                
  //------------------------------------------------------------------------------------------------------
  
  TF1* fit_iperbolico_curio = new TF1("fit Cm: p0 + p1/x", FunctionFitIperbole, 425, 625, 2);  
       fit_iperbolico_curio -> SetLineColor(kMagenta-3);
       fit_iperbolico_curio -> SetLineStyle(2); //dashed line for the fit line
  
  scatter_of_curio -> Fit(fit_iperbolico_curio, "R");
  
  TFitResultPtr risultati_fit_curio = scatter_of_curio -> Fit( fit_iperbolico_curio, "RS" );
                risultati_fit_curio -> Print("V"); //bho
                
  //------------------------------------------------------------------------------------------------------                
                
  TF1* fit_iperbolico_nettunio = new TF1("fit Np: p0 + p1/x", FunctionFitIperbole, 425, 625, 2);  
       fit_iperbolico_nettunio -> SetLineColor(kViolet-7);
       fit_iperbolico_nettunio -> SetLineStyle(2); //dashed line for the fit line
  
  scatter_of_nettunio -> Fit(fit_iperbolico_nettunio, "R");
  
  TFitResultPtr risultati_fit_nettunio = scatter_of_nettunio -> Fit( fit_iperbolico_nettunio, "RS" );
                risultati_fit_nettunio -> Print("V"); //bho
                
                
  
  fit_iperbolico_americio -> Draw("same");
  fit_iperbolico_curio -> Draw("same");
  fit_iperbolico_nettunio -> Draw("same");
  }
  
  canvas -> SetGrid();
  canvas -> BuildLegend();

  return;

}