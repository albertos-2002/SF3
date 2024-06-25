/* ==================================================================
|																	|
| Viene fatto uno slice del grafico in modo da rendelo più usabile  |
| Lo starting point per il fit è dallo zero                         |
|																	|
| I parametri sono associati ai seguenti numeri                     |
| Nella struct vengono salvati con il loro nome                     |
|                                                                   |
| 0 - ConstGauss													|
| 1 - MediaGauss													|
| 2 - SigmaGauss 													|
| 3 - ConstExp  													|
| 4 - ScaleExp  													|
| 5 - ConstFunction 												|
|																	|
================================================================== */

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>

#include <TGraphErrors.h>
#include <TMultiGraph.h>
#include <TLegend.h>
#include <TCanvas.h>
#include <TF1.h>
#include <TPad.h>
#include <TLine.h>
#include <TAxis.h>

#include "ExternalObjects.h"
using namespace std;


//cambiamento di approccio:
//fit puramente gaussiano attorno alla punta della curva



vector<double> SlicedX;
vector<double> SlicedY;
vector<double> MoreSlicedX;
vector<double> MoreSlicedY;
int HowManyPrimitiveIteration = 20;
vector<int> IndiciDaSalvare;

int MargineGraficoLower = 50;
int MargineGraficoUpper = 50;

//margini numerici per il fit 
double FitLowerBound = 2e-6;
double FitUpperBound;

//indici per printare un grafico leggermente più largo rispetto al solo range di fit
int GraphLowerIndex = 0;
int GraphUpperIndex = 0;


// definiamo una funzione per il controllo sullo slicing --------------------------------------------
// Define a function that checks if a value is within a specific range
bool isWithinRange(double value, double lower_bound, double upper_bound) {
    return value >= lower_bound && value <= upper_bound;
}
//---------------------------------------------------------------------------------------------------



void FitPreliminaryGraph(){


	//non sappiamo quanti punti ci saranno manteniamo quindi 2k
	SlicedX.reserve(2000);
	SlicedY.reserve(2000);
	MoreSlicedX.reserve(2000);
	MoreSlicedY.reserve(2000);
	

	FunctionCaller_PreliminaryFit( FileName_dconst, "d" );
	if(DebugPrint) logFile << " PRELIMINARY FIT: processed D data " << endl;

	FunctionCaller_PreliminaryFit( FileName_vconst, "v" );
	if(DebugPrint) logFile << " PRELIMINARY FIT: processed V data " << endl;

	//pulizia degli oggetti

	return;
}


/* =================================================================================== */

void FunctionCaller_PreliminaryFit( const vector<string>& NameContainer, string SelectorFlag ){

//un minimo di code duplication per la distinzione dei dati

	if( NameContainer.empty() ){
		if(DebugPrint) logFile << " PRELIMINARY FIT: FUNCTION CALLER: la reference del vettore dei nomi è vuoto!! " << endl;
	}
	if( FitUpperLevel_d.empty() ){
		if(DebugPrint) logFile << " PRELIMINARY FIT: FUNCTION CALLER: vettore dei upper level fit bound D è vuoto!! " << endl;
	}
	if( FitUpperLevel_v.empty() ){
		if(DebugPrint) logFile << " PRELIMINARY FIT: FUNCTION CALLER: vettore dei upper level fit bound V è vuoto!! " << endl;
	}


	for( auto index : NameContainer ){

		if( SelectorFlag == "d" ){ 
			 FitUpperBound = FitUpperLevel_d.at(index);

			 //slicing del vettore e salvataggio
			 SliceTheData_PreliminaryFit( SegnaleTemporale_d.at(index), SegnaleVoltico_d.at(index) );

			 //creazione del grafico
			 FitAndGraphCreator( index, SelectorFlag );

			 //pulizia vettori
			 SlicedX.clear();
			 SlicedX.clear();
		}
			 
		if( SelectorFlag == "v" ){ 
			 FitUpperBound = FitUpperLevel_v.at(index); 

			 //slicing del vettore e salvataggio
			 SliceTheData_PreliminaryFit( SegnaleTemporale_v.at(index), SegnaleVoltico_v.at(index) );

			 //creazione del grafico
			 FitAndGraphCreator( index, SelectorFlag );

			 //pulizia vettori
			 SlicedX.clear();
			 SlicedY.clear();
		}


	}

	return;
}

/* =================================================================================== */

void SliceTheData_PreliminaryFit( vector<double>& Xdata, vector<double>& Ydata ){
//metodo di chatgpt relativamente semplice

	//pulizia vettori
	SlicedX.clear();
	SlicedY.clear();
	MoreSlicedX.clear();
	MoreSlicedY.clear();

	size_t IndiceInferiore;
	size_t IndiceSuperiore;


	//usiamo una funzione per estarre quali indice del vettore dei dati appartengono alla selezione che abbiamo fatto
	for (size_t i = 0; i < Xdata.size(); i++) {
		if( isWithinRange( Xdata.at(i), FitLowerBound, FitUpperBound ) ) {
	            IndiciDaSalvare.push_back(i);
	    }
	}

	//allargiamo i dati da estrarre in modo da non avere un fit che copre tutto il grafico
	IndiceInferiore = IndiciDaSalvare.at(0) - 50 ; 			                //andiamo indietro di 50 punti
	IndiceSuperiore = IndiciDaSalvare.at( IndiciDaSalvare.size()-1 ) + 50;  //andiamo avanti di 50 punti

	//controlliamo di essere ancora dentro il range dei dati che abbiamo
	if( IndiceInferiore < 0 ) IndiceInferiore = 0;
	if( IndiceSuperiore > ( Xdata.size()-1 ) ) IndiceSuperiore = ( Xdata.size()-1 ); 

	//estraiamo i dati
	for( size_t i=IndiceInferiore; i<=IndiceSuperiore; i++ ){
		SlicedX.push_back( Xdata.at(i) );
		SlicedY.push_back( Ydata.at(i) );
	}
	for( auto i : IndiciDaSalvare ){
		MoreSlicedX.push_back( Xdata.at(i) );
		MoreSlicedY.push_back( Ydata.at(i) );
	}


	return;
}

/* =================================================================================== */

void FitAndGraphCreator( const string& index, string& SelectorFlag ){

	//variabili locali per assicurarne la validità
	string NomeGrafico = index + SelectorFlag;

	if(DebugPrint) logFile << " grafico per " << NomeGrafico << endl;

	auto PreliminaryFittingCanvas = new TCanvas( "PreliminaryFittingCanvas", "PreliminaryFittingCanvas", 1920, 1080 );
	TPad *pad1 = new TPad("pad1", "Pad 1", 0.0, 0.28, 1.0, 1.0); // Upper pad
	TPad *pad2 = new TPad("pad2", "Pad 2", 0.0, 0.0, 1.0, 0.28); // Lower pad

	pad1 -> Draw();
	pad2 -> Draw();

	pad1 -> SetGrid();
	pad2 -> SetGrid();

	if(DebugPrint) logFile << " FITANDGRAPHCREATOR: canvas & pad 1&2 set up done " << endl;

	//---------------------------------------------------------------------------------

	//pad grafico
	pad1 -> cd();

	auto DataGraph = new TGraphErrors( SlicedX.size(), SlicedX.data(), SlicedY.data(), 0/*xerr*/, 0/*yerr*/ );
		 DataGraph -> SetTitle( NomeGrafico.c_str() );
	     DataGraph -> SetMarkerStyle(7);
	     DataGraph -> SetMarkerColor(kOrange+7);

	auto DummyDataGraph = new TGraphErrors( MoreSlicedX.size(), MoreSlicedX.data(), MoreSlicedY.data(), 0/*xerr*/, 0/*yerr*/ );
	
//	TF1* FitGaussoEsponenzialico = new TF1("FitGaussoEsponenzialico", "gaus", FitLowerBound, FitUpperBound);  
//	TF1* FitGaussoEsponenzialico = new TF1("FitGaussoEsponenzialico", "[0]*exp(-0.5*((x-[1])/[2])^2) + [3]*exp(-x/[4]) + [5]", FitLowerBound, FitUpperBound);
	TF1* FitGaussoEsponenzialico = new TF1("FitGaussoEsponenzialico", GaussianExponentialFunction, FitLowerBound, FitUpperBound, 6);
//	TF1* FitGaussoEsponenzialico = new TF1("FitGaussoEsponenzialico", GaussianExponentialFunction);
	     FitGaussoEsponenzialico -> SetLineColor(kGreen+3);
	     FitGaussoEsponenzialico -> SetLineStyle(2); //dashed line for the fit line

	DataGraph -> Draw("AP");
	//update della GUI del grafico
	 	pad1 -> Modified();
		pad1 -> Update();
		gSystem -> ProcessEvents();


	//consiglio di chatgpt
	// Set initial parameter guesses and limits
//	FitGaussoEsponenzialico->SetParameters(1.0, 0.0, 1.0, 1.0, 1.0, 0.0); // Initial guesses
	FitGaussoEsponenzialico->SetParLimits(0, 0, 1); 					  // ConstGauss
	FitGaussoEsponenzialico->SetParLimits(1, 4e-6, 0.03e-3); 			  // MediaGauss
//	FitGaussoEsponenzialico->SetParLimits(2, 0.1, 10.0); 				  // SigmaGauss
//	FitGaussoEsponenzialico->SetParLimits(3, 0.0, 10.0); 				  // ConstExp
//	FitGaussoEsponenzialico->SetParLimits(4, 0.1, 10.0); 				  // ScaleExp
//	FitGaussoEsponenzialico->SetParLimits(5, -10.0, 10.0); 				  // ConstFunction





	//inserire redirect dell output
	cout << endl;
	cout << " FITTING PRINTING --------------------------------------------------- " << endl;
	cout << endl;
	DataGraph -> Fit( FitGaussoEsponenzialico, "RV" );
//	DummyDataGraph -> Fit( FitGaussoEsponenzialico, "V" );
	cout << endl;


	FitGaussoEsponenzialico -> Draw("same");
	//update della GUI del grafico
	 	 pad1 -> Modified();
		 pad1 -> Update();
		 gSystem -> ProcessEvents();

	auto legend = new TLegend();
	     legend -> AddEntry( DataGraph, "data", "lpe");
	     legend -> AddEntry( FitGaussoEsponenzialico, "fit", "lpe" );
	     legend -> Draw();
	//update della GUI del grafico
		 pad1 -> Modified();
		 pad1 -> Update();
		 gSystem -> ProcessEvents();

/*	//salvataggio dei parametri di fit
	if( SelectorFlag == "d" ){
		auto& structure = FitParameters_d.at(index);
		structure.ConstGauss    = FitGaussoEsponenzialico -> GetParameter(0);
		structure.MediaGauss    = FitGaussoEsponenzialico -> GetParameter(1);
		structure.SigmaGauss    = FitGaussoEsponenzialico -> GetParameter(2);
		structure.ConstExp      = FitGaussoEsponenzialico -> GetParameter(3);
		structure.ScaleExp      = FitGaussoEsponenzialico -> GetParameter(4);
		structure.ConstFunction = FitGaussoEsponenzialico -> GetParameter(5);
	}

	if( SelectorFlag == "v" ){
		auto& structure = FitParameters_d.at(index);
		structure.ConstGauss    = FitGaussoEsponenzialico -> GetParameter(0);
		structure.MediaGauss    = FitGaussoEsponenzialico -> GetParameter(1);
		structure.SigmaGauss    = FitGaussoEsponenzialico -> GetParameter(2);
		structure.ConstExp      = FitGaussoEsponenzialico -> GetParameter(3);
		structure.ScaleExp      = FitGaussoEsponenzialico -> GetParameter(4);
		structure.ConstFunction = FitGaussoEsponenzialico -> GetParameter(5);		
	}
	cout << " parametri di fit estratti " << endl;     
*/	  

	//pad residui
	pad2 -> cd();

	// Create a TGraphErrors for the residuals
	auto ResidualGraph = new TGraphErrors();
	     ResidualGraph -> SetTitle("Residui Fit");
		 ResidualGraph -> SetMarkerStyle(20);
		 ResidualGraph -> SetMarkerSize(1);
		 ResidualGraph -> SetMarkerColor(kGreen+3);


	//in teoria prende punti di troppo - dargli un vettore sliced direttamente
	for (int i = 0; i < DataGraph->GetN(); ++i) {
		double x, y;
		DummyDataGraph->GetPoint(i, x, y);
	  	double fittedValue = FitGaussoEsponenzialico->Eval(x);
	   	double residual = y - fittedValue;
	  	ResidualGraph -> SetPoint(i, x, residual);
//	  	ResidualGraph -> SetPointError(i, 0, DummyDataGraph->GetErrorY(i)); // Assuming no error in x-direction, only y-direction
			
    }

	ResidualGraph -> Draw("AP");

	auto legend2 = new TLegend();
         legend2 -> AddEntry(ResidualGraph, "Residui", "lpe");
         legend2 -> Draw(); 
  

    //update della GUI del grafico
 	pad1 -> Modified();
	pad1 -> Update();
	pad2 -> Modified();
	pad2 -> Update();
	gSystem -> ProcessEvents();
	//la canvas non vuole updaitarsis
	

	cout << " Hai a disposizione " << HowManyPrimitiveIteration <<  " azioni per modificare la canvas prima del continue " << endl;
	for(int i=0; i<HowManyPrimitiveIteration; i++){
	  	PreliminaryFittingCanvas -> WaitPrimitive();
	    cout << "Iterazioni restanti " << HowManyPrimitiveIteration-1-i << endl;
	}

	//salvataggio del grafico modificato
    if(SaveThaGraph){
     	 string SaveNameGraph = PathToSaveGraph + "fitting/" + NomeGrafico + ".png";
     	 PreliminaryFittingCanvas -> SaveAs( SaveNameGraph.c_str() );
         cout << " file saved succesfully " << endl;
    }
    

	//---------------------------------------------------------------------------------

	cout << "Next Enter will go to next iteration" << endl;
	cin.clear(); // Clear any error flags
	cin.ignore();  // Ignore any leftover characters in the input buffer
	cin.get();     // Wait for the user to press Enter

	//pulizia delle variabili
	pad1 -> Clear();
	pad2 -> Clear();
	PreliminaryFittingCanvas -> Clear();

	return;
}
