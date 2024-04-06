/*
NOTA: mancano i dati della width per i 650mb
*/

#include <iostream>
#include <math.h> //sqrt()
#include <cmath> //pow(base,esponente)
#include <cstring>
#include "RisultatiFitStruct.h"
#include "FunzioneVelocita.h"
#include "FunzioneRange.h"
#include "Util.h"
using namespace std;

risultati_calcolo risultati;
void calcolatore_velocita_drift();
template <typename T> void calcolatore_range( T& data, int pressione);


int main( int argument_number, char* argument_list[] ){
  for (int i = 0; i < argument_number; i++){
    if (strcmp(argument_list[i], "debug") == 0) {
      debug_opt=true;
      cout << "debug on" << endl;
    }
  }

  calcolatore_velocita_drift();
  
  dati450mb data450;
  dati500mb data500;
  dati550mb data550;
  dati600mb data600;
  //dati650mb data650;
  
  calcolatore_range( data450, 450);
  calcolatore_range( data500, 500);
  calcolatore_range( data550, 550);
  calcolatore_range( data600, 600);
  //calcolatore_range( data650, 650);
  return 0;
}
