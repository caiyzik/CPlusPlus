//
//  Final Exam Practice.cpp
//  
//
//  Created by Tiffany Montgomery on 12/12/16.
//
//

#include "Final Exam Practice.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct groceryItem {
    string name;
    int daysUntilExp;
};

groceryItem apple;
apple.name = "apple";

int main(){
    string filename = "numbers.txt";
    ofstream outfile;
    ifstream infile;
    int nums[10];
    int item;
    int used = 0;
    
   
    
    outfile.open(filename);
    for(int i = 0; i < 10; i++){
        outfile << i;
    }
    outfile.close();
    
    infile.open(filename);
    if (!infile){
        cout << "This file does not exist." << endl;
    }
    else {
        while (!infile.eof()){
            infile >> item;
            nums[used] = item;
            used++;
        }
    }
    infile.close();
    
    for (int j = 0; j < used; j++){
        cout << nums[used];
    }
    
    return 0;
}

