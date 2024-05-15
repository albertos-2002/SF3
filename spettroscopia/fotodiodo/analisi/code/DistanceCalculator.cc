/* =================================================================
|                                                                  |
| Calcolatore per il rate deggli x e relativa legge quadratica     |
|                                                                  |
================================================================= */

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

#include "TApplication.h"
#include "TGraph.h"
#include "TGraphError.h"
#include "TF1.h"
#include "TLegend.h"

using namespace std;

/* =================================================================
|                                                                  |
| Note:                                                            |
|   Per vivere serenamente assumiamo che sia il tempo che la       |
|   ditanza siano senza errore (sensa info possiamo dargli una     |
|   uniforme), l'errore commesso dovrebbe essere piccolo           |
|                                                                  |
================================================================= */


// GLOBAL SCOPE ====================================================
vector<double> Distanza{ 1.2, 2.2, 3.2, 4.2, 5.2, 6.2, 7.2, 8.2, 9.2, 10.2, 15.2 }; //cm
vector<double> Tempo{ 147.14, 89.50, 206.78, 345.23, 193.29, 199.49, 114.23, 140.36, 235.88, 235.88, 342.36 }; //s
vector<double> Counts{ 25831, 9092, 12848, 15055, 5973, 4765, 1999, 2063, 2695, 2473, 1723 }; //no udm

vector<double> ErrCounts; 
vector<double> Rate; //cps

//------------------------------------------------------------------
// FUNCTION DECLARATION ============================================
void ErrorCountsCalculator();
void RateCalculator();


//------------------------------------------------------------------

int main( int argN, char* argL ){

  ErrCounts.reserve(11);
  Rate.reserve(11);

}

// Calcolatore errore entries ======================================
void ErrorCountsCalculator(){

  for(auto k : Counts){
    ErrCounts.push_back( sqrt(k) );
  }

 return;
}

// Calcolatore Rate ================================================
void RateCalculator(){

  //controllo di dimensione
  if( Tempo.size() != Counts.size() ) exit(-1);
  
  double Holder;
  for( int i=0; i<Tempo.size(), i++ ){
    Holder = 0;
    Holder = Counts.at(i) / Tempo.at(i);
    Rate.push_back(Holder);
  }
  
 return;
}


