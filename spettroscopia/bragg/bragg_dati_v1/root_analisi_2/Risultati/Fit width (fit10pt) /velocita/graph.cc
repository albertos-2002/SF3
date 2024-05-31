/* Questo codice si occupa della creazione del grafico di bragg kleeman
   ATTENZIONE: valori sono hardcoded
*/

#include "TApplication.h"
#include "TGraph.h"
#include "TGraphErrors.h"
#include "TF1.h"
#include "TLegend.h"
#include "TCanvas.h"
#include "TAxis.h"
#include "TPad.h"
#include "TLine.h"
#include "TMultiGraph.h"

using namespace std;

//GLOBAL ==========================================================================================================

struct data_points_nettunio {
  //ascisse
  double pressioni[4]    = { 450, 500, 550, 600 }; //udm := mb
  //le varie ordinate - udm := mm
  double nettunio[4]     = { 77.5953, 73.0011, 69.0178, 65.4258 };
  //i relativi errori sulle ordinate - udm := mm
  double err_nettunio[4] = { 0.209549, 0.131644, 0.163506, 0.167431 }; 
  // il numero di punti coincide con il numero di presa dati in pressione
  int number_of_points = 4;
};

struct data_points_americio { //aggiungere 350??
  //ascisse
  double pressioni[4]    = { 450, 500, 550, 600 }; //udm := mb
  //le varie ordinate - udm := mm
  double americio[4]     = { 94.0914, 87.6071, 82.4483, 78.3302 };
  //i relativi errori sulle ordinate - udm := mm
  double err_americio[4] = { 0.0884805, 0.0666717, 0.0598683, 0.103439 };
  // il numero di punti coincide con il numero di presa dati in pressione
  int number_of_points = 4;
};

struct data_points_curio {
  //ascisse
  double pressioni[4]    = { 450, 500, 550, 600 }; //udm := mb
  //le varie ordinate - udm := mm
  double curio[4]        = { 101.284, 94.2654, 89.0546, 84.0209 };
  //i relativi errori sulle ordinate - udm := mm
  double err_curio[4]    = { 0.21181, 0.0929629, 0.0824578, 0.162995 };  
  // il numero di punti coincide con il numero di presa dati in pressione
  int number_of_points = 4;
};

//definizione funzione di fit
double FunctionFitIperbole( double* x, double* par ){
    double result = par[0] + ( par[1] / (*x) );
    return result;
}

//=================================================================================================================

int main( int argN, char* argL[] ){

  TApplication* AppWTF = new TApplication("ThisShouldBeAnApp", &argN, argL);

  //creazione di una struttura
  data_points_nettunio data_nettunio;
  data_points_americio data_americio;
  data_points_curio    data_curio;
  
  //creazione della canvas
  TCanvas* canvas = new TCanvas("canvas","canvas",1920,1080);
  TPad *pad1 = new TPad("pad1", "Pad 1", 0.0, 0.3, 1.0, 1.0); // Upper pad
  TPad *pad2 = new TPad("pad2", "Pad 2", 0.0, 0.0, 1.0, 0.3); // Lower pad
  pad1 -> Draw();
  pad2 -> Draw();
  
  pad1 -> cd();
  pad1 -> SetGrid();
  
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
  
  TF1* fit_iperbolico_n = new TF1("fit: p0 + p1/x", FunctionFitIperbole, 425, 625, 2);  
       fit_iperbolico_n -> SetLineColor(kOrange-3);
       fit_iperbolico_n -> SetLineStyle(2); 
       
  TF1* fit_iperbolico_a = new TF1("fit: p0 + p1/x", FunctionFitIperbole, 425, 625, 2);  
       fit_iperbolico_a -> SetLineColor(kGreen-3);
       fit_iperbolico_a -> SetLineStyle(2); 
       
  TF1* fit_iperbolico_c = new TF1("fit: p0 + p1/x", FunctionFitIperbole, 425, 625, 2);  
       fit_iperbolico_c -> SetLineColor(kViolet-3);
       fit_iperbolico_c -> SetLineStyle(2);      
  
  cout << endl;
  cout << endl;
  cout << " Fit nettunio: " << endl;
  scatter_of_nettunio -> Fit( fit_iperbolico_n, "RV" );
  
  cout << endl;
  cout << endl;
  cout << " Fit americio: " << endl;
  scatter_of_americio -> Fit( fit_iperbolico_a, "RV" );
  
  cout << endl;
  cout << endl;
  cout << " Fit curio: " << endl;
  scatter_of_curio    -> Fit( fit_iperbolico_c, "RV" );
  
  cout << endl;
  cout << endl;
  
  fit_iperbolico_n -> Draw("same");
  fit_iperbolico_a -> Draw("same");
  fit_iperbolico_c -> Draw("same");
  
  auto legend = new TLegend();
       legend -> AddEntry( scatter_of_nettunio, "Np data", "lpe");
       legend -> AddEntry( scatter_of_americio, "Am data", "lpe");
       legend -> AddEntry( scatter_of_curio   , "Cm data", "lpe");
       legend -> AddEntry( fit_iperbolico_n, "fit Np: p0 + p1/x", "l" );
       legend -> AddEntry( fit_iperbolico_a, "fit Am: p0 + p1/x", "l" );
       legend -> AddEntry( fit_iperbolico_c, "fit Cm: p0 + p1/x", "l" );
       legend -> Draw();
  
  
  pad2 -> cd();
  pad2 -> SetGrid();
  
  auto multi_err = new TMultiGraph();
       multi_err -> SetTitle("Residui Fit");
       
  // Create a TGraphErrors for the residuals
  TGraphErrors* residualsGraph_n   = new TGraphErrors();
  for (int i = 0; i < scatter_of_nettunio  ->GetN(); ++i) {
    double x_n  , y_n  ;
    scatter_of_nettunio  -> GetPoint(i, x_n, y_n);
    double fittedValue_n   = fit_iperbolico_n  ->Eval(x_n);
    double residual_n   = y_n   - fittedValue_n  ;
    residualsGraph_n   -> SetPoint(i, x_n  , residual_n  );
    residualsGraph_n  -> SetPointError(i, 0, scatter_of_nettunio  ->GetErrorY(i)); // Assuming no error in x-direction, only y-direction     
    }
  
  TGraphErrors* residualsGraph_a   = new TGraphErrors();
  for (int i = 0; i < scatter_of_americio  ->GetN(); ++i) {
    double x_a  , y_a  ;
    scatter_of_americio  -> GetPoint(i, x_a, y_a);
    double fittedValue_a   = fit_iperbolico_a   ->Eval(x_a);
    double residual_a   = y_a   - fittedValue_a  ;
    residualsGraph_a   -> SetPoint(i, x_a  , residual_a  );
    residualsGraph_a   -> SetPointError(i, 0, scatter_of_americio  ->GetErrorY(i)); // Assuming no error in x-direction, only y-direction
    }
    
  TGraphErrors* residualsGraph_c   = new TGraphErrors();
  for (int i = 0; i < scatter_of_curio  ->GetN(); ++i) {
    double x_c  , y_c  ;
    scatter_of_curio  -> GetPoint(i, x_c, y_c);
    double fittedValue_c   = fit_iperbolico_c   ->Eval(x_c);
    double residual_c   = y_c   - fittedValue_c  ;
    residualsGraph_c   -> SetPoint(i, x_c  , residual_c  );
    residualsGraph_c   -> SetPointError(i, 0, scatter_of_curio  ->GetErrorY(i)); // Assuming no error in x-direction, only y-direction
    }
  
  residualsGraph_n -> SetTitle("Residui Fit");
  residualsGraph_n -> SetMarkerStyle(20);
  residualsGraph_n -> SetMarkerSize(1);
  residualsGraph_n -> SetMarkerColor(kRed);
    
  residualsGraph_a -> SetTitle("Residui Fit");
  residualsGraph_a -> SetMarkerStyle(20);
  residualsGraph_a -> SetMarkerSize(1);
  residualsGraph_a -> SetMarkerColor(kGreen+2);
    
  residualsGraph_c -> SetTitle("Residui Fit");
  residualsGraph_c -> SetMarkerStyle(20);
  residualsGraph_c -> SetMarkerSize(1);
  residualsGraph_c -> SetMarkerColor(kBlue);
  
  
  multi_err -> Add(residualsGraph_n);
  multi_err -> Add(residualsGraph_a);
  multi_err -> Add(residualsGraph_c);
  
  multi_err -> Draw("AP"); 
  
  
  auto legend2 = new TLegend();
       legend2 -> AddEntry(residualsGraph_n, "Residui Np", "lpe");
       legend2 -> AddEntry(residualsGraph_a, "Residui Am", "lpe");
       legend2 -> AddEntry(residualsGraph_c, "Residui Cm", "lpe");
       legend2 -> Draw();  
    
 double xmin = 450;
 double xmax = 600;
 TLine *line = new TLine(xmin, 0, xmax, 0);
        line -> SetLineColor(kViolet-3); // Set the color of the line
        line -> SetLineStyle(9);    // Set the line style (optional, e.g., dashed line)
        line -> SetLineWidth(1);
        line -> Draw();
  
  
 canvas -> Update();
  
 AppWTF -> Run(kTRUE);

 return 0;
}
