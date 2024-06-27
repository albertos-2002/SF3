/* Non è stata considerata la covarianza */

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

/* Global variable definition */
vector<double> MeanHolder;
vector<double> EMeanHolder;
vector<double> Compatibility;
double FinalMean;
double EFinalMean;
double lambda = 585.3; //nm
double ConversionFactor = (lambda*lambda)/(2*4040000); //nm
double TheRealConversionFactor;
double ETheRealConversionFactor;
vector<double> Resolution;
vector<double> EResolution;
double FinalResolution;
double EFinalResolution;
vector<double> RCompatibility;
vector<double> DistanzeNM;

vector<double> FWHMHolder;
vector<double> ErrFWHMHolder;
vector<double> TheRealResolution;
vector<double> ErrTheRealResolution;


/* Hard coded values (fit results) */

double c1sx = 3879.18, c2sx = 4117.65, c3sx = 4359.83;
double Ec1sx = 0.0707239, Ec2sx = 0.109531, Ec3sx = 0.0671669;
double s1sx = 18.69,
       s2sx = 19.3448,
       s3sx = 19.2034;
double Es1sx = 0.122921,
       Es2sx = 0.188266,
       Es3sx = 0.12032;
       
double c1cx = 4605.6, c2cx = 4855.34, c3cx = 5109.5;
double Ec1cx = 0.127313, Ec2cx = 0.0993444, Ec3cx = 0.0612584;
double s1cx = 20.3284,
       s2cx = 20.3696,
       s3cx = 19.8276;
double Es1cx = 0.206466,
       Es2cx = 0.153422,
       Es3cx = 0.112936;

double c1dx = 5367.82, c2dx = 5630.81, c3dx = 5898.61;
double Ec1dx = 0.159843, Ec2dx = 0.0763267, Ec3dx = 0.0716108; 
double s1dx = 21.5938,
       s2dx = 20.5895,
       s3dx = 20.4032;
double Es1dx = 0.248684,
       Es2dx = 0.145794,
       Es3dx = 0.133533;
       

void DistanceCalculator(double (&arr)[4], const double var1, const double var2, const double var3, const double err1, const double err2, const double err3){
  
    arr[1] = abs( var2-var1 );
    arr[2] = sqrt( pow(err1,2) + pow(err2,2) );
    arr[3] = abs( var3-var2 );
    arr[4] = sqrt( pow(err2,2) + pow(err3,2) );

    return;
}

void MeanCalculator( double (&arr)[4] ){

  double k;
  double error;
  double value;
  
  //k = ( 1/(pow(arr[2],2) ) ) + ( 1/(pow(arr[4],2) ) );
  //error = sqrt(1/k);
  //value = (1/k)*( arr[1]  / (pow(arr[2],2)  ) + ( arr[3] / (pow(arr[4],2) ) ) );
  
  value = ( arr[1] + arr[3] ) / 2;
  error = (1/(sqrt(2) ) )*sqrt( pow(arr[2],2) + pow(arr[4],2) );
  
  MeanHolder.push_back(value);
  EMeanHolder.push_back(error);
  
  return;

}

void ConverterCalculator(){

  double k = 0;
  for(auto c : EMeanHolder){
    k += (1/ ( pow(c,2) ) );
  }

  double dummy = 0;
  for(int i=0; i< MeanHolder.size(); i++){
    dummy += MeanHolder.at(i) / ( pow(EMeanHolder.at(i),2 ) );
  }

  FinalMean = (1/k)*dummy; 
  EFinalMean = sqrt( 1/k ); 
  
  Compatibility.push_back( ( abs( MeanHolder.at(0)-MeanHolder.at(1) ) ) / sqrt( pow( EMeanHolder.at(0) ,2) + pow( EMeanHolder.at(1) ,2) ) );
  Compatibility.push_back( ( abs( MeanHolder.at(1)-MeanHolder.at(2) ) ) / sqrt( pow( EMeanHolder.at(1) ,2) + pow( EMeanHolder.at(2) ,2) ) );
  Compatibility.push_back( ( abs( MeanHolder.at(0)-MeanHolder.at(2) ) ) / sqrt( pow( EMeanHolder.at(0) ,2) + pow( EMeanHolder.at(2) ,2) ) );

}

void ResolutionCalcolator( double (&arr)[4] ){

  double val1 = TheRealConversionFactor*arr[1];
  Resolution.push_back( lambda/val1 );
  double Eval1 = (lambda/val1)*sqrt( pow( (ETheRealConversionFactor/TheRealConversionFactor) ,2)+pow( (arr[2]/arr[1]) ,2) );
  EResolution.push_back( Eval1 );
  DistanzeNM.push_back(val1);
  
  double val2 = TheRealConversionFactor*arr[3];
  Resolution.push_back( lambda/val2 );
  double Eval2 = (lambda/val2)*sqrt( pow( (ETheRealConversionFactor/TheRealConversionFactor) ,2)+pow( (arr[4]/arr[3]) ,2) );
  EResolution.push_back( Eval2 );
  DistanzeNM.push_back(val2);

}

void TheRealResolutionCalculator(){

  double CostanteMoltiplicativaFWHM = 2*sqrt( 2*log(2) );

  FWHMHolder.push_back( CostanteMoltiplicativaFWHM*s1sx*TheRealConversionFactor );
  FWHMHolder.push_back( CostanteMoltiplicativaFWHM*s2sx*TheRealConversionFactor );
  FWHMHolder.push_back( CostanteMoltiplicativaFWHM*s3sx*TheRealConversionFactor );
  FWHMHolder.push_back( CostanteMoltiplicativaFWHM*s1cx*TheRealConversionFactor );
  FWHMHolder.push_back( CostanteMoltiplicativaFWHM*s2cx*TheRealConversionFactor );
  FWHMHolder.push_back( CostanteMoltiplicativaFWHM*s3cx*TheRealConversionFactor );
  FWHMHolder.push_back( CostanteMoltiplicativaFWHM*s1dx*TheRealConversionFactor );
  FWHMHolder.push_back( CostanteMoltiplicativaFWHM*s2dx*TheRealConversionFactor );
  FWHMHolder.push_back( CostanteMoltiplicativaFWHM*s3dx*TheRealConversionFactor );

  //trascurando errore su conversione 
  ErrFWHMHolder.push_back( CostanteMoltiplicativaFWHM*Es1sx*TheRealConversionFactor );
  ErrFWHMHolder.push_back( CostanteMoltiplicativaFWHM*Es2sx*TheRealConversionFactor );
  ErrFWHMHolder.push_back( CostanteMoltiplicativaFWHM*Es3sx*TheRealConversionFactor );
  ErrFWHMHolder.push_back( CostanteMoltiplicativaFWHM*Es1cx*TheRealConversionFactor );
  ErrFWHMHolder.push_back( CostanteMoltiplicativaFWHM*Es2cx*TheRealConversionFactor );
  ErrFWHMHolder.push_back( CostanteMoltiplicativaFWHM*Es3cx*TheRealConversionFactor );
  ErrFWHMHolder.push_back( CostanteMoltiplicativaFWHM*Es1dx*TheRealConversionFactor );
  ErrFWHMHolder.push_back( CostanteMoltiplicativaFWHM*Es2dx*TheRealConversionFactor );
  ErrFWHMHolder.push_back( CostanteMoltiplicativaFWHM*Es3dx*TheRealConversionFactor );

  for( auto element : FWHMHolder ){
    TheRealResolution.push_back( lambda / element );
  }
  for( size_t i=0; i<TheRealResolution.size(); i++){
    ErrTheRealResolution.push_back( TheRealResolution.at(i)*ErrFWHMHolder.at(i)/FWHMHolder.at(i) );
  }
  
}

void MeanResolutionCalculator(){

  double k = 0;
  for(auto c : EResolution){
    k += (1/ ( pow(c,2) ) );
  }

  double dummy = 0;
  for(int i=0; i< Resolution.size(); i++){
    dummy += Resolution.at(i) / ( pow(EResolution.at(i),2 ) );
  }

  FinalResolution = (1/k)*dummy; 
  EFinalResolution = sqrt( 1/k ); 
  
  RCompatibility.push_back( ( abs( Resolution.at(0)-Resolution.at(1) ) ) / sqrt( pow( EResolution.at(0) ,2) + pow( EResolution.at(1) ,2) ) );
  RCompatibility.push_back( ( abs( Resolution.at(0)-Resolution.at(2) ) ) / sqrt( pow( EResolution.at(0) ,2) + pow( EResolution.at(2) ,2) ) );
  RCompatibility.push_back( ( abs( Resolution.at(0)-Resolution.at(3) ) ) / sqrt( pow( EResolution.at(0) ,2) + pow( EResolution.at(3) ,2) ) );
  RCompatibility.push_back( ( abs( Resolution.at(0)-Resolution.at(4) ) ) / sqrt( pow( EResolution.at(0) ,2) + pow( EResolution.at(4) ,2) ) );
  RCompatibility.push_back( ( abs( Resolution.at(0)-Resolution.at(5) ) ) / sqrt( pow( EResolution.at(0) ,2) + pow( EResolution.at(5) ,2) ) );
  
  RCompatibility.push_back( ( abs( Resolution.at(1)-Resolution.at(2) ) ) / sqrt( pow( EResolution.at(1) ,2) + pow( EResolution.at(2) ,2) ) );
  RCompatibility.push_back( ( abs( Resolution.at(1)-Resolution.at(3) ) ) / sqrt( pow( EResolution.at(1) ,2) + pow( EResolution.at(3) ,2) ) );
  RCompatibility.push_back( ( abs( Resolution.at(1)-Resolution.at(4) ) ) / sqrt( pow( EResolution.at(1) ,2) + pow( EResolution.at(4) ,2) ) );
  RCompatibility.push_back( ( abs( Resolution.at(1)-Resolution.at(5) ) ) / sqrt( pow( EResolution.at(1) ,2) + pow( EResolution.at(5) ,2) ) );
  
  RCompatibility.push_back( ( abs( Resolution.at(2)-Resolution.at(3) ) ) / sqrt( pow( EResolution.at(2) ,2) + pow( EResolution.at(3) ,2) ) );
  RCompatibility.push_back( ( abs( Resolution.at(2)-Resolution.at(4) ) ) / sqrt( pow( EResolution.at(2) ,2) + pow( EResolution.at(4) ,2) ) );
  RCompatibility.push_back( ( abs( Resolution.at(2)-Resolution.at(5) ) ) / sqrt( pow( EResolution.at(2) ,2) + pow( EResolution.at(5) ,2) ) );
  
  RCompatibility.push_back( ( abs( Resolution.at(3)-Resolution.at(4) ) ) / sqrt( pow( EResolution.at(3) ,2) + pow( EResolution.at(4) ,2) ) );
  RCompatibility.push_back( ( abs( Resolution.at(3)-Resolution.at(5) ) ) / sqrt( pow( EResolution.at(3) ,2) + pow( EResolution.at(5) ,2) ) );
  
  RCompatibility.push_back( ( abs( Resolution.at(4)-Resolution.at(5) ) ) / sqrt( pow( EResolution.at(4) ,2) + pow( EResolution.at(5) ,2) ) );

}

/*------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

int main(){

  MeanHolder.reserve(3);
  EMeanHolder.reserve(3);
  Compatibility.reserve(3);
  Resolution.reserve(6);
  EResolution.reserve(6);
  RCompatibility.reserve(15);
  DistanzeNM.reserve(6);
  
  double zona_sinistra[4];
  double zona_centrale[4];
  double zona_destra[4];
  
  DistanceCalculator( zona_sinistra, c1sx, c2sx, c3sx, Ec1sx, Ec2sx, Ec3sx );
  DistanceCalculator( zona_centrale, c1cx, c2cx, c3cx, Ec1cx, Ec2cx, Ec3cx );
  DistanceCalculator( zona_destra, c1dx, c2dx, c3dx, Ec1dx, Ec2dx, Ec3dx );
  
  MeanCalculator(zona_sinistra);
  MeanCalculator(zona_centrale);
  MeanCalculator(zona_destra);
  
  ConverterCalculator();
  
  cout << " Zona sinistra results: \n" << endl;
  cout << " Distanze: " << zona_sinistra[1] << " \\pm " << zona_sinistra[2] << endl;
  cout << "           " << zona_sinistra[3] << " \\pm " << zona_sinistra[4] << endl;
  cout << " Media distanze: " << MeanHolder.at(0) << " \\pm " << EMeanHolder.at(0) << endl;
  
  cout << "\n Zona centrale results: \n" << endl;
  cout << " Distanze: " << zona_centrale[1] << " \\pm " << zona_centrale[2] << endl;
  cout << "           " << zona_centrale[3] << " \\pm " << zona_centrale[4] << endl;
  cout << " Media distanze: " << MeanHolder.at(1) << " \\pm " << EMeanHolder.at(1) << endl;
  
  cout << "\n Zona destra results: \n" << endl;
  cout << " Distanze: " << zona_destra[1] << " \\pm " << zona_destra[2] << endl;
  cout << "           " << zona_destra[3] << " \\pm " << zona_destra[4] << endl;
  cout << " Media distanze: " << MeanHolder.at(2) << " \\pm " << EMeanHolder.at(2) << endl;
  
  cout << "\n Compatibilità tra le zone: " << endl;
  cout << " sx-cx: " << Compatibility.at(0) << endl;
  cout << " cx-dx: " << Compatibility.at(1) << endl;
  cout << " sx-dx: " << Compatibility.at(2) << endl;
  
  cout << "\n Media delle medie: " << FinalMean << " \\pm " << EFinalMean << "\n" << endl;
  
  TheRealConversionFactor = (ConversionFactor/FinalMean);
  ETheRealConversionFactor = ( EFinalMean / (FinalMean*FinalMean) );
  
  cout << " ------------------------------------------------------------------------------------------- " << endl;
  
  cout << "\n Fattore di conversione: (" << TheRealConversionFactor << " \\pm " << ETheRealConversionFactor << ") nm / pixel " << endl;
  
  ResolutionCalcolator(zona_sinistra);
  ResolutionCalcolator(zona_centrale);
  ResolutionCalcolator(zona_destra);
  
  cout << " ------------------------------------------------------------------------------------------- " << endl;
  
  cout << "\n Risoluzioni SBAGLIATE (qualsiasi cosa siano): \n" << endl;
  cout << " zona sinistra: " << endl;
  cout << " (1)            " << Resolution.at(0) << " \\pm " << EResolution.at(0) << " nm " << endl;
  cout << " (2)            " << Resolution.at(1) << " \\pm " << EResolution.at(1) << " nm " <<  endl;
  cout << " zona centrale: " << endl;
  cout << " (3)            " << Resolution.at(2) << " \\pm " << EResolution.at(2) << " nm " << endl;
  cout << " (4)            " << Resolution.at(3) << " \\pm " << EResolution.at(3) << " nm " << endl;
  cout << " zona destra:   " << endl;
  cout << " (5)            " << Resolution.at(4) << " \\pm " << EResolution.at(4) << " nm " << endl;
  cout << " (6)            " << Resolution.at(5) << " \\pm " << EResolution.at(5) << " nm " << endl;
  cout << endl;
  
  MeanResolutionCalculator();
  
  cout << " Media aritmetica: " << FinalResolution << " \\pm " << EFinalResolution << endl;
  cout << "\n" << endl;
  cout << " Fattori di compatibilità: " << endl;
  cout << endl;
  cout << " ( 1 ) e ( 2 )    " << RCompatibility.at(0) << endl;
  cout << " ( 1 ) e ( 3 )    " << RCompatibility.at(1) << endl;
  cout << " ( 1 ) e ( 4 )    " << RCompatibility.at(2) << endl;
  cout << " ( 1 ) e ( 5 )    " << RCompatibility.at(3) << endl;
  cout << " ( 1 ) e ( 6 )    " << RCompatibility.at(4) << endl;
  cout << endl;
  cout << " ( 2 ) e ( 3 )    " << RCompatibility.at(5) << endl;
  cout << " ( 2 ) e ( 4 )    " << RCompatibility.at(6) << endl;
  cout << " ( 2 ) e ( 5 )    " << RCompatibility.at(7) << endl;
  cout << " ( 2 ) e ( 6 )    " << RCompatibility.at(8) << endl;
  cout << endl;
  cout << " ( 3 ) e ( 4 )    " << RCompatibility.at(9) << endl;
  cout << " ( 3 ) e ( 5 )    " << RCompatibility.at(10) << endl;
  cout << " ( 3 ) e ( 6 )    " << RCompatibility.at(11) << endl;
  cout << endl;
  cout << " ( 4 ) e ( 5 )    " << RCompatibility.at(12) << endl;
  cout << " ( 4 ) e ( 6 )    " << RCompatibility.at(13) << endl;
  cout << endl;
  cout << " ( 5 ) e ( 6 )    " << RCompatibility.at(14) << endl;
  cout << "\n" << endl;
  
  cout << " ------------------------------------------------------------------------------------------- " << endl;
  
  cout << "\n Per avere una idea printiamo anche le distanze in nanometri tra i picchi: " << endl;
  cout << " zona sinistra: " << endl;
  cout << " (1)            " << DistanzeNM.at(0) << " nm " << endl;
  cout << " (2)            " << DistanzeNM.at(1) << " nm " <<  endl;
  cout << " zona centrale: " << endl;
  cout << " (3)            " << DistanzeNM.at(2) << " nm " << endl;
  cout << " (4)            " << DistanzeNM.at(3) << " nm " << endl;
  cout << " zona destra:   " << endl;
  cout << " (5)            " << DistanzeNM.at(4) << " nm " << endl;
  cout << " (6)            " << DistanzeNM.at(5) << " nm " << endl;
  cout << endl;

  TheRealResolutionCalculator();

  cout << setprecision(15) << " ------------------------------------------------------------------------------------------- " << endl;
  
  cout << "\n THE REAL FOOKING RESOLUTIONS: " << endl; 
  cout << "                | FWHM  \\pm SigmaFWHM   | Risoluzione \\pm SigmaRisoluzione " << endl;
  cout << " zona sinistra: " << endl;
  cout << " (1)            " << FWHMHolder.at(0) << " \\pm " << ErrFWHMHolder.at(0) << " | " << TheRealResolution.at(0) << " \\pm " << ErrTheRealResolution.at(0) << endl;
  cout << " (2)            " << FWHMHolder.at(1) << " \\pm " << ErrFWHMHolder.at(1) << " | " << TheRealResolution.at(1) << " \\pm " << ErrTheRealResolution.at(1) << endl;
  cout << " (3)            " << FWHMHolder.at(2) << " \\pm " << ErrFWHMHolder.at(2) << " | " << TheRealResolution.at(2) << " \\pm " << ErrTheRealResolution.at(2) << endl;
  cout << " zona centrale: " << endl;
  cout << " (1)            " << FWHMHolder.at(3) << " \\pm " << ErrFWHMHolder.at(3) << " | " << TheRealResolution.at(3) << " \\pm " << ErrTheRealResolution.at(3) << endl;
  cout << " (2)            " << FWHMHolder.at(4) << " \\pm " << ErrFWHMHolder.at(4) << " | " << TheRealResolution.at(4) << " \\pm " << ErrTheRealResolution.at(4) << endl;
  cout << " (3)            " << FWHMHolder.at(5) << " \\pm " << ErrFWHMHolder.at(5) << " | " << TheRealResolution.at(5) << " \\pm " << ErrTheRealResolution.at(5) << endl;
  cout << " zona destra:   " << endl;
  cout << " (1)            " << FWHMHolder.at(6) << " \\pm " << ErrFWHMHolder.at(6) << " | " << TheRealResolution.at(6) << " \\pm " << ErrTheRealResolution.at(6) << endl;
  cout << " (2)            " << FWHMHolder.at(7) << " \\pm " << ErrFWHMHolder.at(7) << " | " << TheRealResolution.at(7) << " \\pm " << ErrTheRealResolution.at(7) << endl; 
  cout << " (3)            " << FWHMHolder.at(8) << " \\pm " << ErrFWHMHolder.at(8) << " | " << TheRealResolution.at(8) << " \\pm " << ErrTheRealResolution.at(8) << endl;


  return 0;

}
