/* ================================================= |
 |                                                   |
 | Script per il grafico dei lambda in funzione di B |
 |                                                   |      
==================================================== */

#include <iostream>
#include <vector>
#include <string>

#include "TGraphErrors.h"
#include "TMultiGraph.h"
#include "TApplication.h"
#include "TCanvas.h"
#include "TAxis.h"

using namespace std;

int main( int argN, char* argL[] ) {

  auto AppWTF = new TApplication( "Application", &argN, argL );
  
  auto canvas_one = new TCanvas("canvas one","canvas one");
  auto canvas_zone = new TCanvas("canvas zone","canvas zone");
  
  vector<double> CampoMagnetico{ 0.24, 0.324495, 0.40035, 0.48 };  //assumiamolo senza errore per non impazzire
  
  vector<double> MediePesate{ 0.00524647, 0.00853473, 0.0115261, 0.0144149 };
  vector<double> ErrMediePesate{ 5.75816e-05, 6.34472e-05, 5.46137e-05, 6.36901e-05 };
  
  vector<double> ZonaSinistra{ 0.00500082, 0.00801636, 0.0109718, 0.0138329 };
  vector<double> ZonaCentrale{ 0.00500082, 0.00858037, 0.0115111, 0.0144199 };
  vector<double> ZonaDestra  { 0.00500082, 0.00902754, 0.0121942, 0.0151097 };
  vector<double> ErrZonaSinistra{ 9.55394e-05, 0.000104376, 9.16458e-05, 0.000105332 };
  vector<double> ErrZonaCentrale{ 9.95162e-05, 0.000122903, 9.33049e-05, 0.000110772 };
  vector<double> ErrZonaDestra  { 0.000104788, 0.000105165, 9.93353e-05, 0.000115552 };
 
//----------------------------------------------------------------------------------------------------------------------------------------------- 
 
  canvas_one -> cd();
  
  auto GraficoMediePesate = new TGraphErrors( CampoMagnetico.size(), CampoMagnetico.data(), MediePesate.data(), 0, ErrMediePesate.data() );
       GraficoMediePesate -> SetTitle("Split Zeeman vs campo magnetico");
       GraficoMediePesate -> GetXaxis() -> SetTitle( "Campo Magnetico [T]" );
       GraficoMediePesate -> GetYaxis() -> SetTitle( "Split Zeeman [nm]" );
       GraficoMediePesate -> SetMarkerSize(1);
       GraficoMediePesate -> SetMarkerColor(kMagenta+2);
       GraficoMediePesate -> SetMarkerStyle(kFullDotLarge);
       GraficoMediePesate -> SetLineWidth(2);
       
       GraficoMediePesate -> Draw("AP");
       canvas_one -> SetGrid();
       canvas_one -> BuildLegend();
  
  
//-----------------------------------------------------------------------------------------------------------------------------------------------
  canvas_zone -> cd();
  
  auto mg = new TMultiGraph("multi", "multi");
  
  auto g1 = new TGraphErrors( CampoMagnetico.size(), CampoMagnetico.data(), ZonaSinistra.data(), 0, ErrZonaSinistra.data() );
       g1 -> SetTitle("Zona Sinistra");
       g1 -> SetMarkerSize(1);
       g1 -> SetMarkerColor(kOrange-3);
       g1 -> SetLineWidth(2);
       g1 -> SetMarkerStyle(kFullDotLarge);
       
  auto g2 = new TGraphErrors( CampoMagnetico.size(), CampoMagnetico.data(), ZonaCentrale.data(), 0, ErrZonaCentrale.data() );
       g2 -> SetTitle("Zona Sinistra");
       g2 -> SetMarkerSize(1);
       g2 -> SetMarkerColor(kGreen+2);
       g2 -> SetLineWidth(2);
       g2 -> SetMarkerStyle(kFullDotLarge);
       
  auto g3 = new TGraphErrors( CampoMagnetico.size(), CampoMagnetico.data(), ZonaDestra.data(), 0, ErrZonaDestra.data() );
       g3 -> SetTitle("Zona Sinistra");
       g3 -> SetMarkerSize(1);
       g3 -> SetMarkerColor(kBlue-3);     
       g3 -> SetLineWidth(2);
       g3 -> SetMarkerStyle(kFullDotLarge);
  
  
  mg -> Add(g1);
  mg -> Add(g2);
  mg -> Add(g3);
  
  mg -> SetTitle("Split Zeeman vs campo magnetico");
  mg -> GetXaxis() -> SetTitle( "Campo Magnetico [T]" );
  mg -> GetYaxis() -> SetTitle( "Split Zeeman [nm]" );
  
  mg -> Draw("AP");
  canvas_zone -> SetGrid();
  canvas_zone -> BuildLegend();
  

//-----------------------------------------------------------------------------------------------------------------------------------------------

  AppWTF -> Run(kTRUE);


  return 0;
}
