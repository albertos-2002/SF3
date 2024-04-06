/*
  Il range delle particelle è stato calcolato come segue:
    
    range = velocità drift riscalata con salmpling time * with dell'elemento alla pressione x
    
  errore:
  
    sigma_range = range * sqrt( ( sigma_v / v )**2 + ( sigma_w / w )**2 )
    
  con ovvio significato dei simboli
*/

#ifndef FUNZIONE_RANGE
#define FUNZIONE_RANGE

#include <iostream>
#include <math.h> //sqrt()
#include <cmath> //pow(base,esponente)
#include "RisultatiFitStruct.h"
#include "Util.h"
using namespace std;

extern risultati_calcolo risultati;

template <typename T> void calcolatore_range( T& data, int pressione){

  //definizione variabili
  float range_nettunio;
  float range_americio;
  float range_curio;
  float err_range_nettunio;
  float err_range_americio;
  float err_range_curio;
  
  float dummy1;
  float dummy11;
  float dummy2;
  float dummy22;
  float radice;
  
  //calcolo del range
  range_nettunio = risultati.velocita_scalata * data.width_nettunio;
  range_americio = risultati.velocita_scalata * data.width_americio;
  range_curio    = risultati.velocita_scalata * data.width_curio;
  
  if (debug_opt){
  cout << data.width_nettunio << " * " << data.width_americio << " * " << data.width_curio << endl;
  }
  
  //calcolo degli errori
  dummy11 = risultati.err_velocita_scalata / risultati.velocita_scalata;
  if (debug_opt) cout << dummy11 << endl;
  dummy1 = pow( dummy11, 2 );
  if (debug_opt) cout << dummy1 << endl;
  
  dummy22 = dati350mb::err_width_americio / dati350mb::width_americio;
  dummy2 = pow( dummy22, 2 );
  if (debug_opt) cout << dummy2 << endl;
  
  radice = sqrt( dummy1 + dummy2 );
  if (debug_opt) cout << radice << endl;
  
  err_range_nettunio = range_nettunio * radice ;
  err_range_americio = range_americio * radice ;
  err_range_curio    = range_curio    * radice ;
  
  //print dei risultati
  cout << "Range per la pressione " 
       << pressione 
       << " mb" 
       << endl;
  cout << endl;
  cout << "Range nettunio:  " 
       << range_nettunio
       << "\\pm"
       << err_range_nettunio
       << endl;
  cout << "Range americio:  " 
       << range_americio
       << "\\pm"
       << err_range_americio
       << endl;
  cout << "Range curio   :  " 
       << range_curio
       << "\\pm"
       << err_range_curio
       << endl;
  cout << "\n" << endl;

  return;
} 

#endif
