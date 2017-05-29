//
//  main.cpp
//  Lab 7 (Number 1)
//
//  Created by Tiffany Montgomery on 10/30/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

/*pg 507 #1
 
 Produce the following pay report for each employee:
 
 Name   Pay Rate    Hours   Regular Pay     Overtime Pay    Gross Pay
 
 Reg pay = hours worked up to and including 40 hours * rate
 over pay = hours over 40 * rate * 1.5
 gross pay = reg pay + over pay
 
 Display totals of reg, over, and gross pay columns at end of program
 
 */

//function prototypes
//void loadItems

int main() {
    //declare variables
    string filename = "pay.txt";
    ifstream infile;
    string data[30];
    string names[10];
    double rates[10];
    int hours[10];
    int index = 0;
    string item;
    
    //open file
    infile.open(filename);
    
    //check to see if the file opened
    if (!infile){
        //no file exists
        cout << "No File Found..." << endl;
    }
    
    else{
        //read from the file
        
        do{
            infile >> item;
            data[index] = item;
            index++;
            
        } while(!infile.eof());
    
    }
    
    //display employee report
    //display pay totals
    
   
    int count = 0;
    
    //for (int i = 0; i < index; i++){
     //   cout << data[i] <<endl;
    //}
    
    //load names into array
    for (int i = 0; i < index; i = i+3){
        names[count] = data[i];
        //cout << names[count] << endl;
        count++;
    }
    
    count = 0;
    
    //load rates into array
    for (int i = 1; i < index; i = i+3){
        rates[count] = stod(data[i]);
        //cout << rates[count] << endl;
        count++;
    }
    
    count = 0;
    
    //load hours into array
    for (int i = 2; i < index; i = i+3){
        hours[count] = stoi(data[i]);
        //cout << hours[count] << endl;
        count++;
    }
    
    
    
    //display report
    
    float regHours, otHours;
    float regPay, otPay, grossPay;
    float otRate;
    int W = 14;
    float totRegPay = 0;
    float totOtPay = 0;
    float totGrossPay = 0;
    
    cout << "Name        " << setw(W)
         << "Pay Rate    " << setw(W)
         << "Hours       " << setw(W)
         << "Regular Pay " << setw(W)
         << "Overtime Pay" << setw(W)
         << "Gross Pay   " <<endl;
   
    
    for(int i = 0; i < count; i++){
        //check for overtime
        if (hours[i] >= 40){
            regHours = 40;
            otHours = hours[i] - 40;
        }
        else {
            regHours = hours[i];
            otHours = 0;
        }
        
        //calculate Check
        otRate = rates[i] * 1.5;
        regPay = rates[i] * regHours;
        otPay = otHours * otRate;
        grossPay = regPay + otPay;
        
        //add to total
        totRegPay += regPay;
        totGrossPay += grossPay;
        totOtPay += otPay;
        
        cout << names[i] << setw(W) << rates[i] << setw(W)  << hours[i] << setw(W)  << regPay <<  setw(W)  << otPay << setw(W) << grossPay << endl;
    }
    
    //display total pay
    cout << "Total Regular Pay: $" << totRegPay << endl;
    cout << "Total Overtime Pay: $" << totOtPay << endl;
    cout << "Total Gross Pay: $" << totGrossPay << endl;
    
    
    return 0;
}

/*
 output
 
 Name           Pay Rate	Hours	Regular Pay	Overtime Pay	Gross Pay
 Calloway,G.    16          40      640         0               640
 Hanson,P.      15          48      600         180             780
 Lasard,D.      16.5        35      577.5       0               577.5
 Stillman,W.    18          50      720         270             990
 
 Total Regular Pay: $2537.5
 Total Overtime Pay: $450
 Total Gross Pay: $2987.5
 Program ended with exit code: 0
 */
