//
//  main.cpp
//  Lab 6
//
//  Created by Tiffany Montgomery on 10/23/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

double* calc_volts(double current[], double resistance[], double volts[]){
    for (int i = 0; i < 10; i++){
        volts[i] = current[i] * resistance[i];
    }
    return volts;
}

void print_table(double current[], double resistance[], double volts[]){
    int const W = 8;
    
    cout << "Volts" << setw(W) << "Current" << setw(W) << "Resistance" << endl;
    
    cout << fixed << setprecision(1);
    
    for (int i = 0; i < 10; i++){
        cout << volts[i] << setw(W) << current[i] << setw(W) << resistance[i] << endl;
    }
    
}

int main(int argc, const char * argv[]) {
    
    double current[10] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
    double resistance[10] = {4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8};
    double volts[10];
    
    double* new_volts = calc_volts(current, resistance, volts);
    
    print_table(current, resistance, new_volts);
    
    
    return 0;
    
    /*
     output
     
     Volts CurrentResistance
     42.5    10.6     4.0
     126.6    14.9     8.5
     79.3    13.2     6.0
     121.6    16.6     7.3
     167.6    18.6     9.0
     144.9     9.5    15.3
     19.7     6.6     3.0
     98.9    18.3     5.4
     35.2    12.2     2.9
     19.1     4.0     4.8
     
     
     */
}
