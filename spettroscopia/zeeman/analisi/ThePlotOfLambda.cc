/* ================================================= |
 |                                                   |
 | Script per il grafico dei lambda in funzione di B |
 |                                                   |      
==================================================== */

#include <iostream>
#include <vector>
#include <string>

#include "TErrorGraph.h"
#include "TMultiGraph.h"
#include "TApplication.h"
#include "TCanvas.h"
#include "TAxis.h"

using namespace std

int main( int argN, char* argL[] ) {

  auto AppWTF* = new TApplication( "Application", &argN, argL );
  
  auto canvas_one = new TCanvas("canvas one","canvas one");
  auto canvas_zone = new TCanvas("canvas zone","canvas zone");
  
  vector<double> CampoMagnetico{ 0.40035, };  //assumiamolo senza errore per non impazzire
  
  vector<double> MediePesate{  };
  vector<double> ErrMediePesate{  };
  
  vector<double> ZonaSinistra{  };
  vector<double> ZonaCentrale{  };
  vector<double> ZonaDestra{  };
  vector<double> ErrZonaSinistra{  };
  vector<double> ErrZonaCentrale{  };
  vector<double> ErrZonaDestra{  };
  
  
  
  
  AppWTF -> Run(kTRUE);


  return 0;
}
