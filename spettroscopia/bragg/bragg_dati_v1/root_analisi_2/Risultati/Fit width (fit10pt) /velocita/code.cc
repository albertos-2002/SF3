/* =================================================================================
La formula utilizzata per calcolare la velocità di drift è la seguente:

    v_drift = lunghezza_camera / ( sampling_time * width_americio )
  
  lunghezza camere - considerata senza errore
  sampling time    - considerato senza errore
  
il relativo errore è dato da:

    err = (v_drift * err_width) / width
================================================================================= 
Il range delle particelle è stato calcolato come segue:
    
    range = velocità drift riscalata con salmpling time * with dell'elemento alla pressione x
    
errore:
  
    sigma_range = range * sqrt( ( sigma_v / v )**2 + ( sigma_w / w )**2 )
    
con ovvio significato dei simboli
================================================================================= */

#include <iostream>
#include <cmath> 
#include <cstring>

using namespace std;

//GLOBAL =============================================================
bool debug_opt = false;

struct parametri {

  static constexpr float sampling_time = 80; // [ns/a.u.]
  static constexpr float lunghezza_camera = 117; // [mm]
};

struct risultati_calcolo {
  float velocita_drift;
  float err_velocita_drift;
  float velocita_scalata;
  float err_velocita_scalata;
};

risultati_calcolo risultati;

struct dati450mb {
  static constexpr float width_nettunio     = 4.60164e+01;  // [a.u]
  static constexpr float width_americio     = 5.57991e+01;  // [a.u]
  static constexpr float width_curio        = 6.00646e+01;  // [a.u]
  
  static constexpr float err_width_nettunio = 1.23267e-01;  // [a.u]
  static constexpr float err_width_americio = 4.88721e-02;  // [a.u]
  static constexpr float err_width_curio    = 1.23916e-01;  // [a.u]
};

struct dati500mb {
  static constexpr float width_nettunio     = 4.32919e+01;  // [a.u]
  static constexpr float width_americio     = 5.19537e+01;  // [a.u]
  static constexpr float width_curio        = 5.59023e+01;  // [a.u]
  
  static constexpr float err_width_nettunio = 7.66494e-02;  // [a.u]
  static constexpr float err_width_americio = 3.53134e-02;  // [a.u]
  static constexpr float err_width_curio    = 5.17026e-02;  // [a.u]
};

struct dati550mb {
  static constexpr float width_nettunio     = 4.09297e+01;  // [a.u]
  static constexpr float width_americio     = 4.88944e+01;  // [a.u]
  static constexpr float width_curio        = 5.28121e+01;  // [a.u]
  
  static constexpr float err_width_nettunio = 9.59469e-02;  // [a.u]
  static constexpr float err_width_americio = 3.13116e-02;  // [a.u]
  static constexpr float err_width_curio    = 4.54360e-02;  // [a.u]
};

struct dati600mb {
  static constexpr float width_nettunio     = 3.87995e+01;  // [a.u]
  static constexpr float width_americio     = 4.64522e+01;  // [a.u]
  static constexpr float width_curio        = 4.98270e+01;  // [a.u]
  
  static constexpr float err_width_nettunio = 9.83996e-02;  // [a.u]
  static constexpr float err_width_americio = 5.92459e-02;  // [a.u]
  static constexpr float err_width_curio    = 9.51443e-02;  // [a.u]
};



//=====================================================================
void calcolatore_velocita_drift() {

  double velocita_350 = parametri::lunghezza_camera / (parametri::sampling_time * 6.92632e+01);
  double velocita_400 = parametri::lunghezza_camera / (parametri::sampling_time * 6.97023e+01);
  
  double err_velocita_350 = velocita_350 * ( 2.78481e-02 / 6.92632e+01 );
  double err_velocita_400 = velocita_400 * ( 4.54775e-02 / 6.97023e+01 );
  
  cout << "\n" << "valori delle velocità, in ordine 350, 400 mb: " << endl;
  cout << velocita_350 << " \\pm " << err_velocita_350 << endl;
  cout << velocita_400 << " \\pm " << err_velocita_400 << endl;
  cout << endl;
  
  double comp_velocita_drift = abs( velocita_400-velocita_350 ) / sqrt( pow( err_velocita_350 ,2) + pow( err_velocita_400 ,2) );
  
  cout << "\n" << "compatiblità tra le due velocità: " << endl;
  cout << comp_velocita_drift << endl;
  cout << endl;
  
  //media pesata
  double media_pesata_k        = ( 1/ pow( err_velocita_350,2) ) + ( 1/ pow( err_velocita_400,2) );
  double media_pesata_errore_velocita = sqrt(1/media_pesata_k);
  double media_pesata_velocita = (1/media_pesata_k) * ( ( velocita_350/ pow( err_velocita_350,2) ) + ( velocita_400/ pow( err_velocita_400,2) ) ); 
  
  cout << "\n" << "Media pesata delle veclotia" << endl;
  cout << media_pesata_velocita << " \\pm " << media_pesata_errore_velocita << endl;
  cout << endl;

  //calcolo della velocità di drift
   risultati.velocita_drift =  media_pesata_velocita;

  //calcolo dell'errore
  risultati.err_velocita_drift = media_pesata_errore_velocita;
  
  cout << "Stima della velocità con udm: " << endl;
  
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

//==========================================================================================================
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
  
  err_range_nettunio = range_nettunio * sqrt( dummy1 + pow( ( data.err_width_nettunio/data.width_nettunio ) ,2) ) ;
  err_range_americio = range_americio * sqrt( dummy1 + pow( ( data.err_width_americio/data.width_americio ) ,2) ) ;
  err_range_curio    = range_curio    * sqrt( dummy1 + pow( ( data.err_width_curio/data.width_curio       ) ,2) ) ;
  
  //print dei risultati
  cout << "Range [mm] per la pressione " 
       << pressione 
       << " mb" 
       << endl;
  cout << endl;
  cout << "Range nettunio:  " 
       << range_nettunio
       << " \\pm "
       << err_range_nettunio
       << endl;
  cout << "Range americio:  " 
       << range_americio
       << " \\pm "
       << err_range_americio
       << endl;
  cout << "Range curio   :  " 
       << range_curio
       << " \\pm "
       << err_range_curio
       << endl;
  cout << "\n" << endl;

  return;
} 

//===========================================================================================

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
  
  calcolatore_range( data450, 450);
  calcolatore_range( data500, 500);
  calcolatore_range( data550, 550);
  calcolatore_range( data600, 600);
  return 0;
}

