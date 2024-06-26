/* ==================================================================
|								                                    |
| Viene fatto uno slice del grafico in modo da rendelo più usabile  |
| Lo starting point per il fit è dallo zero                         |
|								                                    |
| I parametri sono associati ai seguenti numeri                     |
| Nella struct vengono salvati con il loro nome                     |
|                                                                   |
| 0 - ConstGauss						                            |
| 1 - MediaGauss						                            |
| 2 - SigmaGauss 						                            |
| 3 - ConstExp  						                            |
| 4 - ScaleExp  						                            |
| 5 - ConstFunction 						                        |
|								                                    |
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
#include "TFitResultPtr.h"
#include "TFitResult.h"

#include "ExternalObjects.h"
using namespace std;


//definite come variabili globali le funzioni possono lavorarci senza bisogno di passarli per reference
vector<double> SlicedX;
vector<double> SlicedY;
vector<double> MoreSlicedX;
vector<double> MoreSlicedY;
int HowManyPrimitiveIteration = 20;
vector<int> IndiciDaSalvare;

int MargineGrafico = 50;

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

/* /\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\ */
// non sono fakedata sono gli upper range determinati precedentemente (riduce il tempo di testing)
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
/* /\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\ */ 


	//non sappiamo quanti punti ci saranno manteniamo quindi 2k
	SlicedX.reserve(2000);
	SlicedY.reserve(2000);
	MoreSlicedX.reserve(2000);
	MoreSlicedY.reserve(2000);
	

	FunctionCaller_PreliminaryFit( FileName_dconst, "d" );
	if(DebugPrint) logFile << " PRELIMINARY FIT: processed D data " << endl;

	FunctionCaller_PreliminaryFit( FileName_vconst, "v" );
	if(DebugPrint) logFile << " PRELIMINARY FIT: processed V data " << endl;


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

		}
			 
		if( SelectorFlag == "v" ){ 
			 FitUpperBound = FitUpperLevel_v.at(index); 

			 //slicing del vettore e salvataggio
			 SliceTheData_PreliminaryFit( SegnaleTemporale_v.at(index), SegnaleVoltico_v.at(index) );

			 //creazione del grafico
			 FitAndGraphCreator( index, SelectorFlag );

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
	IndiceInferiore = IndiciDaSalvare.at(0) - MargineGrafico ; 			                //andiamo indietro di 50 punti
	IndiceSuperiore = IndiciDaSalvare.at( IndiciDaSalvare.size()-1 ) + MargineGrafico;  //andiamo avanti di 50 punti

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
	TPad *pad1 = new TPad("pad1", "Pad 1", 0.0, 0.30, 1.0, 1.0); // Upper pad
	TPad *pad2 = new TPad("pad2", "Pad 2", 0.0, 0.0, 1.0, 0.30); // Lower pad

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
	
	TF1* FitGaussoEsponenzialico = new TF1("FitGaussoEsponenzialico", GaussianExponentialFunction, FitLowerBound, FitUpperBound, 6);
	     FitGaussoEsponenzialico -> SetLineColor(kGreen+3);
	     FitGaussoEsponenzialico -> SetLineStyle(2); //dashed line for the fit line

	DataGraph -> Draw("AP");
	//update della GUI del grafico
	 	pad1 -> Modified();
		pad1 -> Update();
		gSystem -> ProcessEvents();


	//consiglio di chatgpt - limiti e range presi da stroili
	// Set initial parameter guesses and limits
	//senza questo il fit non converge e da risultati assurdi o ineistenti
	//i residui (quando vengono calcolati) sono orrendi

	//determiniamo la posizione del massimo della y
	auto it = max_element( SlicedY.begin(), SlicedY.end() );
	int posmax = it - SlicedY.begin();	
	
	FitGaussoEsponenzialico->SetParameters(0.001, SlicedY.at(posmax), SlicedX.at(posmax), 0.0005, -SlicedX.at(posmax)*0.5, 0.0); // Initial guesses
	FitGaussoEsponenzialico->SetParLimits(0,0,10000);           							                                     // ConstGauss
	FitGaussoEsponenzialico->SetParLimits(1, SlicedX.at(posmax) * 0.8, SlicedX.at(posmax) * 1.5 ); 			  	                 // MediaGauss
	FitGaussoEsponenzialico->SetParLimits(2, FitLowerBound, FitUpperBound); 				  		                             // SigmaGauss
	FitGaussoEsponenzialico->SetParLimits(3, 0.0, 1);   						  	     		                                 // ConstExp
	FitGaussoEsponenzialico->SetParLimits(4, -SlicedX.at(posmax+10), 0.0); 						  	                             // ScaleExp
                                                        //il prof mette 100 ma noi
                                                        //non abbiamo tutto il vettore
	FitGaussoEsponenzialico->SetParLimits(5, -1.0, 1.0); 									                                     // ConstFunction
  

	//eseguiamo un quiet fit
	TFitResultPtr RisultatiFit = DataGraph -> Fit( FitGaussoEsponenzialico, "RQS" );

	//procediamo a stampare i risultati su un file
	if( RisultatiFit -> IsValid() ){

		RedirectOutToFile( FitResultsFile );
	
		cout << endl;
		cout << " ``` " << endl;
		cout << " FIT RESULT for " << NomeGrafico << " ---------------------------------------- " << endl;
		RisultatiFit -> Print( "V" );
		cout << " ``` " << endl;
		cout << "---" << endl;
		cout << endl;

		DeRedirectOutToFile();
	}
	else{
		cout << " Il puntatore ai risultati di fit ha avuto problemi " << endl;
		DataGraph -> Fit( FitGaussoEsponenzialico, "RV" );
	}


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

	//salvataggio dei parametri di fit
	if( SelectorFlag == "d" ){
		auto& structure = FitParameters_d.at(index);
		structure.MediaGauss      = FitGaussoEsponenzialico -> GetParameter(1);
		structure.ErrorMediaGauss = FitGaussoEsponenzialico -> GetParError(1);
	}

	if( SelectorFlag == "v" ){
		auto& structure = FitParameters_d.at(index);
		structure.MediaGauss      = FitGaussoEsponenzialico -> GetParameter(1);
		structure.ErrorMediaGauss = FitGaussoEsponenzialico -> GetParError(1);
	}
	cout << " parametri di fit estratti " << endl;     
	  

	//pad residui
	pad2 -> cd();

	// Create a TGraphErrors for the residuals
	auto ResidualGraph = new TGraphErrors();
	     ResidualGraph -> SetTitle("Residui Fit");
	     ResidualGraph -> SetMarkerStyle(7);
	     ResidualGraph -> SetMarkerSize(1);
	     ResidualGraph -> SetMarkerColor(kGreen+3);


	//in teoria prende punti di troppo - dargli un vettore sliced direttamente
	for (int i = 0; i < DummyDataGraph->GetN(); ++i) {
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
    pad2 -> Modified();
    pad2 -> Update();
    gSystem -> ProcessEvents();     

  	//linea sullo zero per i residui
  	double xmin = pad2 -> GetUxmin();
  	double xmax = pad2 -> GetUxmax();
  	TLine* line = new TLine(xmin, 0, xmax, 0);
  	       line -> SetLineColor(kViolet-3); 
  	       line -> SetLineStyle(9);    
  	       line -> SetLineWidth(1);
  	       line -> Draw();

    //update della GUI del grafico
 	pad1 -> Modified();
	pad1 -> Update();
	pad2 -> Modified();
	pad2 -> Update();
	gSystem -> ProcessEvents();
	//la canvas non vuole updaitarsi così ho usato i pad
	

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
