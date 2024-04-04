/* Questo codice si occupa di prendere i risultati del fit gaussiano per le vmax
   ATTENZIONE: valori sono hardcoded
   e di creare un file root che ne contiene un plot
   Lo salviamo su un file root in modo tale da poterlo salvare
   in base alla dimensione della finestra della gui senza impozziere
   con le canvas fino a trovare la misura adatta per tentativi
*/

// ricordiamo che per i 350mb non si è riusciti ad ottenere un singolo picco quindi non è stato inserito nel grafico

#include <TFile.h> //gestore di file
#include <TGraphErrors.h> //grafico con errori
#include <TAxis.h> //bho dovrebbe gestire gli assi credo
#include <vector>
#include <iostream>
using namespace std;

struct data_points {
  
  //ascisse
  double pressioni[5] = { 450, 500, 550, 600, 650 }; //udm := mb
  //le varie ordinate - udm := a.u.
  double vmax[5]     = { 1.45569e+02, 1.55938e+02, 1.65713e+02, 1.72538e+02, 1.78286e+02 };

  //i relativi errori sulle ordinate - udm := a.u.
  double err_vmax[5] = { 8.89308e-02, 8.60831e-02, 8.14234e-02, 7.73807e-02, 8.50251e-02 };
  
  // il numero di punti coincide con il numero di presa dati in pressione
  int number_of_points = 5;

};


int main( int terminal_index, char* terminal_string[] ){

  //creazione di una struttura
  data_points data;
  
  //creazione e gestione dello scatter plot
  
  TGraphErrors* scatter_of_vmax = new TGraphErrors( data.number_of_points, data.pressioni, data.vmax, 0, data.err_vmax );
  
  scatter_of_vmax -> SetTitle("vmax - pressione");
  scatter_of_vmax -> GetXaxis() -> SetTitle("pressione (mb)");
  scatter_of_vmax -> GetYaxis() -> SetTitle("vmax (a.u.)");
  
  scatter_of_vmax -> SetGrid();
  
  //apertura e gestione del file
  
  TFile* file_output = new TFile("grafico_vmax.root","RECREATE");
  
  scatter_of_vmax -> Write("scatter_vmax");
  
  file_output -> Close();
  
  //pulizia della memoria dinamica
  
  delete scatter_of_vmax;
  delete file_output;

  return 0;

}
