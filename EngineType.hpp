//
//  EngineTypeImp.hpp
//  Chapter 11 Program
//
//  Created by Quintan Calvert on 11/2/22.
//

#ifndef EngineTypeImp_hpp
#define EngineTypeImp_hpp

#include <stdio.h> //  Nessecary prereqs.
#include <string>

using namespace std;

class Engine            // This is one of the classes used to build the machine class
{
public:
    void getInformation();      // These functions will handle data about the machine
    void printInformation();
    Engine();
    
private:
    string name;        // These variables will store data about the engine
    double displacement;
    double horsepower;
};


#endif /* EngineTypeImp_hpp */
