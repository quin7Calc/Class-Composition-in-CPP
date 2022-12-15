//
//  main.cpp
//  Chapter 11 Program
//
//  Created by Quintan Calvert on 11/2/22.
//  Program to use Composition on Machinery

// This program will use Composition from chapter 11 to describe machinery.
// Each Machine is composed of an Engine and a Transmission in real life
// So, the machine type and class Machine is composed of the Engine and Transmission Types.
// Demonstrates composition, not inheritence

#include <iostream>     // Header files included accordingly
#include <string>
#include "machineType.hpp"
#include "EngineType.hpp"
#include "TransmissionType.hpp"

using namespace std;

int main() {
    
    // Main Menu
    Machine myMachine;
    
    int choice = 0; // This is used to store the user's choice of action in the menu
    
    cout << "Welcome to Machinery DataBase. Please make a selection: ";
    cout << endl;
    cout << "1. Enter data for this machine" << endl; // Enter data
    cout << "2. View Data for this machine" << endl; // View data
    cout << "3. Quit" << endl << endl << "Enter Choice Here: "; // Exit Program
    cin >> choice;
  
    while (choice != 3) // This is the control loop. manages function calls based on according
                          // user choice input.
    {
        if (choice == 1)
            myMachine.getInformation();
        else if (choice == 2)
            myMachine.printInformation();
        else if (choice == 3)
            return 1;
        else
        {
            cout << "Invalid Input";
            cout << endl;
            cin.clear();
        }
        
        cout << endl <<  "Enter another option: ";  // This loop uses the priming read method
                                                         // Therefore, input is also included here.
        cin >> choice;
        cout << endl << endl;
    }
    
    return 0;
}
