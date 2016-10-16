//
//  main.cpp
//  Lab 4
//
//  Created by Tiffany Montgomery on 10/2/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;


void problem3(){
    //pg 301
    double d, D;
    for (int t = 0; t < 11; t++){
        D = .5*32*t*t;
        d = .5*32* (pow(t+1,2) - pow(t,2));
        cout << "Distance Fallen from " << t << " to " << t+1 << " is: " << d << endl;
        cout << "Total Distance Fallen: " << D << endl;
    }
    
    //output
    //Distance Fallen from 0 to 1is: 16
    //Total Distance Fallen: 0
    //Distance Fallen from 1 to 2is: 48
    //Total Distance Fallen: 16
    //Distance Fallen from 2 to 3is: 80
    //Total Distance Fallen: 64
    //Distance Fallen from 3 to 4is: 112
    //Total Distance Fallen: 144
    //Distance Fallen from 4 to 5is: 144
    //Total Distance Fallen: 256
    //Distance Fallen from 5 to 6is: 176
    //Total Distance Fallen: 400
    //Distance Fallen from 6 to 7is: 208
    //Total Distance Fallen: 576
    //Distance Fallen from 7 to 8is: 240
    //Total Distance Fallen: 784
    //Distance Fallen from 8 to 9is: 272
    //Total Distance Fallen: 1024
    //Distance Fallen from 9 to 10is: 304
    //Total Distance Fallen: 1296
    //Distance Fallen from 10 to 11is: 336
    //Total Distance Fallen: 1600
}

void problem5(){
    //pg 302
    //use 12 for input
    
    int a = 0;
    int b = 1;
    int c;
    
    cout << a << endl;
    cout << b << endl;
    
    for (int n = 0; n < 10; n++){
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }
    
    //output
    
    //0
    //1
    //1
    //2
    //3
    //5
    //8
    //13
    //21
    //34
    //55
    //89
   

}

void problem11(){
    //303
    //use compound interest rather than simple interest
    //A = P (1 + r/n) ^ nt
    //A = the future value of the investment/loan, including interest
    //P = the principal investment amount (the initial deposit or loan amount)
    //r = the annual interest rate (decimal)
    //n = the number of times that interest is compounded per year
    //t = the number of years the money is invested or borrowed for
    
    //purchased in 1626 for $24
    //show money at the end of each 50 year period
    //starting in 1626 and ending 400 years later
    
    double A;
    int counter = 1;
    
    for (int years = 0; years < 401; years+=50){
        A = 24*pow((1 + .05),years);
        if (years % 50 == 0 && years != 0){
            cout << "Total $ after " << 50*counter << " is " << A << endl;
            counter++;
        }
    }
    
    //output
    //Total $ after 50 is 275.218
    //Total $ after 100 is 3156.03
    //Total $ after 150 is 36191.5
    //Total $ after 200 is 415022
    //Total $ after 250 is 4.75922e+06
    //Total $ after 300 is 5.45759e+07
    //Total $ after 350 is 6.25844e+08
    //Total $ after 400 is 7.1768e+09
}

int main() {
    int problem_num;
    string ask;
    ask = "Y";
    while (ask == "Y") {
        
        cout << "Enter Problem number" << endl;
        cin >> problem_num;
        
        switch (problem_num) {
            case 3:
                problem3();
                break;
            case 5:
                problem5();
                break;
            case 11:
                problem11();
                break;
            default:
                break;
                
        }
        
        cout << "Would you like to try another problem? (Y/N) " <<endl;
        cin >> ask;
    }
    
}
