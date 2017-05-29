//
//  main.cpp
//  Lab 09 Number 04
//  Page 738
//
//  Created by Tiffany Montgomery on 11/28/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct employee{
    vector<string> attributes = {"Number", "Name", "Rate", "Hours"};
    int number;
    string name;
    float rate;
    int hours;
};

int main() {
    employee payroll[6];
    float total_pay = 0;
    
    //load payroll
    for(int i = 0; i < 6; i++){
        cout << "Enter Employee " << i+1 << " Name: " << endl;
        cin >> payroll[i].name;
        
        cout << "Enter Employee " << i+1 << " Number: " << endl;
        cin >> payroll[i].number;
        
        cout << "Enter Employee " << i+1 << " Rate: " << endl;
        cin >> payroll[i].rate;
        
        cout << "Enter Employee " << i+1 << " Hours: " << endl;
        cin >> payroll[i].hours;
    }
    
    //print payroll
    cout << "Number\t" << "Name\t" << "Rate\t" << "Hours\t" << "Gross Pay (Dollars)" << endl;
    
    for (int i = 0; i < 6; i++){
        float gross_pay = payroll[i].rate * payroll[i].hours;
        total_pay += gross_pay;
        cout << payroll[i].number << "\t"
            << payroll[i].name << "\t"
            << payroll[i].rate << "\t"
            << payroll[i].hours << "\t"
            << gross_pay << endl <<endl;
        
    }
    
    cout << "Total Pay: $" << total_pay << endl;
    return 0;
}

/*
 output
 
 Enter Employee 1 Name:
 Jones
 Enter Employee 1 Number:
 3462
 Enter Employee 1 Rate:
 14.62
 Enter Employee 1 Hours:
 40
 Enter Employee 2 Name:
 Robbins
 Enter Employee 2 Number:
 6793
 Enter Employee 2 Rate:
 15.83
 Enter Employee 2 Hours:
 38
 Enter Employee 3 Name:
 Smith
 Enter Employee 3 Number:
 6985
 Enter Employee 3 Rate:
 15.22
 Enter Employee 3 Hours:
 45
 Enter Employee 4 Name:
 Swain
 Enter Employee 4 Number:
 7834
 Enter Employee 4 Rate:
 16.89
 Enter Employee 4 Hours:
 40
 Enter Employee 5 Name:
 Timmins
 Enter Employee 5 Number:
 8867
 Enter Employee 5 Rate:
 16.43
 Enter Employee 5 Hours:
 35
 Enter Employee 6 Name:
 9002
 Enter Employee 6 Number:
 Williams
 Enter Employee 6 Rate:
 14.75
 Enter Employee 6 Hours:
 42
 
 Number	Name	Rate	Hours	Gross Pay (Dollars)
 3462	Jones	14.62	40	584.8
 
 6793	Robbins	15.83	38	601.54
 
 6985	Smith	15.22	45	684.9
 
 7834	Swain	16.89	40	675.6
 
 8867	Timmins	16.43	35	575.05
 
 9002	Williams	14.75	42	619.5
 
 Total Pay: $3741.39
 Program ended with exit code: 0
 
 */
