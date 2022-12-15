//
//  TransmissionTypeImp.hpp
//  Chapter 11 Program
//
//  Created by Quintan Calvert on 11/2/22.
//

#ifndef TransmissionTypeImp_hpp
#define TransmissionTypeImp_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Transmission // Transmission data dealt with here
{
public:
    void getInformation(); // Will be called by machine type.
    void printInformation();
    Transmission();
    
private:
    string drivetrain; // data stored here.
    int gears;

};
#endif /* TransmissionTypeImp_hpp */
