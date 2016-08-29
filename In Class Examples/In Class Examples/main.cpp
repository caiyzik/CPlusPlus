//
//  main.cpp
//  In Class Examples
//
//  Created by Tiffany Montgomery on 8/29/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>
#include <cmath>

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


int main() {
    cout << chapter2num5() <<endl;
    return 0;
}
