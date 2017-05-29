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
//#include "chapter6.cpp"

float getPayment(float, float, int);

using namespace std;

void chapter6(){
    
}

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

void chapter4(){
    //September 19, 2016
    //How to handle error statements(validation):
    //Tell them what they did wrong
    //Let them try again and store the new value
    
    float hoursWorked, hourlyRate;
    float regHours, otHours;
    float regPay, otPay, grossPay;
    float otRate;
    
    //input
    cout << "How many hours did you work?" <<endl;
    cin >> hoursWorked;
    
    //validation (must be 0 - 80)
    
    while (hoursWorked < 0 || hoursWorked > 80){
        cout << "Error! Hours worked must be 0-80." <<endl;
        cout << "Try again";
        cin >> hoursWorked;
    }
    
    
    cout << "How much to you get paid per hour?" <<endl;
    cin >> hourlyRate;
    
    //check for overtime
    if (hoursWorked >= 40){
        regHours = 40;
        otHours = hoursWorked - 40;
    }
    else {
        regHours = hoursWorked;
        otHours = 0;
    }
    
    //calculate Check
    otRate = hourlyRate * 1.5;
    regPay = hourlyRate * regHours;
    otPay = otHours * otRate;
    grossPay = regPay + otPay;
    
    //print payroll
    cout << "Regular Pay (" << regHours << " @ " << hourlyRate << ") = " <<regPay <<endl;
    cout << "Overtime Pay (" << otHours << " @ " << otRate << ") = " << otPay <<endl;
    cout << "Gross Pay" << setw(20) << grossPay << endl;
    
    
}

void chapter5(){
    //September 26, 2016
    //Loops
    //Problem 7 (Prime Numbers)
    
    for (int i=2; i<=100; i++){
        
        bool isPrime = true;
        for (int j = 2; j<= sqrt(i) && isPrime; j++){
            if (i % j == 0){
                isPrime = false;
            }
        }
        
        if(isPrime){
            cout << i << endl;
        }
        
    }
    
    
}

int main() {
    //int menuChoice;
    //menuChoice = getMenuChoice();
    
    //cout << "Choice --> " << menuChoice << endl;
    
    /*
    float car, rate, pmt;
    int years;
    
    cout << "Enter Price fo Car: ";
    cin >> car;
    
    cout << "Enter APR: ";
     cin >> rate;
    
    for (rate = 0; rate <= 32; rate += 2){
        pmt = getPayment(car, rate, years);
        cout << "Rate: " << rate << "% Payment = " << pmt << endl;
    }
    
    cout << "Enter Years: ";
    cin >> years;
    
    pmt = getPayment(car, rate, years);
    
    cout << fixed << setprecision(2);
    cout << "Payment = " << pmt << endl;
    
    */
    
    chapter3();
    

    return 0;
}
