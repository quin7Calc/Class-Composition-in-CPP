//
//  TransmissionTypeImp.cpp
//  Chapter 11 Program
//
//  Created by Quintan Calvert on 11/2/22.
//

#include "TransmissionType.hpp"
#include <iostream>
#include <string>

using namespace std;

void Transmission::getInformation()
{
    cout << "Enter the Type of Transmission: ";
    cin >> drivetrain;
    cout << endl;
    cout << "Enter the number of Gears of this Transmission: ";
    cin >> gears;
    return;
}
void Transmission::printInformation()
{
    cout << "This is a " << drivetrain << " Transmission with " << gears << " Gears." << endl;
}
Transmission::Transmission()
{
    drivetrain = "";
    gears = 0;
};
