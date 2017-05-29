//
//  main.cpp
//  Structures Notes
//
//  Created by Tiffany Montgomery on 11/21/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

/*
 Structures....
 - What's the difference between these and classes?
 - Abstract data types
 
 Board Examples
 
 struct player{
    int points;
    int rebounds;
    int assists;
    string name;
 };
 
 --> in main
 player p;
 p.name = "Lebron James";
 etc...
 
 - You can't "print" the player...
 
 */

#include <iostream>

using namespace std;

struct player{
    string name;
    int assists;
    int points;
    int rebounds; 
    
};

int main(){
    player p;
    p.assists = 7;
    
    return 0;
}
