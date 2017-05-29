//
//  main.cpp
//  Final Practice
//
//  Created by Tiffany Montgomery on 12/12/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "robot.h"
#include "Rectangle.h"

using namespace std;

struct groceryItem {
    string name;
    int daysUntilExp;
};

int main() {
    string filename = "numbers.txt";
    ofstream outfile;
    ifstream infile;
    int nums[10];
    int item;
    int used = 0;
    
    outfile.open(filename);
    for(int i = 0; i < 10; i++){
        outfile << i << endl;
    }
    outfile.close();
        
    infile.open(filename);
    if (!infile){
        cout << "This file does not exist." << endl;
    }
    else {
        infile >> item;
        while (!infile.eof()){
            cout << "used: " << used << " item: " << item << endl;
            
            nums[used] = item;
            used++;
            infile >> item;
        }
    }
    infile.close();
    
    //cout << nums[used] << endl;
    for (int j = 0; j < used; j++){
        cout << nums[j] << endl;
    }
    
    /*groceryItem apple;
    apple.name = "apple";
    
    cout << apple.name <<endl;
    
    robot r;
    r.motors = 6;
    
    r.printMotors();
    
    Rectangle box = Rectangle();
    
    box.showData();
    
    box.perimeter(); */
    
    
    return 0;

}
