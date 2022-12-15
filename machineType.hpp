//
//  machineType.hpp
//  Chapter 11 Program
//
//  Created by Quintan Calvert on 11/2/22.
//

#ifndef machineType_hpp
#define machineType_hpp

#include <stdio.h>  // This is the main class of the program. It is composed of the other two.
#include <iostream>
#include <string>
#include "EngineType.hpp"
#include "TransmissionType.hpp"

using  namespace std;

 class Machine
{
public:                         // These functions have the same name as the other classes, but are overridden
 void  getInformation(); // Print and get functions do all info, macine extras and engine tranny types as well.
 void  printInformation();
  Machine();
    
private:
    string name;        // Extra data added to the machine class that was not present in the engine or tranny classes.
    string model;
    int year;
    string brand;
    
    Engine motor;  // This is the actual composition. Class instances happen HERE.
    Transmission tranny;
};

#endif /* machineType_hpp */
