/* Non è stata considerata la covarianza */

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

/* Global variable definition */
vector<double> MeanHolder;
vector<double> EMeanHolder;
vector<double> Compatibility;
double FinalMean;
double EFinalMean;
double lambda = 585.3; //nm
double ConversionFactor = (lambda*lambda)/(2*4040000); //nm
vector<double> Resolution;
vector<double> EResolution;


/* Hard coded values (fit results) */

double c1sx = 3879.18, c2sx = 4117.65, c3sx = 4359.83;
double Ec1sx = 0.0707239, Ec2sx = 0.109531, Ec3sx = 0.0671669;

double c1cx = 4605.6, c2cx = 4855.34, c3cx = 5109.5;
double Ec1cx = 0.127313, Ec2cx = 0.0993444, Ec3cx = 0.0612584;

double c1dx = 5367.82, c2dx = 5630.81, c3dx = 5898.61;
double Ec1dx = 0.159843, Ec2dx = 0.0763267, Ec3dx = 0.0716108; 


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
  error = sqrt( pow(arr[2],2) + pow(arr[4],2) );
  
  MeanHolder.push_back(value);
  EMeanHolder.push_back(error);
  
  return;

}

void ConverterCalculator(){

  double k = 0;
  for(auto c : EMeanHolder){
    k += (1/ ( pow(c,2) ) );
  }

  double dummy;
  for(int i=0; i< MeanHolder.size(); i++){
    dummy += MeanHolder.at(i) / ( pow(EMeanHolder.at(i),2 ) );
  }

  FinalMean = (1/k)*dummy; 
  EFinalMean = sqrt( 1/k ); 
  
  Compatibility.push_back( ( abs( MeanHolder.at(0)-MeanHolder.at(1) ) ) / sqrt( pow( EMeanHolder.at(0) ,2) + pow( EMeanHolder.at(1) ,2) ) );
  Compatibility.push_back( ( abs( MeanHolder.at(1)-MeanHolder.at(2) ) ) / sqrt( pow( EMeanHolder.at(1) ,2) + pow( EMeanHolder.at(2) ,2) ) );
  Compatibility.push_back( ( abs( MeanHolder.at(0)-MeanHolder.at(2) ) ) / sqrt( pow( EMeanHolder.at(0) ,2) + pow( EMeanHolder.at(2) ,2) ) );

}

void ResolutionCalcolator(){

  Resolution.push_back(  )

}

/*------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

int main(){

  MeanHolder.reserve(3);
  EMeanHolder.reserve(3);
  Compatibility.reserve(3);
  //Resolution.reserve(3);
  //EResolution.reserve(3);
  
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
  
  cout << "\n\n Media delle medie: " << FinalMean << " \\pm " << EFinalMean << endl;
  
  cout << "\n\n Fattore di conversione: (" << (ConversionFactor/FinalMean) << " \\pm " << ( EFinalMean / (FinalMean*FinalMean) ) << ") nm / pixel " << endl;

  cout << "\n" << endl;
  
  return 0;

}
