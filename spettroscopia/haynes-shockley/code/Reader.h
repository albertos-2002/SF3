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
    

  /* READING FOR DCONST ==================================================================== */

    for( auto index : FileName_dconst ){
    
      NameOfFile = PathToDCONST + index + ".CSV";
      if(DebugPrint) cout << " READ.h: selecting D index = " << index << endl;
    
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
      int CounterOfLines = 0;
        while ( getline( CSVFile_in, LineToKeep ) ){
          
          CounterOfLines++;
          if(LineToKeep.empty()) continue;
          
          StringToStream.clear();
          StringToStream.str( LineToKeep );
          
            //firs column: tempo
            if( getline(StringToStream, LineToVector2, ',') ){
              tmpDataStorage = 0;
              tmpDataStorage = stod(LineToVector2);
              SegnaleTemporale_d.at(index).push_back(tmpDataStorage);
              if(DebugPrint) cout << "Dato tempo appena letto D: " << tmpDataStorage << endl;
            }
            else{
              cout << " !!!! ERROR reading data (sad moth stiker) " << endl;
            }
          
          
            //second column: voltage
            if( getline( StringToStream, LineToVector, ',' ) ){
              tmpDataStorage = 0;
              tmpDataStorage = stod(LineToVector);
              SegnaleVoltico_d.at(index).push_back(tmpDataStorage);
              if(DebugPrint) cout << "Dato volt appena letto D: " << tmpDataStorage << endl;
            }
            else{
              cout << " !!!! ERROR reading data (sad moth stiker) " << endl; 
            }
        
          if(DebugPrint) cout << " READ.h: file D read line: " << CounterOfLines << endl;
        
        }

        CSVFile_in.close();

    }
    if(DebugPrint) cout << " READ.h: file D readed " << endl;

  /* READING FOR VCONST ==================================================================== */

    for( auto index : FileName_vconst ){
    
      NameOfFile = PathToVCONST + index + ".CSV";
      if(DebugPrint) cout << " READ.h: selecting V index = " << index << endl;
    
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
      int CounterOfLines = 0;
        while ( getline( CSVFile_in, LineToKeep ) ){
        
            CounterOfLines++;
            if(LineToKeep.empty()) continue;
        
            StringToStream.clear();
            StringToStream.str( LineToKeep );
          
            //firs column: tempo
            if( getline(StringToStream, LineToVector2, ',') ){
              tmpDataStorage = 0;
              tmpDataStorage = stod(LineToVector2);
              SegnaleTemporale_v.at(index).push_back(tmpDataStorage);
              if(DebugPrint) cout << "Dato tempo appena letto V: " << tmpDataStorage << endl;
            }
            else{
              cout << " !!!! ERROR reading data (sad moth stiker) " << endl;
            }
          
          
            //second column: voltage
            if( getline( StringToStream, LineToVector, ',' ) ){
              tmpDataStorage = 0;
              tmpDataStorage = stod(LineToVector);
              SegnaleVoltico_v.at(index).push_back(tmpDataStorage);
              if(DebugPrint) cout << "Dato volt appena letto V: " << tmpDataStorage << endl;
            }
            else{
              cout << " !!!! ERROR reading data (sad moth stiker) " << endl; 
            }
            
          if(DebugPrint) cout << " READ.h: file D read line: " << CounterOfLines << endl;
        
        }
        
      CSVFile_in.close();
    
    }
    if(DebugPrint) cout << " READ.h: file V readed " << endl;

  return;
};

#endif
