//
//  main.cpp
//  Calculus Topics
//
//  Created by Tiffany Montgomery on 12/5/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

/*
 problems with Newton's Method
 - tangent DNE
 - out of domain
 - tangent line is zero (max and min)
 - Newton's method does not give you multiple approximations (unless you tell the program to?)
 */

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double f(double);
double f2(double);
double fPrime(double);
void NewtonsMethod();

int main() {
    NewtonsMethod();
    
    double start = 0.0, stop = 2.0, interval;
    double x, area = 0.0, areaUnder = 0.0;
    int rectangles;
    
    cout << "Enter Number of Rectangles: ";
    cin >> rectangles;
    
    interval = (stop-start) / rectangles;
    
    x = start;
    
    for (int i = 0; i < rectangles; i++){
        area += interval * f2(x);
        areaUnder += interval * f2(x + interval);
        x += interval;
    }
    
    cout << "Approx (upper) area = " << area << endl;
    cout << "Approx (under) area = " << areaUnder << endl;
    
    return 0;
}

void NewtonsMethod(){
    vector<double> guesses;
    double approx, tolerance = .0001;
    int size;
    
    cout << "Enter initial guess: ";
    cin >> approx;
    
    guesses.push_back(approx); 
    
    do {
        // calculate next approximation
        approx = guesses.back() - (f(guesses.back()) / fPrime(guesses.back()) );
        cout << approx << endl;
        
        guesses.push_back(approx);
        
        size = guesses.size();
    } while (abs(guesses[size-2] - guesses[size - 1]) > tolerance);
    
    cout << "Final Approximiation (" << guesses.size() << ") = " << guesses.back() << endl;
}

double f2(double x){
    return -1* pow(x, 2.0) + 5;
}

double f(double x){
    //return pow(x, 3.0) - x + 1;
    //return 3 * pow (x -1, .5) - x;
    return pow(x, 3.0) - 3.9 * pow(x, 2.0) + 4.79 * x - 1.881;
    
}

double fPrime(double x){
    //return 3 * pow(x, 2.0) - 1;
    //return (3 / 2.0 * pow(x - 1, -.5) -1);
    return 3 * x * x - (3.9 * 2 * x) + 4.79;
}
