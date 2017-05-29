//
//  main.cpp
//  Chapter 9 Class Notes
//
//  Created by Tiffany Montgomery on 11/28/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>
#include <ctime>
#include "better_clock.h"

using namespace std;

int main() {
    
    /*
     review of random numbers
    srand(time(NULL));
    int value = rand() % 1000 + 1;
     */
    
    better_clock c(12,6);
    c.setHour(17);
    c.setMinute(5);
    c.printStandard();
    
    better_clock cis2485(19, 45);
    cis2485.printStandard();
    cis2485.addTime(1, 90);
    cis2485.printStandard();
    
    better_clock rogueOne(19, 30);
    better_clock runningTime(2, 19);
    
    rogueOne.addTime(runningTime);
    rogueOne.printStandard();
    
    better_clock c2;
    
    for (int i = 0; i < 60 * 24; i++){
        c.printStandard();
        cout << endl;
        
        c2++;
    }
    return 0;
}
 