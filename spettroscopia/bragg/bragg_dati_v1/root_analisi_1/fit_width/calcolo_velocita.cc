#include <iostream>

using namespace std;

struct parametri {

  static constexpr float sampling_time = 80; // [ns/a.u.]
  static constexpr float lunghezza_camera = 117; // [mm]
};

struct risultati_calcolo {
  
  float velocita_drift;
  float err_velocita_drift;
};

static float width_americio     = 6.46762e+01;  // [a.u]  calcolata a pressione 350mb
static float err_width_americio = 3.16125e-02;  // [a.u]

/*
La formula utilizzata per calcolare la velocità di drift è la seguente:

  v_drift = lunghezza_camera / ( sampling_time * width_americio )
  
  lunghezza camere - considerata senza errore
  sampling time    - considerato senza errore
  
il relativo errore è dato da:

  err = (v_drift * err_width) / width

*/

//parametri_camera_strumentazione parametri;
risultati_calcolo risultati;

 

int main( int argument_number, char* argumen_list[] ){

  //calcolo della velocità di drift
   risultati.velocita_drift = parametri::lunghezza_camera / (parametri::sampling_time * width_americio);

  //calcolo dell'errore
  risultati.err_velocita_drift = risultati.velocita_drift * ( err_width_americio / width_americio );
  
  //print dei risultati
  cout << "\n" << endl;
  cout << "UDM = [mm / ns]" << endl;
  cout << risultati.velocita_drift << " \\pm " << risultati.err_velocita_drift << endl;
  
  //conversione in cm al microsecondo
  
  cout << "\n" << endl;
  cout << "UDM = [cm / micros]" << endl;
  cout << risultati.velocita_drift*100 << " \\pm " << risultati.err_velocita_drift*100 << endl;
  cout << "\n" << endl;

  return 0;
}
