//prima versione ci sono cose complicate per nulla
//con alcuni aggiornamenti dovrebbe comunque essere funzionante / corretta
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


vector<double> SlicedX;
vector<double> SlicedY;
int HowManyPrimitiveIteration = 20;

int MargineGraficoLower = 50;
int MargineGraficoUpper = 50;

//margini numerici per il fit 
double FitLowerBound = 2e-6;
double FitUpperBound;

//indici per printare un grafico leggermente più largo rispetto al solo range di fit
int GraphLowerIndex = 0;
int GraphUpperIndex = 0;



void FitPreliminaryGraph(){

/* /\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\ */
	bool FakeDataBuilder = true;
	if(FakeDataBuilder){
		//d section
			FitUpperLevel_d.at("run0") = 0.04e-3 ;
			FitUpperLevel_d.at("run1") = 0.04e-3 ;
			FitUpperLevel_d.at("run2") = 0.04e-3 ;
			FitUpperLevel_d.at("run3") = 0.03e-3 ;
			FitUpperLevel_d.at("run4") = 0.03e-3 ;
			FitUpperLevel_d.at("run5") = 0.03e-3 ;
			FitUpperLevel_d.at("run6") = 0.03e-3 ;
			FitUpperLevel_d.at("run7") = 0.028e-3 ;
			FitUpperLevel_d.at("run8") = 0.028e-3 ;
			FitUpperLevel_d.at("run9") = 25e-6 ;
			FitUpperLevel_d.at("run10") = 0.025e-3 ;
		//v section
			FitUpperLevel_v.at("run0") = 14e-6 ;
			FitUpperLevel_v.at("run1") = 16e-6 ;
			FitUpperLevel_v.at("run2") = 18e-6 ;
			FitUpperLevel_v.at("run3") = 20e-6 ;
			FitUpperLevel_v.at("run4") = 25e-6 ;
			FitUpperLevel_v.at("run5") = 28e-6 ;
			FitUpperLevel_v.at("run6") = 30e-6 ;
			FitUpperLevel_v.at("run7") = 32e-6 ;
			FitUpperLevel_v.at("run8") = 35e-6 ;
			FitUpperLevel_v.at("run9") = 38e-6 ;
			FitUpperLevel_v.at("run10") = 40e-6 ;
			FitUpperLevel_v.at("run11") = 45e-6 ;
			FitUpperLevel_v.at("run12") = 45e-6 ;
			FitUpperLevel_v.at("run13") = 47e-6 ;
			FitUpperLevel_v.at("run14") = 50e-6 ;
			FitUpperLevel_v.at("run15") = 52e-6 ;
			FitUpperLevel_v.at("run16") = 53e-6 ;
			FitUpperLevel_v.at("run17") = 54e-6 ;
			FitUpperLevel_v.at("run18") = 57e-6 ;
			FitUpperLevel_v.at("run19") = 60e-6 ;
	}
	if(FakeDataBuilder == true && DebugPrint == true) logFile << " PRELIMINATY FIT: Fake data raange builded " << endl;
/* /\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\ */ 


	//non sappiamo quanti punti ci saranno manteniamo quindi 2k
	SlicedX.reserve(2000);
	SlicedY.reserve(2000);
	

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

// prendiamo un vettore e lo riempiamo con il valore assoluto
// del punto - target, facendo così creiamo un vettore il cui
//minimo elemento, per consistenza degli indici, mi resituisce
//l'indice per eseguire gli slicing
//si potevano usare delle lambda function come comparison per l'algorithm

	//variabili locali per assicurarne la validità
	vector<double> VectorOfDifference_L;
	VectorOfDifference_L.reserve(2000);
	
	vector<double> VectorOfDifference_U;
	VectorOfDifference_U.reserve(2000);

	int ElementIndex;
	if(DebugPrint) logFile << " PRELIMINARY FIT: SLICE DATA: oggetti locali creati " << endl;
	


	//vettori delle differenze
	for( auto element : Xdata ){
		VectorOfDifference_L.push_back( abs( element-FitLowerBound ) );
		VectorOfDifference_U.push_back( abs( element-FitUpperBound ) );
	}

	//estrazione dell'indice inferiore
	auto SmallestElement_L = min_element( VectorOfDifference_L.begin(), VectorOfDifference_L.end() );
	ElementIndex    = distance( VectorOfDifference_L.begin(), SmallestElement_L ); 	
	GraphLowerIndex = ElementIndex - MargineGraficoLower;
	if( GraphLowerIndex < 0 ) GraphLowerIndex = 0;

	//estrazione dell'indice superiore
	auto SmallestElement_U = min_element( VectorOfDifference_U.begin(), VectorOfDifference_U.end() );
	ElementIndex    = distance( VectorOfDifference_U.begin(), SmallestElement_U ); 	
	GraphUpperIndex = ElementIndex + MargineGraficoUpper;
	if( GraphUpperIndex > Xdata.size() ) GraphUpperIndex = Xdata.size()-1;


	//slicing dei vettori
	if( Xdata.empty() ){
		if(DebugPrint) logFile << " PRELIMINARY FIT: SLICE DATA: la reference del vettore dei dati X è vuoto!! " << endl;
	}
	if( Ydata.empty() ){
		if(DebugPrint) logFile << " PRELIMINARY FIT: SLICE DATA: la reference del vettore dei dati Y è vuoto!! " << endl;
		}

	
	for( int i=GraphLowerIndex; i<=GraphUpperIndex; i++ ){
		SlicedX.push_back( Xdata.at(i) );	
		SlicedY.push_back( Ydata.at(i) ); 
	}
	

	if( SlicedX.empty() ){
		if(DebugPrint) logFile << " PRELIMINARY FIT: SLICE DATA: vettore dei dati X slice è vuoto!! " << endl;
	}
	if( SlicedY.empty() ){
		if(DebugPrint) logFile << " PRELIMINARY FIT: SLICE DATA: vettore dei dati Y slice è vuoto!! " << endl;
		}
	if(DebugPrintVerbose) logFile << " PRELIMINARY FIT: SLICE DATA: print control degli sliced vectors " << endl;
	if(DebugPrintVerbose){
		for(auto el : SlicedX) logFile << el << endl; 
		for(auto el : SlicedY) logFile << el << endl;
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
	
	TF1* FitGaussoEsponenzialico = new TF1("FitGaussoEsponenzialico", "gaus"/*GaussianExponentialFunction*/, FitLowerBound, FitUpperBound/*, 6*/);  
	     FitGaussoEsponenzialico -> SetLineColor(kGreen+3);
	     FitGaussoEsponenzialico -> SetLineStyle(2); //dashed line for the fit line

	DataGraph -> Draw("AP");
	//update della GUI del grafico
	 	pad1 -> Modified();
		pad1 -> Update();

	//inserire redirect dell output
	cout << endl;
	cout << " FITTING PRINTING --------------------------------------------------- " << endl;
	cout << endl;
	DataGraph -> Fit( FitGaussoEsponenzialico, "RV" );
	cout << endl;


	FitGaussoEsponenzialico -> Draw("same");
	//update della GUI del grafico
	 	pad1 -> Modified();
		pad1 -> Update();

	auto legend = new TLegend();
	     legend -> AddEntry( DataGraph, "data", "lpe");
	     legend -> AddEntry( FitGaussoEsponenzialico, "fit", "lpe" );
	     legend -> Draw();
	//update della GUI del grafico
		 	pad1 -> Modified();
			pad1 -> Update();


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
		DataGraph->GetPoint(i, x, y);
	  	double fittedValue = FitGaussoEsponenzialico->Eval(x);
	   	double residual = y - fittedValue;
	  	ResidualGraph -> SetPoint(i, x, residual);
//	  	ResidualGraph -> SetPointError(i, 0, DataGraph->GetErrorY(i)); // Assuming no error in x-direction, only y-direction
			
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
