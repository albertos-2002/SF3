#ifndef EXTERNALOBJECTS_H
#define EXTERNALOBJECTS_H

#include <string>
#include <vector>
#include <map>
using namespace std;

/* GLOBAL SCOPE ============================================================================ */
typedef map< string, vector<double> > DataMap;

//i dati non sono molto affidabili in quanto presi con un termometro scrauso
vector<float> temperatura_dconst = { 24.2, 24.2, 24.3, 24.4, 24.5, 23.2, 23.5, 23.9, 24.0, 24.4, 24.6 };
vector<float> temperatura_vconst = { 24.5, 24.5, 24.5, 24.2, 24.2, 24.5, 23.9, 22.9, 22.5, 22.8, 23.3, 23.7, 24.1, 24.2, 24.4, 24.5, 24.7, 24.6, 24.2, 23.8 };


vector<string> FileName_dconst = { "run0", "run1", "run2", "run3", "run4", "run5", "run6", "run7", "run8", "run9", "run10" };
vector<string> FileName_vconst = { "run0", "run1", "run2", "run3", "run4", "run5", "run6", "run7", "run8", "run9", "run10", "run11", "run12", "run13", "run14", "run15", "run16", "run17", "run18", "run19" };

string PathToSaveGraph = "../risultati/grafici/";  //relative from execution folder 

//gestione memoria
DataMap SegnaleTemporale_d;
DataMap SegnaleTemporale_v;
DataMap SegnaleVoltico_d;
DataMap SegnaleVoltico_v;

bool DebugPrint = true;

//constrollo sul salvataggio dei grafici
bool SaveThaGraph = false;
int InputForSaveTheGraph = 0;

ofstream logFile;

/* FUNCTION DECLARATION ==================================================================== */
void MapAndVectorMemoryAllocator();
void ReadShit();
void AvoidCodeDuplicationTheySaid( const string FileToReadIndex, const string& ThePathOfFile, DataMap& SegnaleTempo, DataMap& SegnaleVolt );
void MakePreliminaryGraph();
void MakeTemperatureGraph();



#endif
