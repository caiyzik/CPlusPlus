//
//  main.cpp
//  Lab 3
//
//  Created by Tiffany Montgomery on 9/25/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <map>

using namespace std;

void problem5(){
    //p228
    int type;
    double inertia;
    
    cout << "Enter Beam Type:" << endl;
    cout << "1 for I-beam \n2 for Rectangular \n3 for Cylindrical" << endl;
    cin >> type;
    
    while (type < 1 || type > 3){
        cout << "Error! The type number must be 1, 2, or 3." << endl;
        cout << "Please Try Again. Enter Beam Type: " << endl;
        cin >> type;
    }
    
    if(type == 1){
        double B, H, h, b;
        cout << "Enter B: ";
        cin >> B;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter H: ";
        cin >> H;
        cout << "Enter h: ";
        cin >>h;
        
        if (H <= h){
            cout << "Error! Inner beam height cannot be greater than or equal to outer beam height. Please try again." << endl;
            cout << "Enter H: " << endl;
            cin >> H;
            cout << "Enter h: " << endl;
            cin >> h;
        }
        
        if (B <= b){
            cout << "Error! Inner beam width cannot be greater than or equal to total beam width. Please try again." << endl;
            cout << "Enter B: " << endl;
            cin >> B;
            cout << "Enter b: " << endl;
            cin >> b;
        }
        
        inertia = (B*pow(H,3) - b*pow(h,3) )/12;
    }
    
    else if (type == 2){
        double b,h;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter h: ";
        cin >> h;
        
        inertia = b*pow(h,3)/12;
    }
    
    else {
        double radius;
        cout << "Enter Radius: ";
        cin >> radius;
        
        inertia = M_PI * pow(radius, 4)/4;
    }
    
    
    cout << "Rectangluar Moment of Intertia: " << inertia << endl;
    
    //output
    
    //Input for beam type = 0 or 4
    //Error! The type number must be 1, 2, or 3.
    
    // Type 1
    //a) Input Values for B, b, H, h = (7.3, 2, 4, 1.5)
    //Rectangular Moment of Inertia: 38.3708
    //b) Input Values for B, b, H, h = (8, 9, 4, 1.5)
    //Error! Inner beam width cannot be greater than or equal to total beam width. Please try again.
    
    //Type 2
    //a) Input values for b, h = (5.6, 3.4) Rectangular Moment of Inertia = 18.3419
    //b) Input values for b, h = (5, 9) Rectangular Moment of Inertia = 303.75
    
    //Type 3
    //a) Input for radius = .554 Rectangular Moment of Inertia: 0.0739825
    //b) Input for radius = 7.2 Rectangular Moment of Inertia: 2110.67
    
    
}

void problem10() {
    //p231
    
    char grade1, grade2;
    double credHr1, credHr2, GPA;
    
    cout << "Enter Grade Letter for Class 1: " << endl;
    cin >> grade1;
    cout << "Enter Credit Hours for Class 1: " << endl;
    cin >> credHr1;
    cout << "Enter Grade Letter for Class 2: " << endl;
    cin >> grade2;
    cout << "Enter Credit Hours for Class 2: " << endl;
    cin >> credHr2;
    
    map<char, double> grade2pts;
    
    grade2pts['A'] = 4.0;
    grade2pts['B'] = 3.0;
    grade2pts['C'] = 2.0;
    grade2pts['D'] = 1.0;
    grade2pts['F'] = 0;
    
    if (grade2pts[grade1] > grade2pts[grade2]){
        cout << "\nClass 2 Grade: " << grade2 << endl;
        cout << "Class 2 Credit Hours: " << credHr2 << endl;
        cout << "Class 1 Grade: " << grade1 << endl;
        cout << "Class 1 Credit Hours: " << credHr1 << endl;
    }
    else{
        cout << "\nClass 1 Grade: " << grade1 << endl;
        cout << "Class 1 Credit Hours: " << credHr1 << endl;
        cout << "Class 2 Grade: " << grade2 << endl;
        cout << "Class 2 Credit Hours: " << credHr2 << endl;
    }
    
    GPA = (grade2pts[grade1] + grade2pts[grade2])/ 2;
    
    cout << "GPA: " << GPA << endl;
    
    if(GPA < 2.0){
        cout << "\nWarning: GPA is below 2.0" << endl;
    }
    else if (GPA >= 3.5){
        cout << "\nCongradulations! Your GPA is greater than or equal to 3.5!" << endl;
    }
    
    //Test 1 Inputs (Grade 1 is greater than Grade 2 and GPZ above 3)
    //Class 1 Grade and Credits = A, 6, Class 2 Grade and Credits = B, 3
    
    //output
    //Class 2 Grade: B
    //Class 2 Credit Hours: 3
    //Class 1 Grade: A
    //Class 1 Credit Hours: 6
    //GPA: 3.5
    //Congradulations! Your GPA is greater than or equal to 3.5!
    
    //Test 2 Inputs (Grade 1 is less than Grade 2 and GPA below 2)
    //Class 1 Grade and Credits = F, 3  Class 2 Grade and Credits = C, 6
    
    //output
    //Class 1 Grade: F
    //Class 1 Credit Hours: 3
    //Class 2 Grade: C
    //Class 2 Credit Hours: 6
    //GPA: 1
    //Warning: GPA is below 2.0
    
    
    
}

int main() {
    bool SooHacked = true;
    float exam1grade;
    
    if (SooHacked) {
        exam1grade = 100;
    }
    
    cout << "Robert's Calc Grade: " << exam1grade;
    
    int problem_num;
    string ask;
    ask = "Y";
    while (ask == "Y") {
        
        cout << "Enter Problem number: " << endl;
        cin >> problem_num;
        
        switch (problem_num) {
            case 5:
                problem5();
                break;
            case 10:
                problem10();
                break;
            default:
                break;
        }
        cout << "\nWould you like to try another problem? (Y/N) " <<endl;
        cin >> ask;
    }
}
