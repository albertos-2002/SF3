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


//non sappiamo quanti punti ci saranno manteniamo quindi 2k
vector<double> SlicedX;
vector<double> SlicedY;

int MargineGrafico = 25; 
double FitLowerBound = 0.0;
double FitUpperBound;
int GraphLowerIndex = 0;
int GraphUpperIndex = 0;
int HowManyPrimitiveIteration = 20;

auto PreliminaryFittingCanvas = new TCanvas( "PreliminaryFittingCanvas","PreliminaryFittingCanvas",1200,800 );

void FitPreliminaryGraph(){

	SlicedX.reserve(2000);
	SlicedY.reserve(2000);
	

	FunctionCaller_PreliminaryFit( FileName_dconst, "d" );

	FunctionCaller_PreliminaryFit( FileName_vconst, "v" );

	//pulizia degli oggetti

	return;
}


/* =================================================================================== */

void FunctionCaller_PreliminaryFit( const vector<string>& NameContainer, string SelectorFlag ){

//un minimo di code duplication per la distinzione dei dati

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


	//vettori delle differenze
	for( auto element : Xdata ){
		VectorOfDifference_L.push_back( abs( element-FitLowerBound ) );
		VectorOfDifference_L.push_back( abs( element-FitUpperBound ) );
	}

	//estrazione dell'indice inferiore
	auto SmallestElement_L = min_element( VectorOfDifference_L.begin(), VectorOfDifference_L.end() );
	//auto   it_L     = find( VectorOfDifference_L.begin(), VectorOfDifference_L.end(), SmallestElement );
	ElementIndex    = distance( VectorOfDifference_L.begin(), SmallestElement_L ); 	
	GraphLowerIndex = ElementIndex - MargineGrafico;

	//estrazione dell'indice superiore
	auto SmallestElement_D = min_element( VectorOfDifference_U.begin(), VectorOfDifference_U.end() );
	//auto   it_U     = find( VectorOfDifference_U.begin(), VectorOfDifference_U.end(), SmallestElement );
	ElementIndex    = distance( VectorOfDifference_U.begin(), SmallestElement_D ); 	
	GraphUpperIndex = ElementIndex + MargineGrafico;


	//slicing dei vettori
	for( int i=GraphLowerIndex; i<=GraphUpperIndex; i++ ){
		SlicedX.push_back( Xdata.at(i) );	
		SlicedY.push_back( Ydata.at(i) );
	}
	


	return;
}

/* =================================================================================== */

void FitAndGraphCreator( const string& index, string& SelectorFlag ){

	//variabili locali per assicurarne la validità
	TPad *pad1 = new TPad("pad1", "Pad 1", 0.0, 0.25, 1.0, 1.0); // Upper pad
		  pad1 -> Draw();
		  pad1 -> SetGrid();
	TPad *pad2 = new TPad("pad2", "Pad 2", 0.0, 0.0, 1.0, 0.25); // Lower pad
		  pad2 -> Draw();
		  pad2 -> SetGrid();

	string NomeGrafico = index + SelectorFlag;

	//---------------------------------------------------------------------------------

	//pad grafico
	pad1 -> cd();

	auto DataGraph = new TGraphErrors( SlicedX.size(), SlicedX.data(), SlicedY.data(), 0/*xerr*/, 0/*yerr*/ );
		 DataGraph -> SetTitle( "data" );
	     DataGraph -> SetMarkerStyle(8);
	     DataGraph -> SetMarkerColor(kOrange+8);
	
	TF1* FitGaussoEsponenzialico = new TF1("FitGaussoEsponenzialico", GaussianExponentialFunction, FitLowerBound, FitUpperBound, 6);  
	     FitGaussoEsponenzialico -> SetLineColor(kGreen+3);
	     FitGaussoEsponenzialico -> SetLineStyle(2); //dashed line for the fit line

	//inserire redirect dell output
	DataGraph -> Fit( FitGaussoEsponenzialico, "RV" );

	FitGaussoEsponenzialico -> Draw();
	DataGraph -> Draw("AP");

	auto legend = new TLegend();
	     legend -> AddEntry( DataGraph, "data", "lpe");
	     legend -> AddEntry( FitGaussoEsponenzialico, "fit", "lpe" );
	     legend -> Draw();


	//salvataggio dei parametri di fit
	if( SelectorFlag == "d" ){
		auto structure = FitParameters_d.at(index);
		structure.ConstGauss    = FitGaussoEsponenzialico -> GetParameter(0);
		structure.MediaGauss    = FitGaussoEsponenzialico -> GetParameter(1);
		structure.SigmaGauss    = FitGaussoEsponenzialico -> GetParameter(2);
		structure.ConstExp      = FitGaussoEsponenzialico -> GetParameter(3);
		structure.ScaleExp      = FitGaussoEsponenzialico -> GetParameter(4);
		structure.ConstFunction = FitGaussoEsponenzialico -> GetParameter(5);
	}

	if( SelectorFlag == "v" ){
		auto structure = FitParameters_d.at(index);
		structure.ConstGauss    = FitGaussoEsponenzialico -> GetParameter(0);
		structure.MediaGauss    = FitGaussoEsponenzialico -> GetParameter(1);
		structure.SigmaGauss    = FitGaussoEsponenzialico -> GetParameter(2);
		structure.ConstExp      = FitGaussoEsponenzialico -> GetParameter(3);
		structure.ScaleExp      = FitGaussoEsponenzialico -> GetParameter(4);
		structure.ConstFunction = FitGaussoEsponenzialico -> GetParameter(5);		
	}
	cout << " parametri di fit estratti " << endl;     
	  

	//pad residui
	pad2 -> cd();

	// Create a TGraphErrors for the residuals
	auto ResidualGraph = new TGraphErrors();
	     ResidualGraph -> SetTitle("Residui Fit");
		 ResidualGraph -> SetMarkerStyle(20);
		 ResidualGraph -> SetMarkerSize(1);
		 ResidualGraph -> SetMarkerColor(kOrange+8);
	
	  for (int i = 0; i < DataGraph->GetN(); ++i) {
	  	double x, y;
	    DataGraph->GetPoint(i, x, y);
	    double fittedValue = FitGaussoEsponenzialico->Eval(x);
	    double residual = y - fittedValue;
	    ResidualGraph -> SetPoint(i, x, residual);
//	    ResidualGraph -> SetPointError(i, 0, DataGraph->GetErrorY(i)); // Assuming no error in x-direction, only y-direction
	  }

	  ResidualGraph -> Draw("AP");

	  auto legend2 = new TLegend();
      	   legend2 -> AddEntry(ResidualGraph, "Residui", "lpe");
           legend2 -> Draw(); 
  

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

	


	PreliminaryFittingCanvas -> Update();

	//---------------------------------------------------------------------------------

	cout << "Next Enter will close the canvas" << endl;
	cin.clear(); // Clear any error flags
	cin.ignore();  // Ignore any leftover characters in the input buffer
	cin.get();     // Wait for the user to press Enter

	//pulizia delle variabili
	PreliminaryFittingCanvas -> Close();
	PreliminaryFittingCanvas -> Clear();

	return;
}
