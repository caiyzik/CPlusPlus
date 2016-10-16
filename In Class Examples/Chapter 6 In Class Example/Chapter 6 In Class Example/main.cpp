//
//  main.cpp
//  Chapter 6 In Class Example
//
//  Created by Tiffany Montgomery on 10/10/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>;
#include <iomanip>;
#include <cmath>;

using namespace std;

//functions
//for LABS please put main first
void printMsg();
int getMenuChoice();
float getPayment(float, float, int);

int main() {
    
    //int menuChoice;
    //menuChoice = getMenuChoice();
    
    //cout << "Choice --> " << menuChoice << endl;
    
    float car, rate, pmt;
    int years;
    
    cout << "Enter Price fo Car: ";
    cin >> car;
    
    /* cout << "Enter APR: ";
    cin >> rate; */
    
    for (rate = 0; rate <= 32; rate += 2){
        pmt = getPayment(car, rate, years);
        cout << "Rate: " << rate << "% Payment = " << pmt << endl; 
    }
    
    cout << "Enter Years: ";
    cin >> years;
    
    pmt = getPayment(car, rate, years);
    
    cout << fixed << setprecision(2);
    cout << "Payment = " << pmt << endl;
    
    return 0;
}

int getMenuChoice(){
    int choice;
    
    cout << "1. I-Beam" << endl;
    cout << "2. Rectangle Beam" << endl;
    cout << "3. Cylindrical Beam" << endl;
    cout << "Enter Choice: ";
    cin >> choice;
}

float getPayment(float principal, float rate, int years){
    float pmt;
    
    rate /= 1200.0;
    int numPayments = years * 12;
    
    if (rate == 0){
        pmt = principal / numPayments;
    }
    
    else{
    
    pmt = (principal * rate) / (1-pow(1 + rate, -numPayments));
    }
    
    return pmt;
    
}


