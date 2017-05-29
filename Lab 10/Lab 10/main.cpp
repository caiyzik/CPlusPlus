//
//  main.cpp
//  Lab 10
//
//  Created by Tiffany Montgomery on 12/4/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

/*
 - create an instance of playHiLow
 - set up a loop and give the user a chance to make a guess and then
 tell them either they got it right, too high or too low.
 - They win by finding it in 10 guesses or lose if they do not. Show
 the number if they don't find it.
 */

#include <iostream>
#include "playHiLow.h"

int main() {
    playHiLow game;
    int target, num;
    bool win = false;
    
    cout << "I'm thinking of a number between 1 and 1000" << endl;
    cout << "Can you figure it out in 10 guesses?" << endl;
    
    for (int i= 0; i < 10; i++){
        cout << "Enter Your Guess (#" << i+1 << "): " << endl;
        cin >> target;
        num = game.makeGuess(target);
        if (num == 0){
            cout << "Congradulations! You've guessed the number in 10 guesses!" << endl;
            win = true;
            break;
        } else if (num == 1) {
            cout << "Your guess is too high ... Try again." << endl;
        } else {
            cout << "Your guess is too low .. Try again." << endl;
        }
    }
    
    if (win == false){
        cout << "Sorry you didn't win!" << endl;
        game.writeTarget();
    }
    
    
    return 0;
}

/*
 
 output
 
 I'm thinking of a number between 1 and 1000
 Can you figure it out in 10 guesses?
 Enter Your Guess (#1):
 500
 Your guess is too low .. Try again.
 Enter Your Guess (#2):
 750
 Your guess is too low .. Try again.
 Enter Your Guess (#3):
 875
 Your guess is too low .. Try again.
 Enter Your Guess (#4):
 950
 Your guess is too low .. Try again.
 Enter Your Guess (#5):
 975
 Your guess is too low .. Try again.
 Enter Your Guess (#6):
 100
 Your guess is too low .. Try again.
 Enter Your Guess (#7):
 1000
 Your guess is too high ... Try again.
 Enter Your Guess (#8):
 990
 Your guess is too high ... Try again.
 Enter Your Guess (#9):
 984
 Your guess is too high ... Try again.
 Enter Your Guess (#10):
 970
 Your guess is too low .. Try again.
 Sorry you didn't win!
 The number is 982
 */
