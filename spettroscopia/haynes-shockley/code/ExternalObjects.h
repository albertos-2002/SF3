#ifndef EXTERNALOBJECTS_H
#define EXTERNALOBJECTS_H

#include <string>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

/* GLOBAL SCOPE ============================================================================ */

//data and organization
vector<float> temperatura_dconst = { 24.2, 24.2, 24.3, 24.4, 24.5, 23.2, 23.5, 23.9, 24.0, 24.4, 24.6 };
vector<float> temperatura_vconst = { 24.5, 24.5, 24.5, 24.2, 24.2, 24.5, 23.9, 22.9, 22.5, 22.8, 23.3, 23.7, 24.1, 24.2, 24.4, 24.5, 24.7, 24.6, 24.2, 23.8 };
//i dati non sono molto affidabili in quanto presi con un termometro scrauso

vector<string> FileName_dconst = { "run0", "run1", "run2", "run3", "run4", "run5", "run6", "run7", "run8", "run9", "run10" };
vector<string> FileName_vconst = { "run0", "run1", "run2", "run3", "run4", "run5", "run6", "run7", "run8", "run9", "run10", "run11", "run12", "run13", "run14", "run15", "run16", "run17", "run18", "run19" };


//gestione memoria
typedef map< string, vector<double> > DataMap;
DataMap SegnaleTemporale_d;
DataMap SegnaleTemporale_v;
DataMap SegnaleVoltico_d;
DataMap SegnaleVoltico_v;

typedef map< string, double > DataMap2;
DataMap2 FitUpperLevel_d;
DataMap2 FitUpperLevel_v;


//gestione dei path
string PathToSaveGraph = "../risultati/grafici/";  //relative from execution folder


//constrollo sul salvataggio dei grafici
bool SaveThaGraph = false;
string InputForSaveTheGraph;


//flags analysisinfo
map<string, string> FunctionActivator;


//log / dedug
bool DebugPrint = true;
ofstream logFile("logs.txt");


/* FUNCTION DECLARATION ==================================================================== */
void AnalysisInfo();
void MapAndVectorMemoryAllocator();
void ReadShit();
void AvoidCodeDuplicationTheySaid( const string FileToReadIndex, const string& ThePathOfFile, DataMap& SegnaleTempo, DataMap& SegnaleVolt );
void MakePreliminaryGraph();
void MakeTemperatureGraph();
void FitPreliminaryGraph();


/* FUNCTION DEFINITION ===================================================================== */

//la funzione definisce una gaussiana corretta con un esponenziale
double GaussianExponentialFunction( double*x, double* par ){

	double var = *x;

	double ConstGauss    = par[0];
	double MediaGauss    = par[1];
	double SigmaGauss    = par[2];
	double ConstExp      = par[3];
	double ScaleExp      = par[4];
	double ConstFunction = par[5];

	double GaussSection = ConstGauss * exp( -0.5 * pow( (var-MediaGauss)/(SigmaGauss)  ,2 ) );
	double ExpSection   = ConstExp * exp( var/ScaleExp );

	//questa formula è stata presa dalla macro fornita con la documentazione sull'esperienza
	double Result = GaussSection + ExpSection - ConstFunction;
	
	return Result;
};


#endif
