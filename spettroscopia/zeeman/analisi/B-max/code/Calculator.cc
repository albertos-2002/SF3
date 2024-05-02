/* ====================================================================
 |                                                                   |
 | Codice per calcolare lo split zeeman                              |
 |                                                                   |
 | Gli errori sono stati propagati con le formule di Doro            |
 |                                                                   |
==================================================================== */

#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

/* GLOBAL VARIABLES ================================================ */

//dati ricavati dal fit tramite root
vector<double> Centroidi_ZonaSinistra{ 3379.61, 3460.23, 3610.31, 3692.58, 3844.52, 3927.87 };
vector<double> Centroidi_ZonaCentrale{ 4081.93, 4166.33, 4322.97, 4408.42, 4567.67, 4654.51 };
vector<double> Centroidi_ZonaDestra{ 4816.41, 4904.56, 5069.22, 5158.61, 5326.29, 5417.72 };
vector<double> ErrCentroidi_ZonaSinistra{ 0.0497603, 0.129751, 0.0589181, 0.0920724, 0.0518428, 0.0933911 };
vector<double> ErrCentroidi_ZonaCentrale{ 0.0730524, 0.114942, 0.0613072, 0.162998, 0.0394902, 0.136119 };
vector<double> ErrCentroidi_ZonaDestra{ 0.0763089, 0.125038, 0.0648628, 0.144223, 0.0681009, 0.109052 };

vector< vector<double> > HolderCentroidi{ Centroidi_ZonaSinistra, Centroidi_ZonaCentrale, Centroidi_ZonaDestra };
vector< vector<double> > HolderErrCentroidi{ ErrCentroidi_ZonaSinistra, ErrCentroidi_ZonaCentrale, ErrCentroidi_ZonaDestra };

//fattore di conversione ricavato dall'analisi a campo spento [nm/pixel] 
double FattoreConversione = 0.000168529;
double ErrFattoreConversione = 1.25971e-06;

//vattori per contenere gli intermedi di calcolo (9 in totale e ordinate da sx a dx)
vector<double> HolderDistanza;
vector<double> ErrHolderDistanza;

//un valore per ogni singola zona (3 in tutto)
vector<double> MediaSplitZeeman_pixel;
vector<double> ErrMediaSplitZeeman_pixel;
vector<double> MediaSplitZeeman_nm;
vector<double> ErrMediaSplitZeeman_nm;

/* FUNCTION DECLARATION ============================================ */

void DistanceCalculator();
void PixelMeanCalculator();
void MeanConverter();

void PrintThemAll();

/* ================================================================= */

bool debug_opt = false;
int main( int argN, char* argL[] ){

  if(argN > 1){
    if(argL[1] == "db") debug_opt = true;
  }

  //reserve dello spazio
  HolderDistanza.reserve(9);
  ErrHolderDistanza.reserve(9);
  
  MediaSplitZeeman_pixel.reserve(3);
  ErrMediaSplitZeeman_pixel.reserve(3);
  MediaSplitZeeman_nm.reserve(3);
  ErrMediaSplitZeeman_nm.reserve(3);
  
  //function calling
  DistanceCalculator();
  PixelMeanCalculator();
  MeanConverter();
  
  PrintThemAll();

 return 0;
}

/* CALCOLATORE DISTANZA TRA CENTROIDI ============================== */
void DistanceCalculator(){

  for(int i=0; i<HolderCentroidi.size(); i++){
  
    auto VettoreZona = HolderCentroidi.at(i);
    auto ErrVettoreZona = HolderErrCentroidi.at(i);
    
    double HolderValue = 0;
    double HolderError = 0;
    for(int k = 0; k < VettoreZona.size(); k+=2 ){
    
      HolderValue = abs( VettoreZona.at(k) - VettoreZona.at(k+1) );
      HolderError = sqrt( pow( ErrVettoreZona.at(k) ,2) + pow( ErrVettoreZona.at(k+1) ,2) );
      
      HolderDistanza.push_back( HolderValue );
      ErrHolderDistanza.push_back( HolderError );
    
    }
  }  

 return;
}
/* CALCOLATORE MEDIA SPLIT PER ZONE (pixel) ======================== */
void PixelMeanCalculator(){

  //suppongo che questa media, come nel caso privo di campo, sia di tipo aritmetico
  
  if ( HolderDistanza.size() != ErrHolderDistanza.size() ) exit(-1);
  
  double HolderValue = 0;
  double HolderError = 0;
  
  for( int k = 0; k < HolderDistanza.size(); k+=3 ){
  
    HolderValue = (1/3)*( HolderDistanza.at(k) + HolderDistanza.at(k+1) + HolderDistanza.at(k+2) );
    HolderError = (1/sqrt(3) ) * sqrt( pow( ErrHolderDistanza.at(k) ,2) + pow( ErrHolderDistanza.at(k+1) ,2) + pow( ErrHolderDistanza.at(k+2) ,2) );
  
    MediaSplitZeeman_pixel.push_back( HolderValue );
    ErrMediaSplitZeeman_pixel.push_back( HolderError );
  }

 return;
}
/* CONVERSIONE DA PIXEL A NANOMETRI ================================ */
void MeanConverter(){

  double HolderValue = 0;
  double HolderError = 0;

  for( auto c : MediaSplitZeeman ){
    
    HolderValue = c * FattoreConversione;
    MediaSplitZeeman_nm.push_back( HolderValue );
  
  }

 return;
}
/* ================================================================= */
/* ================================================================= */
/* ================================================================= */
/* ================================================================= */
/* ================================================================= */
/* ================================================================= */
/* PRINTATORE ====================================================== */
void PrintThemAll(){

  

 return;
}
/* ================================================================= */

