#ifndef READER_H
#define READER_H

/* ==========================================================
|                                                           |
|  Le prime 16 righe sono da scartare                       |
|                                                           |
========================================================== */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <cctype>    // for std::isspace and std::ispunct
#include <algorithm> // for std::all_of
#include "ExternalObjects.h"
using namespace std;

/* LOCAL GLOBAL VARIABLE =================================================================== */

  static string NameOfFile;
  static ifstream CSVFile_in;
  static istringstream StringToStream;
  
  //path relativo dove sono locati i file da leggere
  static string PathToDCONST = "data/dconst/";
  static string PathToVCONST = "data/vconst/";
  
  static unsigned int NumberOfLinesToDiscard = 16;
  
  //variabili di appoggio per la lettura
  static string LineToDiscard;
  static string LineToKeep;
  static string LineToVector;
  static string LineToVector2;
  static double tmpDataStorage;

/* --------------------------------------------------------------------------------------- */

void AvoidCodeDuplicationThetSaid( const string FileToReadIndex, string& ThePathOfFile, DataMap& SegnaleTempo, DataMap& SegnaleVolt );

void ReadShit(){

  /* READING FOR DCONST ==================================================================== */
  
    for( string FileToReadIndex : FileName_dconst ){
      AvoidCodeDuplicationThetSaid( FileToReadIndex, PathToDCONST, SegnaleTemporale_d, SegnaleVoltico_d );
    }
  
  /* --------------------------------------------------------------------------------------- */

  /* READING FOR VCONST ==================================================================== */
  
    for( string FileToReadIndex : FileName_vconst ){
      AvoidCodeDuplicationThetSaid( FileToReadIndex, PathToVCONST, SegnaleTemporale_v, SegnaleVoltico_v );
    }
  
  /* --------------------------------------------------------------------------------------- */


  return;
};


void AvoidCodeDuplicationTheySaid( const string FileToReadIndex, string& ThePathOfFile, DataMap& SegnaleTempo, DataMap& SegnaleVolt ){

      NameOfFile = ThePathOfFile + FileToReadIndex + ".CSV";
      if(DebugPrint) cout << " READ.h: selecting index = " << FileToReadIndex << endl;
      if(DebugPrint) cout << NameOfFile << endl;
      
      //opening
        CSVFile_in.open( NameOfFile );
        if ( !CSVFile_in.is_open() ) {
          cout << "the fooking file is not opening !!! " << endl;
        }
        
      //discard of lines
        for( int j=0; j<NumberOfLinesToDiscard; j++ ){
          getline( CSVFile_in, LineToDiscard );
        }
        if(DebugPrint) cout << " " << NumberOfLinesToDiscard << " lines discarde correctly (i hope) " << endl;  
      
      
      //reading of lines
        while ( getline( CSVFile_in, LineToKeep ) ){
        
          //controlli sulla qualità della line
          if(LineToKeep.empty()) break;
  
          
          StringToStream.clear();
          StringToStream.str( LineToKeep );
   
          //firs column: tempo
            if( getline(StringToStream, LineToVector2, ',') ){
              tmpDataStorage = 0;             
              tmpDataStorage = stod(LineToVector2);
              SegnaleTempo.at(FileToReadIndex).push_back(tmpDataStorage);
              if(DebugPrint) cout << "Dato tempo appena letto: " << tmpDataStorage << endl;
            }
            else{
              cout << " !!!! ERROR reading data (sad moth stiker) " << endl;
            }
                    
          //second column: voltage
            if( getline( StringToStream, LineToVector, ',' ) ){
              tmpDataStorage = 0;
              tmpDataStorage = stod(LineToVector);
              SegnaleVolt.at(FileToReadIndex).push_back(tmpDataStorage);
              if(DebugPrint) cout << "Dato volt appena letto: " << tmpDataStorage << endl;
            }
            else{
              cout << " !!!! ERROR reading data (sad moth stiker) " << endl; 
            }
        
        }
         
  
      //pulizia degli oggetti usati
      NameOfFile.clear();
      CSVFile_in.close();
      LineToDiscard.clear();
      LineToKeep.clear();
      StringToStream.clear();
      LineToVector.clear();
      LineToVector2.clear();

  return;
};


#endif