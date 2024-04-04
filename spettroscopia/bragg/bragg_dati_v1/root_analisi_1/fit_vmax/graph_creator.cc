/* Questo codice si occupa di prendere i risultati del fit gaussiano per le vmax
   ATTENZIONE: valori sono hardcoded
   e di creare un file root che ne contiene un plot
   Lo salviamo su un file root in modo tale da poterlo salvare
   in base alla dimensione della finestra della gui senza impozziere
   con le canvas fino a trovare la misura adatta per tentativi
*/

#include <TFile> 
#include <TGraph.h>
#include <vector>
#include <iostream>
using namespace std;

struct data_points {
  
  //ascisse
  vector<double> pressioni = { 350, 450, 500, 550, 600, 650 }; //udm := mb
  //le varie ordinate - udm := a.u.
  vector<double> nettunio = { , , , , ,  };
  vector<double> americio = { , , , , ,  };
  vector<double> curio    = { , , , , ,  };
  //i relativi errori sulle ordinate - udm := a.u.
  vector<double> nettunio = { , , , , ,  };
  vector<double> americio = { , , , , ,  };
  vector<double> curio    = { , , , , ,  };
  
  // il numero di punti coincide con il numero di presa dati in pressione
  int number_of_points = 6;

};


int main( int terminal_index, char* terminal_string[] ){


}
