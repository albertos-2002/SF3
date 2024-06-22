
#include <iostream>
#include <string>
#include <sstirng>
#include <fstream>
#include <vector>
#include <cmath>

#include <TApplication.h>
#include <TGraphErrors.h>
#include <TMultigraph.h>
#include <TLegend.h>
#include <TFile.h>
#include <TCanvas.h>
#include <TF1.h>
#include <TPad.h>
#include <TLine.h>
#include <TAxis.h>

using namespace std;

/* GLOBAL SCOPE ====================================== */



/* =================================================== */

int main (int argN, char* argL[]) {

	auto AppWTF = new TApplication("MakeThaApppp", &argN, argL);


	AppWTF -> Run(kTRUE);

	return 0;
}
