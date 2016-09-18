//
//  main.cpp
//  Lab 1
//
//  Created by Tiffany Montgomery on 8/29/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

float problem1(){
    //calculate area of a triangle
    float height, base, area;
    height = 1.5; //meters
    base = 1; //meters
    return area = 0.5 * base * height;
    
    //output
    //b
    //2.5375
    //a
    //0.75
    
}

double problem2(){
    //calculate volume of a sphere
    double radius = 1.67; //inches
    double volume;
    return volume = (4.0 * M_PI * pow(radius, 3.0) ) / 3.0;
    
    //output
    //a
    //33.5103
    //b
    //19.5091
    
    
}

float problem4(){
    //calculate sum of integers 1 to 100
    int nums, first_num, difference, sum;
    nums = 1000 - 100 + 1;
    first_num = 100;
    difference = 1;
    return sum = (nums/2) * (2 * first_num + (nums - 1) * difference);
    
    //output
    //a
    //5050
    //b
    //494550
    
    //correct output b) 495550
}

float problem9(){
    //calculate max load to be placed at end on wooden beam
    float max_weight; //lbs
    float stress; //lbs/in^2
    float inertia; //in^4
    float distance; //in
    float half_height; //in
    
    stress = 3000; //lbs/in^2
    inertia = 54;
    distance = 8*12;
    half_height = 3;
    
    return max_weight = (stress * inertia) / (distance * half_height);
    
    //output
    //a
    //2000.62
    //b
    //843.75
    
    //problems: didn't convert feet to inches
    
    //new output
    //a) 166.719 Why?
    //b) 562.5
}

int main() {
    
    int problem_num;
    string ask;
    ask = "Y";
    while (ask == "Y") {
     
        cout << "Enter Problem number" << endl;
        cin >> problem_num;
    
        switch (problem_num) {
            case 1:
                cout << "Answer 1\n";
                cout << problem1();
                break;
            case 2:
                cout << "Answer 2\n";
                cout << problem2();
                break;
            case 4:
                cout << "Answer 4\n";
                cout << problem4();
                break;
            case 9:
                cout << "Answer 9\n";
                cout << problem9();
                break;
            default:
                break;
    
        }

        cout << "Would you like to try another problem? (Y/N) " <<endl;
        cin >> ask;
    }
    return 0;
}
