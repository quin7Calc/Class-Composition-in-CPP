//
//  EngineTypeImp.cpp
//  Chapter 11 Program
//
//  Created by Quintan Calvert on 11/2/22.
//

#include "EngineType.hpp"
#include <string>
#include <iostream>

using namespace std;

void Engine::getInformation()   // get Engine Data, will be called by machine type.
{
    cout << "Enter the following Engine information: " << endl;
    cout << "Name of Engine ";
    cin >> name;
    cout << "Displacement in Cubic Centimeters: ";
    cin >> displacement;
    cout << endl;
    cout << "Horsepower: ";
    cin >> horsepower;
    cout << endl;
    
    return;
}

void Engine::printInformation() //  Print information about this engine, called by machine type
{
    cout << "The Specifications for The Engine called " << name << " are: " << endl;
    cout << "Cubic Centimeters of Displacement: " << displacement << endl;
    cout << "Horsepower: " << horsepower << endl;
    
    return;
}

Engine::Engine() // Default constructor
{
    name = "";
    displacement = 0.0;
    horsepower = 0.0;
};
