#include <Riostream.h>
#include <stdlib.h>
#include <TROOT.h>
#include <TSystem.h>
#include "TNtuple.h"
#include "TFile.h"
#include "TTree.h"
#include "TCanvas.h"
#include "TGraph.h"
#include "TGraphErrors.h"
#include "TF1.h"
#include "TRandom.h"
#include "TMultiGraph.h"

#ifndef LABNUC
#define LABNUC
#endif

#ifndef BRAGGSIGNAL
#define BRAGGSIGNAL
#define MAXSAMPLES 1024
struct bragg_signal {
  short int s[MAXSAMPLES];
};
#endif

int AnaBragg(const char *filename="", int blto=60, int intfrom=100, int intto=200, int nsig=0) {

  bragg_signal signal;
  int npts=256;

  TFile *fin=new TFile(filename);
  if (!fin->IsOpen()) {
    std::cout << "file not found! " << std::endl;
    return -1;
  }

  TTree *tree = (TTree*)fin->Get("bragg");
  if (!tree) {
    std::cout << "Bragg tree not found! " << std::endl;
    return -2;
  }

  TBranch *br = tree->GetBranch("signals");
  if (!br) {
    std::cout << "Signal branch not found! " << std::endl;
    return -3;
  }

  br->SetAddress(&signal);
  int nev = br->GetEntries();
  std::cout << "Number of events in file : " << nev << std::endl;

  // ANALIZZA EVENTO x EVENTO

  // altri parametri iniziali DA VERIFICARE ED EVENTUALMENTE MODIFICARE
  float thr_frac = 0.3; // soglia rispetto al vmax per il calcolo della larghezza
  //int intfrom = 300;// regione di integrazione da 0 a intto
  if (intto>MAXSAMPLES) intto=MAXSAMPLES;
  int blfrom = 0; // regione per il calcolo della baseline
                  //nota di Federico: blto è un parametro di questa macro


  float bl; // baseline evento x evento
  float integral; // integrale di carica
  float vmax; // massimo relativo alla bl
  float width; // larghezza temporale dei segnali


  char outfilename[200];
  strcpy(outfilename,"anabragg_");
  const char *cc=strrchr(filename,'/');
  if (cc) {cc++; strcat(outfilename,cc);}
  else strcat(outfilename,filename);

  TFile *fout=new TFile(outfilename,"RECREATE"); // output file

  TNtuple *nt=new TNtuple("nt","","ev:vmax:integral:width:baseline");

  int maxev=nev;
  if (nsig && nsig<nev) maxev=nsig;
  
  
//------------------------------------------------------------------------------------------------------------------------------
/*
std::cout << std::endl;
std::cout << std::endl;

std::cout << " Controllo di dove siamo con i 3 sigma rispetto a date percentuali di vmax: " << std::endl;
std::cout << " Is the x-percent of vmax greater than the 3sigma level: " << std::endl;

std::cout << std::endl;
std::cout << std::endl;
*/
//------------------------------------------------------------------------------------------------------------------------------ 
  
  
  // LOOP SUGLI EVENTI
  for (int i=0; i<maxev; i++) {

    // recupera l'evento
    br->GetEntry(i);

    // inizializza a zero
    bl=0; 
    integral=0;
    vmax=0;				     
    width=0;

    // CALCOLO DELLA BASELINE
	float sum = 0.0;
	
//------------------------------------------------------------------------------------------------------------------------------	
	float media_gaussiana_baseline = 0.0;
	float sigma_gaussiana_baseline = 0.0;
	float numero_misure_gaussiana_baseline = (blto - blfrom)*1.0;
//------------------------------------------------------------------------------------------------------------------------------	
	
	
    for (int scan = blfrom; scan < blto; ++scan) {
		sum += signal.s[scan]*1.0;
	}	
	bl = sum/((blto - blfrom)*1.0);
	

//------------------------------------------------------------------------------------------------------------------------------
	media_gaussiana_baseline = sum/numero_misure_gaussiana_baseline;
	
	
    float costante_calcolo_sigma_gaussiana = std::sqrt( 1.0/(numero_misure_gaussiana_baseline-1) );
    float Holder_misure = 0.0;
    for (int scan = blfrom; scan < blto; scan++){
        Holder_misure += std::pow( (signal.s[scan]*1.0) - media_gaussiana_baseline  ,2);
    }  
	sigma_gaussiana_baseline = costante_calcolo_sigma_gaussiana * std::sqrt( Holder_misure );
//------------------------------------------------------------------------------------------------------------------------------	
	
	
    // calcolo integrali e vmax
	int pos_max = 0;
	for (int j=intfrom; j<intto; j++) {
		integral += (signal.s[j] - bl);
		if ((signal.s[j] - bl) > vmax) {
			vmax = (signal.s[j] - bl);
			pos_max = j;
		}
	}
	

//------------------------------------------------------------------------------------------------------------------------------

float costante_controllo_singolo_evento = media_gaussiana_baseline + (3*sigma_gaussiana_baseline);

//------------------------------------------------------------------------------------------------------------------------------

//riscrizione
costante_controllo_singolo_evento = vmax*3.0/10.0;

//------------------------------------------------------------------------------------------------------------------------------

	// CALCOLO DELLA LARGHEZZA DEL SEGNALE A UNA CERTA PERCENTUALE DEL VMAX
	int scan, lbound = 0, rbound = 0;

	for (scan = pos_max; scan > intfrom; scan--) {
		if ((signal.s[scan] - bl) < costante_controllo_singolo_evento) {
			lbound = scan;
			break;
		}
	}
	for (scan = pos_max; scan < intto  ; scan++) {
		if ((signal.s[scan] - bl) < costante_controllo_singolo_evento) {
			rbound = scan;
			break;
		}
	}
	
	
//------------------------------------------------------------------------------------------------------------------------------


int numero_punti = 6;

auto function_sx = new TF1("sx", "pol1", lbound-3, lbound+3);
auto function_dx = new TF1("dx", "pol1", rbound-3, rbound+3);

function_sx -> SetLineStyle(2);
function_dx -> SetLineStyle(2);

int data_x_sx[6];
int data_y_sx[6];
int data_x_dx[6];
int data_y_dx[6];

for (int i = 0; i < numero_punti; ++i) {
        data_x_sx[i] = lbound - 3 + i;
        data_y_sx[i] = signal.s[lbound - 3 + i] - bl;
        data_x_dx[i] = rbound - 3 + i;
        data_y_dx[i] = signal.s[rbound - 3 + i] - bl;
}

TGraph* graph_sx = new TGraph(numero_punti, data_x_sx, data_y_sx);
TGraph* graph_dx = new TGraph(numero_punti, data_x_dx, data_y_dx);

graph_sx -> SetLineColor(kOrange+2);
graph_dx -> SetLineColor(kBlue);
graph_sx -> SetMarkerStyle(7);
graph_dx -> SetMarkerStyle(7);

graph_sx -> Fit(function_sx, "QR");
graph_dx -> Fit(function_dx, "QR");

float p0_sx = function_sx->GetParameter(0);  // Intercept
float p1_sx = function_sx->GetParameter(1);  // Slope

float p0_dx = function_dx->GetParameter(0);  // Intercept
float p1_dx = function_dx->GetParameter(1);  // Slope


if ( i == maxev-1) {

  auto can = new TCanvas("can", "can", 1000, 800);
  auto mg = new TMultiGraph("multi","multi");

  mg -> Add(graph_sx);
  mg -> Add(graph_dx);
  mg -> Draw("APL");

  function_sx -> Draw("same");
  function_dx -> Draw("same");

  can -> SetGrid();
  can -> BuildLegend();
}

//------------------------------------------------------------------------------------------------------------------------------
	
	float lbound_def = (costante_controllo_singolo_evento - p0_sx ) / p1_sx;
	
	float rbound_def = (costante_controllo_singolo_evento - p0_dx ) / p1_dx;

	width = rbound_def - lbound_def;

    nt->Fill(i,vmax,integral,width,bl);
  
  } //chiusura loop event
  
  std::cout << maxev << " events analyzed..." << std::endl;

  fout->Write();
  fout->Close();

  fin->Close();

  new TFile(outfilename); // riapre il file dei risultati

  return 0;
}
