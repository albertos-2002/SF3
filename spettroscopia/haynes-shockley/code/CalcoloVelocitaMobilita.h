/* ==================================
|                                   |
| Set 1 = distanza costante (d)     |
| Set 2 = v_spazzo costante (v)     |
|                                   |
| Non è stata fatta la parte        |
| che corregge l'errore sistematico |
|                                   |
================================== */

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
#include <TFitResultPtr.h>
#include <TFitResult.h>

#include "ExternalObjects.h"
using namespace std;

/* GLOBAL SCOPE ======================= */

size_t HowManyPrimitiveIteration_CVM = 20;

double RisoluzioneRighello = 1.0; //[mm]
double ErroreDaIpotesiTriangolare = RisoluzioneRighello / (2*sqrt(6)); //[mm] 
double LunghezzaCristallo = 30.5; //[mm]

//set 1
double DistanzaCostante = 5.0; //[mm]
double ErroreDistanzaCostante = ErroreDaIpotesiTriangolare; //[mm]
vector<double> TensioneSpazzolamento = { 20.68, 22.60, 24.57, 26.57, 28.53, 30.50, 32.56, 34.67, 36.63, 38.59, 40.63 };
vector<double> CampoElettrico; //[V/mm]
vector<double> ErroreCampoElettrico; 
vector<double> Velocita; //[mm/s]
vector<double> ErroreVelocita;

//set 2
double TensioneCostante = 45.0; //[V]
vector<double> Distanza = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22}; //[mm]
//⤴ il suo errore e quello dell'ipotesi triangolare


/* ==================================== */

void CalcoloVelocitaMobilita(){

	auto TheOnlyFansCanvas = new TCanvas( "TheOnlyFansCanvas", "TheOnlyFansCanvas", 1920, 1080 );
	TPad *pad1 = new TPad("pad1", "Pad 1", 0.0, 0.30, 1.0, 1.0); // Upper pad
	TPad *pad2 = new TPad("pad2", "Pad 2", 0.0, 0.0, 1.0, 0.30); // Lower pad
		  pad1 -> Draw();
		  pad2 -> Draw();
		  pad1 -> SetGrid();
		  pad2 -> SetGrid();
	
	if(DebugPrint) logFile << " CalcoloVelocitaMobilita: canvas & pad 1&2 set up done " << endl;
	

	CampoElettrico.reserve(11);
	ErroreCampoElettrico.reserve(11);
	Velocita.reserve(11);
	ErroreVelocita.reserve(11);

	/* MOBILITA ---------------------------------------------------------------------------------------------------------------------------------------------------- */

	/* SET 1 ---------------------------------------------------------------------------------------------------------------------------------------------------- */

	RedirectOutToFile( AnalResultsFile );

	//calcoliamo la velocita
	double VelocitaHolder = 0;
	double ErrVelocitaHolder = 0;
	double FattoreErroreDistanza = pow( ErroreDistanzaCostante/DistanzaCostante ,2);

	cout << "VELOCITA (ordered) -----------------------------------------------------" << endl;

	//usiamo un for classico in quanto necessitiamo di procedere in ordine nel printing dei dati
	for( size_t i=0; i<FileName_dconst.size(); i++ ){

		string MapKey = FileName_dconst.at(i);
		auto Salvatore = FitParameters_d.at(MapKey);

		VelocitaHolder = 0;
		VelocitaHolder = DistanzaCostante / Salvatore.MediaGauss;
		Velocita.push_back(VelocitaHolder);

		ErrVelocitaHolder = 0;
		ErrVelocitaHolder = VelocitaHolder * sqrt( pow( Salvatore.ErrorMediaGauss/Salvatore.MediaGauss ,2) + FattoreErroreDistanza );
		ErroreVelocita.push_back(ErrVelocitaHolder);

		cout << MapKey << " : " << VelocitaHolder << " \\pm " << ErrVelocitaHolder << endl;
	}
	
	//calcolo del campo elettrico
	//dove come errore sul voltaggio è stato considerato σ_v = (1/sqrt(3)) * sqrt( (0.1*div)² + (0.03*v) ) con div = 0.02 per tutte le misure (circa)
	double CampoHolder = 0;
	double ErroreCampoHolder = 0;
	double FattoreErroreCampo = pow( ErroreDaIpotesiTriangolare/LunghezzaCristallo ,2);
	double ErroreTensioneHolder = 0;

	cout << "CAMPO ELETTRICO -------------------------------------------------" << endl;
	
	for( auto Element : TensioneSpazzolamento ){
		CampoHolder = 0;
		CampoHolder = Element / LunghezzaCristallo;
		CampoElettrico.push_back(CampoHolder);

		ErroreCampoHolder = 0;
		ErroreTensioneHolder = 0;
		ErroreTensioneHolder = (1/sqrt(3))*sqrt( pow( 0.1*0.02 ,2) + pow( 0.03*Element ,2) );
		ErroreCampoHolder = CampoHolder * sqrt( pow( ErroreTensioneHolder/Element ,2) + FattoreErroreCampo );
		ErroreCampoElettrico.push_back(ErroreCampoHolder);

		cout << CampoHolder << " \\pm " << ErroreCampoHolder << " -- err tensione ->" << ErroreTensioneHolder << endl;
	}

	DeRedirectOutToFile();

	//creazione del grafico
	pad1 -> cd();

		auto GraphMobilita1 = new TGraphErrors( CampoElettrico.size(), CampoElettrico.data(), Velocita.data(), 0/*xerr*/, ErroreVelocita.data()/*yerr*/ );
			 GraphMobilita1 -> SetTitle( "Mobilità per d cost" );
	     	 GraphMobilita1 -> SetMarkerStyle(8);
	     	 GraphMobilita1 -> SetMarkerColor(kOrange+7);
	     	 GraphMobilita1 -> GetYaxis() -> SetTitle("Velocità [mm/s]");
	     	 GraphMobilita1 -> GetXaxis() -> SetTitle("Campo Elettrico [V/mm]");

	    GraphMobilita1 -> Draw("AP");
	   	//update della GUI del grafico
	   	pad1 -> Modified();
	   	pad1 -> Update();
	   	gSystem -> ProcessEvents();

	   	TF1* FitMobilita1 = new TF1("FitMobilita1", "pol1", CampoElettrico.at(0)-0.1, CampoElettrico.at( CampoElettrico.size()-1 )+0.1 );
	   		 FitMobilita1 -> SetParName(0, "q");
	   		 FitMobilita1 -> SetParName(1, "m");
	   		 FitMobilita1 -> SetLineColor(kGreen+2);
	   		 FitMobilita1 -> SetLineStyle(2); //dashed line for the fit line

		TFitResultPtr RisultatiMobilita1 = GraphMobilita1 -> Fit( FitMobilita1, "RVS" );

	   	RedirectOutToFile( AnalResultsFile );
	   		cout << endl;
	   		cout << " ``` " << endl;
	   		cout << " FIT RESULT for Mobilità Set 1 ---------------------------------------- " << endl;
	   		if( !RisultatiMobilita1->IsValid() ) cout << "puntatore ai fit results non valido" << endl;
	   		RisultatiMobilita1 -> Print("V");
//	   		GraphMobilita1 -> Fit( FitMobilita1, "RV" );
	   		cout << " ``` " << endl;
	   		cout << "---" << endl;
	   		cout << endl;
	   	DeRedirectOutToFile();

	   	FitMobilita1 -> Draw("same");

	   	auto MobilitaLegend1 = new TLegend();
	   		 MobilitaLegend1 -> AddEntry( GraphMobilita1, "data", "lpe");
	   		 MobilitaLegend1 -> AddEntry( FitMobilita1, "fit: q + mx", "lpe" );
	   		 MobilitaLegend1 -> Draw();

	   	//update della GUI del grafico
	   	pad1 -> Modified();
	   	pad1 -> Update();
	    gSystem -> ProcessEvents();	 


	//residui
	pad2 -> cd();

		auto Mobilita1ResidualGraph = new TGraphErrors();
	     	 Mobilita1ResidualGraph -> SetTitle("Residui Fit");
	     	 Mobilita1ResidualGraph -> SetMarkerStyle(8);
	     	 Mobilita1ResidualGraph -> SetMarkerSize(1);
	     	 Mobilita1ResidualGraph -> SetMarkerColor(kGreen+3);

		for (int i = 0; i < GraphMobilita1->GetN(); ++i) {
			double x, y;
			GraphMobilita1->GetPoint(i, x, y);
	  		double fittedValue = FitMobilita1->Eval(x);
	   		double residual = y - fittedValue;
	  		Mobilita1ResidualGraph -> SetPoint(i, x, residual);
	  		Mobilita1ResidualGraph -> SetPointError(i, 0, GraphMobilita1->GetErrorY(i)); // Assuming no error in x-direction, only y-direction	
    	}

		Mobilita1ResidualGraph -> Draw("AP");

		auto Mobilita1Legend2 = new TLegend();
         	 Mobilita1Legend2 -> AddEntry(Mobilita1ResidualGraph, "Residui", "lpe");
         	 Mobilita1Legend2 -> Draw(); 

  		//linea sullo zero per i residui
  		double Mobilita1xmin = CampoElettrico.at(0);	                    //pad2 -> GetUxmin();
  		double Mobilita1xmax = CampoElettrico.at( CampoElettrico.size()-1);	//pad2 -> GetUxmax();
  		TLine* MobilitaLine1 = new TLine(Mobilita1xmin, 0, Mobilita1xmax, 0);
  	       	   MobilitaLine1 -> SetLineColor(kViolet-3); 
  	           MobilitaLine1 -> SetLineStyle(9);    
  	           MobilitaLine1 -> SetLineWidth(1);
  	           MobilitaLine1 -> Draw();

    //update della GUI del grafico
 	pad1 -> Modified();
	pad1 -> Update();
	pad2 -> Modified();
	pad2 -> Update();
	gSystem -> ProcessEvents();
	

	cout << " Hai a disposizione " << HowManyPrimitiveIteration_CVM <<  " azioni per modificare la canvas prima del continue " << endl;
	for(size_t i=0; i<HowManyPrimitiveIteration_CVM; i++){
	  	TheOnlyFansCanvas -> WaitPrimitive();
	    cout << "Iterazioni restanti " << HowManyPrimitiveIteration_CVM-1-i << endl;
	}

	//salvataggio del grafico modificato
    if(SaveThaGraph){
    	string SaveNameGraph = PathToSaveGraph + "finali/Mobilita1.png";
     	TheOnlyFansCanvas -> SaveAs( SaveNameGraph.c_str() );
        cout << " file saved succesfully " << endl;
    }

	cout << "Next Enter will go to next iteration" << endl;
	cin.clear(); // Clear any error flags
	cin.ignore();  // Ignore any leftover characters in the input buffer
	cin.get();     // Wait for the user to press Enter

	//pulizia oggetti
	pad1 -> Clear();
	pad2 -> Clear();


	/* SET 2 ---------------------------------------------------------------------------------------------------------------------------------------------------- */

	vector<double> TempiHolder;
	TempiHolder.reserve(20);

	for( size_t i=0; i<FileName_vconst.size(); i++ ){
		string MapKey = FileName_vconst.at(i);
		auto Salvatore = FitParameters_v.at(MapKey);
		TempiHolder.push_back(Salvatore.MediaGauss);
		cout << Salvatore.MediaGauss << endl;
	}

	vector<double> MoltiplicatoreErroreDistanza(TempiHolder.size(), ErroreDaIpotesiTriangolare);

	//creazione del grafico
	pad1 -> cd();

		auto GraphMobilita2 = new TGraphErrors( TempiHolder.size(), TempiHolder.data(), Distanza.data(), 0/*xerr*/, MoltiplicatoreErroreDistanza.data()/*yerr*/ );
			 GraphMobilita2 -> SetTitle( "Mobilità per v cost" );
	     	 GraphMobilita2 -> SetMarkerStyle(8);
	     	 GraphMobilita2 -> SetMarkerColor(kOrange+7);
	     	 GraphMobilita2 -> GetYaxis() -> SetTitle("Distanza [mm]");
	     	 GraphMobilita2 -> GetXaxis() -> SetTitle("Tempo [s]");

	    GraphMobilita2 -> Draw("AP");
	   	//update della GUI del grafico
	   	pad1 -> Modified();
	   	pad1 -> Update();
	   	gSystem -> ProcessEvents();

	   	TF1* FitMobilita2 = new TF1("FitMobilita2", "pol1", TempiHolder.at(0)-2e-7, TempiHolder.at( TempiHolder.size()-1 )+2e-7 );
	   		 FitMobilita2 -> SetParName(0, "q");
	   		 FitMobilita2 -> SetParName(1, "m");
	   		 FitMobilita2 -> SetLineColor(kGreen+2);
	   		 FitMobilita2 -> SetLineStyle(2); //dashed line for the fit line

		TFitResultPtr RisultatiMobilita2 = GraphMobilita2 -> Fit( FitMobilita2, "RVS" );

	   	RedirectOutToFile( AnalResultsFile );
	   		cout << endl;
	   		cout << " ``` " << endl;
	   		cout << " FIT RESULT for Mobilità Set 2 ---------------------------------------- " << endl;
	   		if( !RisultatiMobilita2->IsValid() ) cout << "puntatore ai fit results non valido" << endl;
	   		RisultatiMobilita2 -> Print("V");
//	   		GraphMobilita2 -> Fit( FitMobilita2, "RV" );
	   		cout << " ``` " << endl;
	   		cout << "---" << endl;
	   		cout << endl;
	   	DeRedirectOutToFile();
	   	
	   	FitMobilita2 -> Draw("same");

	   	auto MobilitaLegend2 = new TLegend();
	   		 MobilitaLegend2 -> AddEntry( GraphMobilita2, "data", "lpe");
	   		 MobilitaLegend2 -> AddEntry( FitMobilita2, "fit: q + mx", "lpe" );
	   		 MobilitaLegend2 -> Draw();

	   	//update della GUI del grafico
	   	pad1 -> Modified();
	   	pad1 -> Update();
	    gSystem -> ProcessEvents();	 

	//residui
	pad2 -> cd();

		auto Mobilita2ResidualGraph = new TGraphErrors();
	     	 Mobilita2ResidualGraph -> SetTitle("Residui Fit");
	     	 Mobilita2ResidualGraph -> SetMarkerStyle(8);
	     	 Mobilita2ResidualGraph -> SetMarkerSize(1);
	     	 Mobilita2ResidualGraph -> SetMarkerColor(kGreen+3);

		for (int i = 0; i < GraphMobilita2->GetN(); ++i) {
			double x, y;
			GraphMobilita2->GetPoint(i, x, y);
	  		double fittedValue = FitMobilita2->Eval(x);
	   		double residual = y - fittedValue;
	  		Mobilita2ResidualGraph -> SetPoint(i, x, residual);
	  		Mobilita2ResidualGraph -> SetPointError(i, 0, GraphMobilita2->GetErrorY(i)); // Assuming no error in x-direction, only y-direction	
    	}

		Mobilita2ResidualGraph -> Draw("AP");

		auto Mobilita2Legend2 = new TLegend();
         	 Mobilita2Legend2 -> AddEntry(Mobilita2ResidualGraph, "Residui", "lpe");
         	 Mobilita2Legend2 -> Draw(); 

  		//linea sullo zero per i residui
  		double Mobilita2xmin = TempiHolder.at(0);						//pad2 -> GetUxmin();
  		double Mobilita2xmax = TempiHolder.at( TempiHolder.size()-1 );	//pad2 -> GetUxmax();
  		TLine* MobilitaLine2 = new TLine(Mobilita2xmin, 0, Mobilita2xmax, 0);
  	       	   MobilitaLine2 -> SetLineColor(kViolet-3); 
  	           MobilitaLine2 -> SetLineStyle(9);    
  	           MobilitaLine2 -> SetLineWidth(1);
  	           MobilitaLine2 -> Draw();

    //update della GUI del grafico
 	pad1 -> Modified();
	pad1 -> Update();
	pad2 -> Modified();
	pad2 -> Update();
	gSystem -> ProcessEvents();


	cout << " Hai a disposizione " << HowManyPrimitiveIteration_CVM <<  " azioni per modificare la canvas prima del continue " << endl;
	for(size_t i=0; i<HowManyPrimitiveIteration_CVM; i++){
	  	TheOnlyFansCanvas -> WaitPrimitive();
	    cout << "Iterazioni restanti " << HowManyPrimitiveIteration_CVM-1-i << endl;
	}

	//salvataggio del grafico modificato
    if(SaveThaGraph){
    	string SaveNameGraph = PathToSaveGraph + "finali/Mobilita2.png";
     	TheOnlyFansCanvas -> SaveAs( SaveNameGraph.c_str() );
        cout << " file saved succesfully " << endl;
    }

	cout << "Next Enter will go to next iteration" << endl;
	cin.clear(); // Clear any error flags
	cin.ignore();  // Ignore any leftover characters in the input buffer
	cin.get();     // Wait for the user to press Enter

	//pulizia oggetti
	pad1 -> Clear();
	pad2 -> Clear();


	/* COEFFICIENTE DI DIFFUSIONE | SET 1 ----------------------------------------------------------------------------------------------------------------------- */	

	//facciamo un fit lineare quindi in x i tempi saranno al cubo
	vector<double> VettoreOrdinato;
	vector<double> VettoreAscissato;
	vector<double> ErroreOrdinato;
	double ConstForFWHM = 2 * sqrt( 2*log(2) );

	VettoreAscissato.reserve(11);
	VettoreOrdinato.reserve(11);
	ErroreOrdinato.reserve(11);

	RedirectOutToFile( AnalResultsFile );

	cout << " ORDINATA CON ERRORE ----------------------------------------------------------------- " << endl;

	for( size_t i=0; i<FileName_dconst.size(); i++ ){
	
		string MapKey = FileName_dconst.at(i);
		auto Salvatore = FitParameters_d.at(MapKey);

		VettoreAscissato.push_back( pow( Salvatore.MediaGauss, 3) );
		
		double fwhm = ConstForFWHM * Salvatore.SigmaGauss;
		double d_fwhm = DistanzaCostante * fwhm;
		double ordinata = pow( d_fwhm ,2) /11.09;
		VettoreOrdinato.push_back( ordinata );

		double sigma_FWHM = ConstForFWHM*Salvatore.ErrorSigmaGauss;
		double sigma_d_fwhm = d_fwhm*sqrt( FattoreErroreDistanza + pow( sigma_FWHM/fwhm ,2) );
		double sigma_ordinata = ordinata*2*sigma_d_fwhm;
		ErroreOrdinato.push_back(sigma_ordinata);

		cout << ordinata << " \\pm " << sigma_ordinata << endl;
	}

	DeRedirectOutToFile();

	
	//creazione del grafico
	pad1 -> cd();

		auto GraphDiffusione = new TGraphErrors( VettoreAscissato.size(), VettoreAscissato.data(), VettoreOrdinato.data(), 0/*xerr*/, ErroreOrdinato.data()/*yerr*/ );
			 GraphDiffusione -> SetTitle( "Coefficiente di diffusione (d const)" );
	     	 GraphDiffusione -> SetMarkerStyle(8);
	     	 GraphDiffusione -> SetMarkerColor(kOrange+7);
	     	 GraphDiffusione -> GetYaxis() -> SetTitle("Distanza [mm]^2");
	     	 GraphDiffusione -> GetXaxis() -> SetTitle("Tempo [s]^3");

	    GraphDiffusione -> Draw("AP");
	   	//update della GUI del grafico
	   	pad1 -> Modified();
	   	pad1 -> Update();
	   	gSystem -> ProcessEvents();

	   	TF1* FitDiffusione = new TF1("FitDiffusione", "pol1", VettoreAscissato.at(0), VettoreAscissato.at( VettoreAscissato.size()-1 ) );
	   		 FitDiffusione -> SetParName(0, "q");
	   		 FitDiffusione -> SetParName(1, "m");
	   		 FitDiffusione -> SetLineColor(kGreen+2);
	   		 FitDiffusione -> SetLineStyle(2); //dashed line for the fit line	   		 

		TFitResultPtr RisultatiDiffusione = GraphDiffusione -> Fit( FitDiffusione, "RVS" );

	   	RedirectOutToFile( AnalResultsFile );
	   		cout << endl;
	   		cout << " ``` " << endl;
	   		cout << " FIT RESULT for Diffusione Set 1--------------------------------------- " << endl;
	   		if( !RisultatiDiffusione->IsValid() ) cout << "puntatore ai fit results non valido" << endl;
	   		RisultatiDiffusione -> Print("V");
//	   		GraphDiffusione -> Fit( FitDiffusione, "RV" );
	   		cout << " ``` " << endl;
	   		cout << "---" << endl;
	   		cout << endl;
	   	DeRedirectOutToFile();

	   	FitDiffusione -> Draw("same");

	   	auto DiffusioneLegend = new TLegend();
	   		 DiffusioneLegend -> AddEntry( GraphDiffusione, "data", "lpe");
	   		 DiffusioneLegend -> AddEntry( FitDiffusione, "fit: q + mx", "lpe" );
	   		 DiffusioneLegend -> Draw();

	   	//update della GUI del grafico
	   	pad1 -> Modified();
	   	pad1 -> Update();
	    gSystem -> ProcessEvents();	 

	//residui
	pad2 -> cd();

		auto DiffusioneResidualGraph = new TGraphErrors();
	     	 DiffusioneResidualGraph -> SetTitle("Residui Fit");
	     	 DiffusioneResidualGraph -> SetMarkerStyle(8);
	     	 DiffusioneResidualGraph -> SetMarkerSize(1);
	     	 DiffusioneResidualGraph -> SetMarkerColor(kGreen+3);

		for (int i = 0; i < GraphDiffusione->GetN(); ++i) {
			double x, y;
			GraphDiffusione->GetPoint(i, x, y);
	  		double fittedValue = FitDiffusione->Eval(x);
	   		double residual = y - fittedValue;
	  		DiffusioneResidualGraph -> SetPoint(i, x, residual);
	  		DiffusioneResidualGraph -> SetPointError(i, 0, GraphDiffusione->GetErrorY(i)); // Assuming no error in x-direction, only y-direction	
    	}

		DiffusioneResidualGraph -> Draw("AP");

		auto DiffusioneLegend2 = new TLegend();
         	 DiffusioneLegend2 -> AddEntry(DiffusioneResidualGraph, "Residui", "lpe");
         	 DiffusioneLegend2 -> Draw(); 

  		//linea sullo zero per i residui
  		double DiffusioneXmin = VettoreAscissato.at(0);								//pad2 -> GetUxmin();
  		double DiffusioneXmax = VettoreAscissato.at( VettoreAscissato.size()-1 );	//pad2 -> GetUxmax();
  		TLine* DiffusioneLine = new TLine(DiffusioneXmin, 0, DiffusioneXmax, 0);
  	       	   DiffusioneLine -> SetLineColor(kViolet-3); 
  	           DiffusioneLine -> SetLineStyle(9);    
  	           DiffusioneLine -> SetLineWidth(1);
  	           DiffusioneLine -> Draw();

    //update della GUI del grafico
 	pad1 -> Modified();
	pad1 -> Update();
	pad2 -> Modified();
	pad2 -> Update();
	gSystem -> ProcessEvents();


	cout << " Hai a disposizione " << HowManyPrimitiveIteration_CVM <<  " azioni per modificare la canvas prima del continue " << endl;
	for(size_t i=0; i<HowManyPrimitiveIteration_CVM; i++){
	  	TheOnlyFansCanvas -> WaitPrimitive();
	    cout << "Iterazioni restanti " << HowManyPrimitiveIteration_CVM-1-i << endl;
	}

	//salvataggio del grafico modificato
    if(SaveThaGraph){
    	string SaveNameGraph = PathToSaveGraph + "finali/Diffusione.png";
     	TheOnlyFansCanvas -> SaveAs( SaveNameGraph.c_str() );
        cout << " file saved succesfully " << endl;
    }

	cout << "Next Enter will go to next iteration" << endl;
	cin.clear(); // Clear any error flags
	cin.ignore();  // Ignore any leftover characters in the input buffer
	cin.get();     // Wait for the user to press Enter

	//pulizia oggetti
	pad1 -> Clear();
	pad2 -> Clear();

	 
	/* TEMPO DI VITA MEDIO | SET 2 ------------------------------------------------------------------------------------------------------------ */

	vector<double> TimeHolder;
	vector<double> AreaHolder;
	vector<double> LNAreaHolder;

	TimeHolder.reserve(20);
	AreaHolder.reserve(20);
	LNAreaHolder.reserve(20);

	RedirectOutToFile( AnalResultsFile );
	
	cout << " AREA | ln(AREA) --------------------------------------------------------------- " << endl;

	for(auto index : FileName_vconst){
		
		auto& Salvatore = FitParameters_v.at(index);

		TimeHolder.push_back( Salvatore.MediaGauss );
		AreaHolder.push_back( Salvatore.AreaUnderTheCurve);
		LNAreaHolder.push_back( log( Salvatore.AreaUnderTheCurve ) );

		cout << index << endl;
		cout << Salvatore.AreaUnderTheCurve << " | " << log( Salvatore.AreaUnderTheCurve ) << endl;
	}

	DeRedirectOutToFile();

	//creazione del grafico
	pad1 -> cd();

		auto GraphTVM = new TGraphErrors( TimeHolder.size(), TimeHolder.data(), LNAreaHolder.data(), 0/*xerr*/, 0/*yerr*/ );
			 GraphTVM -> SetTitle( "Tempo di vita medio (v const)" );
	     	 GraphTVM -> SetMarkerStyle(8);
	     	 GraphTVM -> SetMarkerColor(kOrange+7);
	     	 GraphTVM -> GetYaxis() -> SetTitle("ln(Area)");
	     	 GraphTVM -> GetXaxis() -> SetTitle("Tempo [s]");

	    GraphTVM -> Draw("AP");
	   	//update della GUI del grafico
	   	pad1 -> Modified();
	   	pad1 -> Update();
	   	gSystem -> ProcessEvents();

	   	TF1* FitTVM = new TF1("FitTVM", "pol1", TimeHolder.at(0), TimeHolder.at( TimeHolder.size()-1 ) );
	   		 FitTVM -> SetParName(0, "q");
	   		 FitTVM -> SetParName(1, "m");
	   		 FitTVM -> SetLineColor(kGreen+2);
	   		 FitTVM -> SetLineStyle(2); //dashed line for the fit line	   		 

		TFitResultPtr RisultatiTVM = GraphTVM -> Fit( FitTVM, "RVS" );

	   	RedirectOutToFile( AnalResultsFile );
	   		cout << endl;
	   		cout << " ``` " << endl;
	   		cout << " FIT RESULT for Tempo di vita medio Set 2 --------------------------------------- " << endl;
	   		if( !RisultatiTVM->IsValid() ) cout << "puntatore ai fit results non valido" << endl;
	   		RisultatiTVM -> Print("V");
//	   		GraphTVM -> Fit( FitTVM, "RV" );
	   		cout << " ``` " << endl;
	   		cout << " il tao e 1/m " << endl;
	   		cout << "---" << endl;
	   		cout << endl;
	   	DeRedirectOutToFile();

	   	FitTVM -> Draw("same");

	   	auto TVMLegend = new TLegend();
	   		 TVMLegend -> AddEntry( GraphTVM, "data", "lpe");
	   		 TVMLegend -> AddEntry( FitTVM, "fit: q + mx", "lpe" );
	   		 TVMLegend -> Draw();

	   	//update della GUI del grafico
	   	pad1 -> Modified();
	   	pad1 -> Update();
	    gSystem -> ProcessEvents();	 

	//residui
	pad2 -> cd();

		auto TVMResidualGraph = new TGraphErrors();
	     	 TVMResidualGraph -> SetTitle("Residui Fit");
	     	 TVMResidualGraph -> SetMarkerStyle(8);
	     	 TVMResidualGraph -> SetMarkerSize(1);
	     	 TVMResidualGraph -> SetMarkerColor(kGreen+3);

		for (int i = 0; i < GraphTVM->GetN(); ++i) {
			double x, y;
			GraphTVM->GetPoint(i, x, y);
	  		double fittedValue = FitTVM->Eval(x);
	   		double residual = y - fittedValue;
	  		TVMResidualGraph -> SetPoint(i, x, residual);
//	  		TVMResidualGraph -> SetPointError(i, 0, GraphTVM->GetErrorY(i)); // Assuming no error in x-direction, only y-direction	
    	}

		TVMResidualGraph -> Draw("AP");

		auto TVMLegend2 = new TLegend();
         	 TVMLegend2 -> AddEntry(TVMResidualGraph, "Residui", "lpe");
         	 TVMLegend2 -> Draw(); 

  		//linea sullo zero per i residui
  		double TVMXmin = TimeHolder.at(0);						//pad2 -> GetUxmin();
  		double TVMXmax = TimeHolder.at( TimeHolder.size()-1 );	//pad2 -> GetUxmax();
  		TLine* TVMLine = new TLine(TVMXmin, 0, TVMXmax, 0);
  	       	   TVMLine -> SetLineColor(kViolet-3); 
  	           TVMLine -> SetLineStyle(9);    
  	           TVMLine -> SetLineWidth(1);
  	           TVMLine -> Draw();

    //update della GUI del grafico
 	pad1 -> Modified();
	pad1 -> Update();
	pad2 -> Modified();
	pad2 -> Update();
	gSystem -> ProcessEvents();


	cout << " Hai a disposizione " << HowManyPrimitiveIteration_CVM <<  " azioni per modificare la canvas prima del continue " << endl;
	for(size_t i=0; i<HowManyPrimitiveIteration_CVM; i++){
	  	TheOnlyFansCanvas -> WaitPrimitive();
	    cout << "Iterazioni restanti " << HowManyPrimitiveIteration_CVM-1-i << endl;
	}

	//salvataggio del grafico modificato
    if(SaveThaGraph){
    	string SaveNameGraph = PathToSaveGraph + "finali/TempoVitaMedio.png";
     	TheOnlyFansCanvas -> SaveAs( SaveNameGraph.c_str() );
        cout << " file saved succesfully " << endl;
    }

	cout << "Next Enter will go to next iteration" << endl;
	cin.clear(); // Clear any error flags
	cin.ignore();  // Ignore any leftover characters in the input buffer
	cin.get();     // Wait for the user to press Enter

	//pulizia oggetti
	pad1 -> Clear();
	pad2 -> Clear();	

	TheOnlyFansCanvas -> Close();

	return;
}
