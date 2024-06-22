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
#include "ExternalObjects.h"
using namespace std;



void ReadShit(){

  /* VARIABILI ============================================================================= */
  
    string NameOfFile;
    ifstream CSVFile_in;
    
    string PathToDCONST = "data/dconst/";
    string PathToVCONST = "data/vconst/";
    
    string LineToDiscard;
    string LineToKeep;
    string LineToVector;
    string LineToVector2;
    
    istringstream StringToStream;
    float tmpDataStorage;
    
    auto MappaTempoD   = (*SegnaleTemporale).at("d");
    auto MappaVolticaD = (*SegnaleVoltico).at("d");
    
    auto MappaTempoV   = (*SegnaleTemporale).at("v");
    auto MappaVolticaV = (*SegnaleVoltico).at("v");
    if(DebugPrint) cout << " READ.h: inner maps extracted " << endl;
    

  /* READING FOR DCONST ==================================================================== */

    for( auto index : FileName_dconst ){
    
      NameOfFile = PathToDCONST + index + ".CSV";
      
      if(DebugPrint) cout << " READ.h: selecting D index = " << index << endl;
      
      auto VectorToFillTempo   = MappaTempoD  .at( index );
      if(DebugPrint) cout << " READ.h: accessing tempo D for " << index << endl;
      
      auto VectorToFillVoltico = MappaVolticaD.at( index );
      if(DebugPrint) cout << " READ.h: accessing tempo V for " << index << endl;
      
      
      if(DebugPrint) cout << " READ.h: vector D extracted " << endl;
    
      //opening
        CSVFile_in.open(NameOfFile);
        if ( !CSVFile_in.is_open() ) {
          cout << "the fooking file is not opening !!! " << endl;
        }
    
      //discard of lines
        for( int j=0; j<16; j++ ){
          getline( CSVFile_in, LineToDiscard );
        }
    
    
      //reading of lines
        while ( getline( CSVFile_in, LineToKeep ) ){
        
          StringToStream.str( LineToKeep );
          
            //firs column: tempo
            if( getline(StringToStream, LineToVector2, ',') ){
              tmpDataStorage = 0;
              tmpDataStorage = stod(LineToVector2);
              VectorToFillTempo.push_back(tmpDataStorage);
            }
            else{
              cout << " !!!! ERROR reading data (sad moth stiker) " << endl;
            }
          
          
            //second column: voltage
            if( getline( StringToStream, LineToVector, ',' ) ){
              tmpDataStorage = 0;
              tmpDataStorage = stod(LineToVector);
              VectorToFillVoltico.push_back(tmpDataStorage);
            }
            else{
              cout << " !!!! ERROR reading data (sad moth stiker) " << endl; 
            }
        
        }

    }
    if(DebugPrint) cout << " READ.h: file D readed " << endl;

  /* READING FOR VCONST ==================================================================== */

    for( auto index : FileName_vconst ){
    
      NameOfFile = PathToVCONST + index + ".CSV";
      
      auto VectorToFillTempo   = MappaTempoV  .at( index );
      auto VectorToFillVoltico = MappaVolticaV.at( index );
      if(DebugPrint) cout << " READ.h: vector V extracted " << endl;
    
      //opening
        CSVFile_in.open(NameOfFile);
        if ( !CSVFile_in.is_open() ) {
          cout << "the fooking file is not opening !!! " << endl;
        }
      
      //discard of lines
        for( int j=0; j<16; j++ ){
          getline( CSVFile_in, LineToDiscard );
        }
    
    
      //reading of lines 
        while ( getline( CSVFile_in, LineToKeep ) ){
        
            StringToStream.str( LineToKeep );
          
            //firs column: tempo
            if( getline(StringToStream, LineToVector2, ',') ){
              tmpDataStorage = 0;
              tmpDataStorage = stod(LineToVector2);
              VectorToFillTempo.push_back(tmpDataStorage);
            }
            else{
              cout << " !!!! ERROR reading data (sad moth stiker) " << endl;
            }
          
          
            //second column: voltage
            if( getline( StringToStream, LineToVector, ',' ) ){
              tmpDataStorage = 0;
              tmpDataStorage = stod(LineToVector);
              VectorToFillVoltico.push_back(tmpDataStorage);
            }
            else{
              cout << " !!!! ERROR reading data (sad moth stiker) " << endl; 
            }
        
        }
    
    }
    if(DebugPrint) cout << " READ.h: file V readed " << endl;

  return;
};

#endif
