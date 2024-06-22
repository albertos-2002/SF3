#ifndef EXTERNALOBJECTS_H
#define EXTERNALOBJECTS_H

#include <string>
#include <vector>
#include <map>
using namespace std;

/* GLOBAL SCOPE ============================================================================ */
vector<float> temperatura_dconst = {};
vector<float> temperatura_vconst = {};

vector<string> FileName_dconst = { "run0", "run1", "run2", "run3", "run4", "run5", "run6", "run7", "run8", "run9", "run10" };
vector<string> FileName_vconst = { "run0", "run1", "run2", "run3", "run4", "run5", "run6", "run7", "run8", "run9", "run10", "run11", "run12", "run13", "run14", "run15", "run16", "run17", "run18", "run19" };

string PathToSaveGraph = "../risultati/grafici";  //relative from execution folder 

//gestione memoria
map< string, map< string, vector<double> >* >* SegnaleTemporale;
map< string, map< string, vector<double> >* >* SegnaleVoltico;

bool DebugPrint = true;

/* FUNCTION DECLARATION ==================================================================== */
void MapAndVectorMemoryAllocator();
void ReadShit();


#endif
