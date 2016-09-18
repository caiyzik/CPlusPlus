//
//  main.cpp
//  In Class Examples
//
//  Created by Tiffany Montgomery on 8/29/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float chapter2num5() {
    //Aug 29, 2016
    //Calculates and displays the velocity of water flowing out of a tube
    float v_out, v_in, rad_in, rad_out;
    
    v_in = 1; //ft/sec
    rad_in = 0.75; //inches
    rad_out = 0.5; //inches
    
    //calculate
    return v_out = v_in * pow(rad_in/rad_out, 2.0);
    
    //convert inches to ft
    //v_out = v_out/12;
    
    //output
    //2.25
    //Program ended with exit code: 0
    
}

void chapter3() {
    //September 12, 2016
    const double PI = atan(1)*4;
    double degrees, radians;
    double cosVal, sinVal, tanVal;
    
    //set to 2 decimal places
    cout << fixed << setprecision(2);
    
    //get input
    cout << "Enter the Angle in Degrees: ";
    cin >> degrees;
    
    //convert to radians
    radians = degrees * PI /180.0;
    
    //get trig values
    cosVal = cos(radians);
    sinVal = sin(radians);
    tanVal = tan(radians);
    
    //print out a table
    
    const int W = 8;
    cout << "Sine of    " << degrees << " = " << setw(W) << sinVal << endl;
    cout << "Cosine of  " << degrees << " = " << setw(W) << cosVal << endl;
    cout << "Tangent of " << degrees << " = " << setw(W) << tanVal << endl;
    
    /*
     Enter the Angle in Degrees: 91.2
     Sine of    91.20 =     1.00
     Cosine of  91.20 =    -0.02
     Tangent of 91.20 =   -47.74
     Program ended with exit code: 0
     */
}


int main() {
    chapter3();
    return 0;
}
