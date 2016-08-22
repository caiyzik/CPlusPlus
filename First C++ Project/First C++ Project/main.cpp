//
//  main.cpp
//  First C++ Project
//
//  Created by Tiffany Montgomery on 8/22/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>  // this is so we can print and read
#include <cmath> //for pow function

using namespace std;

//float fv(float deposit, float rate, int years) {
//    float fv = deposit * (1 + rate)^years;
//    return fv;
//}

//Notes from class
//Build <ctrl> + <Shift> + B
//Run <ctrl> + F5

int main() {
    //Format for class
    //Declare Variables
    float deposit, rate, fv;
    int years;
    //Get the input
    cout << "Enter Deposit: ";
    cin >> deposit;
    cout << "Enter Rate: ";
    cin >> rate;
    cout << "Enter Years: ";
    cin >> years;
    
    cout << "The user entered " << deposit << endl << rate << endl << years << endl;
    
    //Run the Calculations
    rate = rate / 100;
    fv = deposit * pow(1 + rate, years);
    
    //Display the output
    
    cout << fv << endl;
    
    cout << "Hello, World!" <<endl; // "<<" output stream operator
    return 0;
}

//Leave comments with output at the end of program for grading. 
