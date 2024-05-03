/* ====================================================================
 |                                                                   |
 | Codice per calcolare lo split zeeman                              |
 |                      il fattore di lande                          | 
 |                                                                   |
 | Gli errori sono stati propagati con le formule di Doro            |
 |                                                                   |
==================================================================== */

#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <cstring>
using namespace std;

/* GLOBAL VARIABLES ================================================ */

//dati ricavati dal fit tramite root
vector<double> Centroidi_ZonaSinistra{ 3620.38, 3649.14, 3854.63, 3884.88, 4092.38, 4122.39 };
vector<double> Centroidi_ZonaCentrale{ 4333.76, 4364.31, 4578.97, 4610.55, 4828.35, 4860.13 };
vector<double> Centroidi_ZonaDestra{ 5082.01, 5114.34, 5338.72, 5371.29, 5602.02, 5635.2 };
vector<double> ErrCentroidi_ZonaSinistra{ 0.343368, 0.361956, 0.335776, 0.392435, 0.349318, 0.422918 };
vector<double> ErrCentroidi_ZonaCentrale{ 0.343979, 0.421243, 0.331332, 0.397804, 0.348617, 0.443274 };
vector<double> ErrCentroidi_ZonaDestra{ 0.367854, 0.463344, 0.311851, 0.491584, 0.347864, 0.413227 };

double CampoMagnetico = 0.24;   //[T]

vector< vector<double> > HolderCentroidi{ Centroidi_ZonaSinistra, Centroidi_ZonaCentrale, Centroidi_ZonaDestra };
vector< vector<double> > HolderErrCentroidi{ ErrCentroidi_ZonaSinistra, ErrCentroidi_ZonaCentrale, ErrCentroidi_ZonaDestra };

//fattore di conversione ricavato dall'analisi a campo spento [nm/pixel] 
double FattoreConversione = 0.000168529;
double ErrFattoreConversione = 1.25971e-06;

//vattori per contenere gli intermedi di calcolo (9 in totale e ordinate da sx a dx) px
vector<double> HolderDistanza;
vector<double> ErrHolderDistanza;

//un valore per ogni singola zona (3 in tutto)
vector<double> MediaSplitZeeman_pixel;
vector<double> ErrMediaSplitZeeman_pixel;
vector<double> MediaSplitZeeman_nm;
vector<double> ErrMediaSplitZeeman_nm;
vector<double> CompatibilitaMediaSplitZeeman_nm;

//fattore di lande
double ErrCampoMagnetico = sqrt( pow( (2*CampoMagnetico/100) ,2) + pow(0.0005,2) );   //[T]
double MuDiB = 0.0000580460;    //[ev/T]
double AccaPerC = 1240;         //[ev]
double lambda = 585.3;          //[nm]

vector<double> EnergiaSplitZeeman;
vector<double> ErrEnergiaSplitZeeman;
vector<double> FattoreLande;
vector<double> ErrFattoreLande;
vector<double> CompatibilitaLande;

//other holders
vector<double> VettoreMediePesate;
vector<double> ErrVettoreMediePesate;

/* FUNCTION DECLARATION ============================================ */

void DistanceCalculator();
void PixelMeanCalculator();
void MeanConverterPlusCompatibility();
void ZeemanEnergyCalculator();
void LandeFactorCalculatoPlusCompatibility();
void WeightedMeanCalculator( const vector<double> TheOneToMean, const vector<double> AndItsError );
void PrintThemAll();

double CompatibilityCalculator( const vector<double> &Value1, const vector<double> &Error1, const unsigned int &Index1, const vector<double> &Value2, const vector<double> &Error2, const unsigned int &Index2 );

/* ================================================================= */

bool debug_opt = false;
int main( int argN, char* argL[] ){

  if(argN > 1){
    if( strcmp(argL[1], "db") == 0 ){
      debug_opt = true;
      cout << " debug option activated " << endl;
    }
  }

  //reserve dello spazio
  HolderDistanza.reserve(9);
  ErrHolderDistanza.reserve(9);
  
  MediaSplitZeeman_pixel.reserve(3);
  ErrMediaSplitZeeman_pixel.reserve(3);
  MediaSplitZeeman_nm.reserve(3);
  ErrMediaSplitZeeman_nm.reserve(3);
  CompatibilitaMediaSplitZeeman_nm.reserve(3);
  
  EnergiaSplitZeeman.reserve(3);
  ErrEnergiaSplitZeeman.reserve(3);
  FattoreLande.reserve(3);
  ErrFattoreLande.reserve(3);
  CompatibilitaLande.reserve(3);
  
  //function calling
  DistanceCalculator();
  PixelMeanCalculator();
  MeanConverterPlusCompatibility();
  ZeemanEnergyCalculator();
  LandeFactorCalculatoPlusCompatibility();
  WeightedMeanCalculator( MediaSplitZeeman_nm, ErrMediaSplitZeeman_nm );
  WeightedMeanCalculator( FattoreLande, ErrFattoreLande ); 
  PrintThemAll();

 return 0;
}

/* CALCOLATORE DISTANZA TRA CENTROIDI ============================== */
void DistanceCalculator(){

  for(unsigned int i=0; i<HolderCentroidi.size(); i++){
  
    auto VettoreZona = HolderCentroidi.at(i);
    auto ErrVettoreZona = HolderErrCentroidi.at(i);
    
    double HolderValue = 0;
    double HolderError = 0;
    for(unsigned int k = 0; k < VettoreZona.size(); k+=2 ){
    
      HolderValue = abs( VettoreZona.at(k) - VettoreZona.at(k+1) );
      HolderError = sqrt( pow( ErrVettoreZona.at(k) ,2) + pow( ErrVettoreZona.at(k+1) ,2) );
      
      HolderDistanza.push_back( HolderValue );
      ErrHolderDistanza.push_back( HolderError );
    
      if(debug_opt){
      cout << "controllo esistenza valori delle destanze dello split zeeman" << endl;
      cout << HolderValue << endl;
      cout << HolderError << endl;
      }   
    }
  }  

 return;
}
/* CALCOLATORE MEDIA SPLIT PER ZONE (pixel) ======================== */
void PixelMeanCalculator(){

  //suppongo che questa media, come nel caso privo di campo, sia di tipo aritmetico
  
  if ( HolderDistanza.size() != ErrHolderDistanza.size() ) exit(-1);
  
  if(debug_opt) cout << "controllo sulla size per HolderDistanza: " << HolderDistanza.size() << endl;
  
  double HolderValue = 0;
  double HolderError = 0;
  
  for( unsigned int k = 0; k < HolderDistanza.size(); k+=3 ){
  
    HolderValue = (1.0/3.0)*( HolderDistanza.at(k) 
                          + HolderDistanza.at(k+1) 
                          + HolderDistanza.at(k+2) 
                        );
    HolderError = (1/sqrt(3) ) * sqrt( pow( ErrHolderDistanza.at(k) ,2) 
                                       + pow( ErrHolderDistanza.at(k+1) ,2) 
                                       + pow( ErrHolderDistanza.at(k+2) ,2) 
                                     );
    
    if(debug_opt){
      cout << "controllo esistenza valori delle medie per zona dello split zeeman" << endl;
      cout << HolderValue << endl;
      cout << HolderError << endl;
    }
  
    MediaSplitZeeman_pixel.push_back( HolderValue );
    ErrMediaSplitZeeman_pixel.push_back( HolderError );
  }

 return;
}
/* CONVERSIONE DA PIXEL A NANOMETRI ================================ */
void MeanConverterPlusCompatibility(){

  double HolderValue = 0;
  double HolderError = 0;
  double TmpErrorComponent = pow( ( ErrFattoreConversione/FattoreConversione ) ,2 );

  for( unsigned int i=0; i < MediaSplitZeeman_pixel.size() ; i++ ){
    
    HolderValue = MediaSplitZeeman_pixel.at(i) * FattoreConversione;
    MediaSplitZeeman_nm.push_back( HolderValue );
      
    HolderError = HolderValue * sqrt( pow( ( ErrMediaSplitZeeman_pixel.at(i)/MediaSplitZeeman_pixel.at(i) ) ,2 ) 
                                      + TmpErrorComponent 
                                    );
    ErrMediaSplitZeeman_nm.push_back( HolderError );  
  }
  
  //fattori di compatibilità, per semplicità sono delegati ad una funzione che prende gli indici e i vettori
  CompatibilitaMediaSplitZeeman_nm.push_back(  CompatibilityCalculator( MediaSplitZeeman_nm, ErrMediaSplitZeeman_nm, 0, MediaSplitZeeman_nm, ErrMediaSplitZeeman_nm, 1 ) 
                                            );
  CompatibilitaMediaSplitZeeman_nm.push_back(  CompatibilityCalculator( MediaSplitZeeman_nm, ErrMediaSplitZeeman_nm, 0, MediaSplitZeeman_nm, ErrMediaSplitZeeman_nm, 2 ) 
                                            );
  CompatibilitaMediaSplitZeeman_nm.push_back(  CompatibilityCalculator( MediaSplitZeeman_nm, ErrMediaSplitZeeman_nm, 1, MediaSplitZeeman_nm, ErrMediaSplitZeeman_nm, 2 ) 
                                            );

 return;
}
/* CALCOLATORE ENERGIA DI ZEEMAN ?? ================================ */
void ZeemanEnergyCalculator(){

  double CostanteMoltiplicativa = AccaPerC / pow(lambda,2);
  double HolderValue = 0;
  double HolderError = 0;

  for( unsigned int i = 0; i < MediaSplitZeeman_nm.size() ; i++ ){
  
    HolderValue = MediaSplitZeeman_nm.at(i) * CostanteMoltiplicativa;
    HolderError = HolderValue * ( ErrMediaSplitZeeman_nm.at(i) / MediaSplitZeeman_nm.at(i) );
    
    EnergiaSplitZeeman.push_back( HolderValue );
    ErrEnergiaSplitZeeman.push_back( HolderError );
  } 
  
  return;
}
/* CALCOLA I FATTORI DI LANDE E LA COMPATIBILITÀ==================== */
void LandeFactorCalculatoPlusCompatibility(){

  double HolderValue = 0;
  double HolderError = 0;
  double TmpErrorComponent = pow( ( ErrCampoMagnetico/CampoMagnetico ) ,2 );

  for( unsigned int i=0; i < EnergiaSplitZeeman.size() ; i++ ){
    
    HolderValue = EnergiaSplitZeeman.at(i) / (MuDiB*CampoMagnetico);  ///
    FattoreLande.push_back( HolderValue );
      
    HolderError = HolderValue * sqrt( pow( ( ErrEnergiaSplitZeeman.at(i)/EnergiaSplitZeeman.at(i) ) ,2 ) 
                                      + TmpErrorComponent 
                                    );
    ErrFattoreLande.push_back( HolderError );  
  }
  
  //fattori di compatibilità, per semplicità sono delegati ad una funzione che prende gli indici e i vettori
  CompatibilitaLande.push_back(  CompatibilityCalculator( FattoreLande, ErrFattoreLande, 0, FattoreLande, ErrFattoreLande, 1 ) 
                              );
  CompatibilitaLande.push_back(  CompatibilityCalculator( FattoreLande, ErrFattoreLande, 0, FattoreLande, ErrFattoreLande, 2 ) 
                              );
  CompatibilitaLande.push_back(  CompatibilityCalculator( FattoreLande, ErrFattoreLande, 1, FattoreLande, ErrFattoreLande, 2 ) 
                              );  

 return;
}
/* PRINTATORE ====================================================== */
void PrintThemAll(){

  //printing della distanza tra i picchi in pixel
  cout << "\n Valore in [pixel] dello splitting zeeman dei picchi" << endl;
  cout << " I valori sono printati in ordine e con errore" << endl;
  
  for(unsigned int i=0; i < HolderDistanza.size(); i++){
  
    if( i==0 ) cout << "\n Zona Sinistra: " << endl;
    if( i==3 ) cout << "\n Zona Centrale: " << endl;
    if( i==6 ) cout << "\n Zona Destra:   " << endl;
    
    cout << " " << HolderDistanza.at(i) << " \\pm " << ErrHolderDistanza.at(i) << endl;
  }
  
  cout << endl;
  cout << " ........................................................................................ " << endl;
  cout << endl;
  
  //printing della distanza tra i picchi mediata aritmeticamente in pixel
  
  cout << " Valori in [pixel] della media aritmetica, per zona, della" << endl;
  cout << " distanza tra i picchi dello split zeeman" << endl;
  cout << endl;
  
  cout << " Zona Sinistra: " << MediaSplitZeeman_pixel.at(0) << " \\pm " << ErrMediaSplitZeeman_pixel.at(0) << endl;
  cout << endl;
  cout << " Zona Centrale: " << MediaSplitZeeman_pixel.at(1) << " \\pm " << ErrMediaSplitZeeman_pixel.at(1) << endl;
  cout << endl;
  cout << " Zona Destra:   " << MediaSplitZeeman_pixel.at(2) << " \\pm " << ErrMediaSplitZeeman_pixel.at(2) << endl;
  
  cout << endl;
  cout << " ........................................................................................ " << endl;
  cout << endl;
  
  //printing della distanza tra i picchi convertita in nm
  
  cout << " Valori in [nm] della media aritmetica, per zona, della" << endl;
  cout << " distanza tra i picchi dello split zeeman" << endl;
  cout << endl;
  
  cout << " Zona Sinistra: " << MediaSplitZeeman_nm.at(0) << " \\pm " << ErrMediaSplitZeeman_nm.at(0) << endl;
  cout << endl;
  cout << " Zona Centrale: " << MediaSplitZeeman_nm.at(1) << " \\pm " << ErrMediaSplitZeeman_nm.at(1) << endl;
  cout << endl;
  cout << " Zona Destra:   " << MediaSplitZeeman_nm.at(2) << " \\pm " << ErrMediaSplitZeeman_nm.at(2) << endl;
  
  //compatibilità
  
  cout << "\n Matrice dei fattori di compatibilità tra le stime: " << endl;
  cout << endl;
  
  cout << "         " << "   sx    " << "   cx    "                                    << "   dx    "                            << endl;
  cout << "   sx    " << "    -    " << CompatibilitaMediaSplitZeeman_nm.at(0) << "  " << CompatibilitaMediaSplitZeeman_nm.at(1) << endl;
  cout << "   cx    " << "    -    " << "    -    "                                    << CompatibilitaMediaSplitZeeman_nm.at(2) << endl;
  cout << "   dx    " << "    -    " << "    -    "                                    << "    -    "                            << endl;
  
  cout << endl;
  cout << " ........................................................................................ " << endl;
  cout << endl;
  
  //printing energia giusto perchè non si sa mai
  
  cout << endl;
  cout << " Valori di enegia [eV], per zona, dello split zeeman" << endl;
  cout << endl;
  
  cout << " Zona Sinistra: " << EnergiaSplitZeeman.at(0) << " \\pm " << ErrEnergiaSplitZeeman.at(0) << endl;
  cout << endl;
  cout << " Zona Centrale: " << EnergiaSplitZeeman.at(1) << " \\pm " << ErrEnergiaSplitZeeman.at(1) << endl;
  cout << endl;
  cout << " Zona Destra:   " << EnergiaSplitZeeman.at(2) << " \\pm " << ErrEnergiaSplitZeeman.at(2) << endl;
  
  cout << endl;
  cout << " ........................................................................................ " << endl;
  cout << endl;

  //printing dei fattori di lande
  
  cout << " Fattori di lande divisi per zona" << endl;
  cout << endl;
  
  cout << " Zona Sinistra: " << FattoreLande.at(0) << " \\pm " << ErrFattoreLande.at(0) << endl;
  cout << endl;
  cout << " Zona Centrale: " << FattoreLande.at(1) << " \\pm " << ErrFattoreLande.at(1) << endl;
  cout << endl;
  cout << " Zona Destra:   " << FattoreLande.at(2) << " \\pm " << ErrFattoreLande.at(2) << endl;
  
  //compatibilità
  
  cout << "\n Matrice dei fattori di compatibilità tra le stime: " << endl;
  cout << endl;
  
  cout << "         " << "   sx    " << "   cx    "                      << "   dx    "              << endl;
  cout << "   sx    " << "    -    " << CompatibilitaLande.at(0) << "  " << CompatibilitaLande.at(1) << endl;
  cout << "   cx    " << "    -    " << "    -    "                      << CompatibilitaLande.at(2) << endl;
  cout << "   dx    " << "    -    " << "    -    "                      << "    -    "              << endl;
  
  cout << endl;
  cout << " ........................................................................................ " << endl;
  cout << endl;
  
  cout << "Medie pesate giusto perchè non si sa mai" << endl;
  cout << endl;
  cout << "Lambda zeeman [nm]: " << VettoreMediePesate.at(0) << " \\pm " << ErrVettoreMediePesate.at(0) << endl;
  cout << endl;
  cout << "Fattore di lande:   " << VettoreMediePesate.at(1) << " \\pm " << ErrVettoreMediePesate.at(1) << endl;
  
  cout << endl;
  cout << " ........................................................................................ " << endl;
  cout << endl;
  
  cout << " Errore campo magnetico:" << ErrCampoMagnetico << endl;
  
  cout << endl;
  cout << " ........................................................................................ " << endl;
  cout << endl;

 return;
}
/* ================================================================= */
double CompatibilityCalculator( const vector<double> &Value1, 
                                const vector<double> &Error1, 
                                const unsigned int   &Index1, 
                                const vector<double> &Value2, 
                                const vector<double> &Error2, 
                                const unsigned int   &Index2 ){

  double HolderValue = 0;
  double HolderError = 0;
  double HolderResult = 0;

  HolderValue = abs( Value1.at( Index1 ) - Value2.at( Index2 ) );
  HolderError = sqrt( pow( ( Error1.at( Index1 ) ) ,2 ) + pow( ( Error2.at( Index2 ) ) ,2 ) );
  HolderResult = HolderValue / HolderError;

 return HolderResult;
}
/* ================================================================= */
void WeightedMeanCalculator( const vector<double> TheOneToMean, const vector<double> AndItsError ){

  double k = 0;
  double Holder = 0;

  if( TheOneToMean.size() != AndItsError.size() ) exit(-1);
  
  for( unsigned int i=0; i < TheOneToMean.size(); i++){

    k += ( 1/pow( AndItsError.at(i),2 ) );
    Holder += TheOneToMean.at(i) / pow( AndItsError.at(i),2);
  }

  VettoreMediePesate.push_back( Holder/k );
  ErrVettoreMediePesate.push_back( sqrt(1/k) );

 return;
}
/* ================================================================= */
