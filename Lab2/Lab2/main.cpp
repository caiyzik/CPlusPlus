//
//  main.cpp
//  Lab2
//
//  Created by Tiffany Montgomery on 9/12/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

double problem6() {
    //pg 139
    double height, ladder_length, angle;
    
    cout << "Enter Length of Ladder: ";
    cin >> ladder_length;
    
    cout << "Enter Angle of Ladder: ";
    cin >> angle;
    
    return height = ladder_length * sin(angle * M_PI/180);
    
    //output
    //length = 20; angle = 85; height = 19.9239
    //length = 25; angle = 85; height = 24.9049
    
    
}

void problem7() {
    // pg 151
    double a, b, c, x, P;
    
    cout << "Enter value for a:";
    cin >> a;
    
    cout << "Enter value for b:";
    cin >> b;
    
    cout << "Enter value for c:";
    cin >> c;
    
    cout << "Enter value for x:";
    cin >> x;
    
    P = b*x + a*pow(x,2) + c;
    
    cout << "Polynomial Value" <<endl;
    cout << P << endl;
    
    //output
    //all polynomial values from table:
    //13.48, 40, 30, 12, 8, 0, -12, 545.05, 176.768
    

}

int problem4() {
    // pg 173
    
    int B;
    double t;
   
    
    cout << "Enter the time elapsed in hours: ";
    cin >> t;
    
    return  B = 300000*exp(-0.032*t);
    //output
    //t = 10 B = 217844
    //t = 18 B = 168642
    //t = 24 B = 139182
    //t = 36 B = 94801
    //t = 48 B = 64572
    //t = 72 B = 29957
    
    
}

int main() {
    
    int problem_num;
    string ask;
    ask = "Y";
    while (ask == "Y") {
        
        cout << "Enter Problem number" << endl;
        cin >> problem_num;
        
        switch (problem_num) {
            case 6:
                cout << problem6();
                break;
            case 7:
                problem7();
                break;
            case 4:
                cout << problem4();
                break;
            default:
                break;
                
        }
        
        cout << "Would you like to try another problem? (Y/N) " <<endl;
        cin >> ask;
    }
}
