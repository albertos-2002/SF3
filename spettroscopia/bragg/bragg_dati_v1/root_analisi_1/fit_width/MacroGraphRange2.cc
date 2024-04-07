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

void MacroGraphRange2(){

bool fit_activator = true;

  //creazione di una struttura
  data_points_americio data_americio;
  
  //creazione della canvas
  
  TCanvas* canvas = new TCanvas("canvas","canvas",1);
  
  //creazione e gestione dello scatter plot            
  
  TGraphErrors* scatter_of_americio = new TGraphErrors( data_americio.number_of_points, data_americio.pressioni, data_americio.americio, 0, data_americio.err_americio );
                scatter_of_americio -> SetTitle("americio");
                scatter_of_americio -> SetLineWidth(2);
                scatter_of_americio -> SetMarkerStyle(kFullDotLarge);
                scatter_of_americio -> SetMarkerSize(1);
                scatter_of_americio -> SetMarkerColor(kGreen+2);
  
  //creazione e gestione del multigraph
  
  TMultiGraph* scatter = new TMultiGraph("scatter", "scatter");
  
  scatter -> Add(scatter_of_americio);
  
  
  //fit 
  if (fit_activator) {
  TF1* fit_iperbolico = new TF1("fit: p0 + p1/x", FunctionFitIperbole, 425, 625, 2);  
       fit_iperbolico -> SetLineColor(kOrange-3);
       fit_iperbolico -> SetLineStyle(2); //dashed line for the fit line
  
  scatter_of_americio -> Fit(fit_iperbolico, "R");
  
  TFitResultPtr risultati_fit = scatter_of_americio -> Fit( fit_iperbolico, "RS" );
                risultati_fit -> Print("V"); //bho
  
  // Create a TGraphErrors for the residuals
        TGraphErrors* residualsGraph = new TGraphErrors();
        for (int i = 0; i < scatter_of_americio->GetN(); ++i) {
            double x, y;
            scatter_of_americio->GetPoint(i, x, y);
            double fittedValue = fit_iperbolico->Eval(x);
            double residual = y - fittedValue;
            residualsGraph->SetPoint(i, x, residual);
            residualsGraph->SetPointError(i, 0, scatter_of_americio->GetErrorY(i)); // Assuming no error in x-direction, only y-direction
        }

        // Set up style for the residuals graph
        residualsGraph->SetTitle("Residui Fit");
        residualsGraph->SetMarkerStyle(20);
        residualsGraph->SetMarkerSize(1);
        residualsGraph->SetMarkerColor(kBlue);

        // Draw the residuals graph
        residualsGraph->Draw("AP");
    }

    // Set grid
    canvas->SetGrid();
    canvas->BuildLegend();

}
