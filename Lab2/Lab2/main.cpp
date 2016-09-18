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
    
    return height = ladder_length * sin(angle*M_PI/180);
    
    
}

void problem7() {
    // pg 151
    double a, b, c, x;
    
    cout << "Enter value for a:";
    cin >> a;
    
    cout << "Enter value for b:";
    cin >> b;
    
    cout << "Enter value for c:";
    cin >> c;
    
    cout << "Enter value for x:";
    cin >> x;
    
    cout << "a \t b \t \c \t x \t Polynomial Value" <<endl;
    cout << a << b << c << x << endl;
    
    //Am I supposed to display the whole chart or just the outputs?
    //Would it be easier to use... arrays?
    
    
    
}

int problem4() {
    // pg 173
    
    int B;
    double t;
   
    
    cout << "Enter the time elapsed in hours: ";
    cin >> t;
    
    return  B = 300000*exp(-0.032*t);
    
}

int main(int argc, const char * argv[]) {
    
    int problem_num;
    string ask;
    ask = "Y";
    while (ask == "Y") {
        
        cout << "Enter Problem number" << endl;
        cin >> problem_num;
        
        switch (problem_num) {
            case 6:
                cout << "Answer 1\n";
                cout << problem6();
                break;
            case 7:
                cout << "Answer 2\n";
                problem7();
                break;
            case 4:
                cout << "Answer 4\n";
                problem4();
                break;
            default:
                break;
                
        }
        
        cout << "Would you like to try another problem? (Y/N) " <<endl;
        cin >> ask;
    }
}
