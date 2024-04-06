/*
  La formula utilizzata per calcolare la velocità di drift è la seguente:

    v_drift = lunghezza_camera / ( sampling_time * width_americio )
  
  lunghezza camere - considerata senza errore
  sampling time    - considerato senza errore
  
  il relativo errore è dato da:

    err = (v_drift * err_width) / width
*/

#ifndef FUNZIONE_VELOCITA
#define FUNZIONE_VELOCITA

#include <iostream>
#include <math.h> //sqrt()
#include <cmath> //pow(base,esponente)
#include "RisultatiFitStruct.h"
#include "Util.h"
using namespace std;

extern risultati_calcolo risultati;

void calcolatore_velocita_drift() {

  //calcolo della velocità di drift
   risultati.velocita_drift = parametri::lunghezza_camera / (parametri::sampling_time * dati350mb::width_americio);

  //calcolo dell'errore
  risultati.err_velocita_drift = risultati.velocita_drift * ( dati350mb::err_width_americio / dati350mb::width_americio );
  
  //print dei risultati
  cout << "\n" << endl;
  cout << "UDM = [mm / ns]" << endl;
  cout << risultati.velocita_drift 
       << " \\pm " 
       << risultati.err_velocita_drift 
       << endl;
  
  //conversione in cm al microsecondo
  
  cout << "\n" << endl;
  cout << "UDM = [cm / micros]" << endl;
  cout << risultati.velocita_drift*100 
       << " \\pm " 
       << risultati.err_velocita_drift*100 
       << endl;
  cout << "\n" << endl;
  
  risultati.velocita_scalata = risultati.velocita_drift * parametri::sampling_time;
  if (debug_opt) cout << risultati.velocita_scalata << endl;
  risultati.err_velocita_scalata = risultati.err_velocita_drift * parametri::sampling_time;
  if (debug_opt) cout << risultati.err_velocita_scalata << endl;
  
  return;
}

#endif
