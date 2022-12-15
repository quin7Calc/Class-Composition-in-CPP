//
//  machineType.cpp
//  Chapter 11 Program
//
//  Created by Quintan Calvert on 11/2/22.
//

#include "machineType.hpp"
#include "EngineType.hpp"
#include "TransmissionType.hpp"
#include <iostream>
#include <string>

using namespace std;

void  Machine::getInformation()
{
    cout << "Enter the information about this Machine: " << endl;
    cout << "Brand: ";
    cin >> brand;
    cout << "Name: ";
    cin >> name;
    cout << "Model: ";
    cin >> model;
    cout << "Year: ";
    cin >> year;
    motor.getInformation();
    tranny.getInformation();
}
void  Machine::printInformation()
{
    cout << "The Information about this machine is as follows: " << endl;
    cout << "Brand: " << brand << endl;
    cout << "Name: " << name << endl;
    cout << "ModelL " << model << endl;
    cout << "Year: " << year << endl;
    motor.printInformation();
    tranny.printInformation();
}
Machine::Machine()
{
    name = "";
    year = 0.0;
    brand = "";
}
