//
//  main.cpp
//  Lab 09 Number 05
//  Page 738
//
//  Created by Tiffany Montgomery on 11/28/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>

using namespace std;

struct car{
    int number;
    int miles;
    int gallons;
};

int main(int argc, const char * argv[]) {
    car carlot[6];
    float total_mph = 0;
    
    //load carlot
    for(int i = 0; i < 5; i++){
        cout << "Enter Car " << i+1 << " Number: " << endl;
        cin >> carlot[i].number;
        
        cout << "Enter Car " << i+1 << " Miles: " << endl;
        cin >> carlot[i].miles;
        
        cout << "Enter Car " << i+1 << " Gallons: " << endl;
        cin >> carlot[i].gallons;
        
    }
    
    //print carlot
    cout << "Number\t" << "MPG\t" << endl;
    
    for (int i = 0; i < 5; i++){
        float mph = carlot[i].miles/carlot[i].gallons; //Does not specify whether or not we want integer division
        cout << carlot[i].number << "\t"
        <<  mph << endl;
        total_mph += mph;
        
    }
    
    cout << "Average Miles Per Gallon: " << total_mph/5 << endl;
    return 0;
}

/*
 output
 Enter Car 1 Number:
 25
 Enter Car 1 Miles:
 1450
 Enter Car 1 Gallons:
 62
 Enter Car 2 Number:
 36
 Enter Car 2 Miles:
 3240
 Enter Car 2 Gallons:
 136
 Enter Car 3 Number:
 44
 Enter Car 3 Miles:
 1792
 Enter Car 3 Gallons:
 76
 Enter Car 4 Number:
 52
 Enter Car 4 Miles:
 2360
 Enter Car 4 Gallons:
 105
 Enter Car 5 Number:
 68
 Enter Car 5 Miles:
 2114
 Enter Car 5 Gallons:
 67
 Number	MPG
 25	23
 36	23
 44	23
 52	22
 68	31
 Average Miles Per Gallon: 24.4
 Program ended with exit code: 0
 */
