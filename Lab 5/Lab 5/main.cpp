//
//  main.cpp
//  Lab 5
//
//  Created by Tiffany Montgomery on 10/15/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>
#include <cmath>


using namespace std;

void makeMilesTable(double start, double stop, double inc){
    //pg 380 #6
    
    double secondCol;
    
    int split = (start + stop)/2;
    
    cout << "Miles = Kilometers"<< endl;
    for (double i = start; i <= split; i = i + inc){
        secondCol = i - start + split +1;
        cout << i << "\t" << i*1.61 << "\t" << secondCol << "\t" << secondCol*1.61 << endl;
    }
    
}

int compareTriangleSides(int a, int b, int c){
    //pg 380 #7
    //beware of truncation
    
    double A, s;
    
    s = (a+b+c)/2;
    
    if (s*(s-a)*(s-b)*(s-c) < 0){
        A = -1;
    }
    else{
        A = sqrt(s*(s-a)*(s-b)*(s-c));
    }
    
    return A;
}

int getGCD(int a, int b){
    //pg 381 10
    
    int num1, num2, remainder, GCD;
    
    if(a > b){
        num1 = a;
        num2 = b;
    }
    else if(b > a){
        num1 = b;
        num2 = a;
    }else{
        GCD = a;
    }
    
    do{
        GCD = remainder;
        remainder = num1%num2;
        num1 = num2;
        num2 = remainder;
    } while(remainder != 0);

    
    return GCD;
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
                double start, end, inc;
                cout << "Enter Starting Mile: " << endl;
                cin >> start;
                cout << "Enter Final Mile: " << endl;
                cin >> end;
                cout << "Enter Increment: " << endl;
                cin >> inc;
                makeMilesTable(start,end,inc);
                break;
            case 7:
                int a, b, c;
                cout << "Enter First Side: " << endl;
                cin >> a;
                cout << "Enter Second Side: " << endl;
                cin >> b;
                cout << "Enter Thrid Side: " << endl;
                cin >> c;
                cout << compareTriangleSides(a,b,c) << endl;
                break;
            case 10:
                int num1, num2;
                cout << "Enter First Number: " << endl;
                cin >> num1;
                cout << "Enter Second Number: " << endl;
                cin >> num2;
                cout << getGCD(num1,num2) << endl;
                break;
            default:
                break;
                
        }
        
        cout << "Would you like to try another problem? (Y/N) " <<endl;
        cin >> ask;
    }
    return 0;
}
