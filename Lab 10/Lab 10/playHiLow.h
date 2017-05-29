//
//  playHiLow.h
//  Lab 10
//
//  Created by Tiffany Montgomery on 12/4/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#ifndef playHiLow_h
#define playHiLow_h


#endif /* playHiLow_h */

#include <iostream>

using namespace std;

/*
 Create a class called playHiLow
 - The class has one data member (target, the number to be guessed)
 - The constructor sets the target randomly in the range 1-1000
 - The member function makeGuess takes an integer, guess, and if it is
 correct is returns 0, if it is higher than the target it returns +1,
 if it is lower than the target is returns -1
 - The member function writeTarget just simply prints "The number is n"
 */

//class declaration

class playHiLow {
public:
    //constructor
    playHiLow();
    
    //methods
    int makeGuess(int);
    void writeTarget();
private:
    int target;
};

//class implementation

playHiLow::playHiLow(){
    srand(time(NULL));
    target = rand() % 1000 + 1;
   
}

int playHiLow::makeGuess(int num){
    if (num == target){
        return 0;
    } else if (num > target){
        return 1;
    } else {
        return -1;
    }
}

void playHiLow::writeTarget(){
    
    cout << "The number is " << target << endl;
    
}