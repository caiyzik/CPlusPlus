//
//  better_clock.h
//  Chapter 9 Class Notes
//
//  Created by Tiffany Montgomery on 11/28/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#ifndef better_clock_h
#define better_clock_h


#endif /* better_clock_h */

#include <iostream>

using namespace std;

//class declaration
class better_clock {
public:
    
    //constructor
    better_clock(int = 0, int = 0);
    
    //methods
    void setHour(int);
    void setMinute(int);
    int getHour();
    int getMinute() {return minute;} ; //better to use inline functions for one line functions
    void printStandard();
    void addTime(int, int);
    void addTime(int); // you can have the same function but with different parameters for flexibility
    void addTime(better_clock);
    
    //overloaded operator
    void operator++(int);
    
private:
    int hour;
    int minute;
};


//class implementation

//constructor
better_clock::better_clock(int h, int m){
    setHour(h);
    setMinute(m);
}

void better_clock::operator++(int){
    addTime(1);
}

void better_clock::setHour(int h){
    if (h < 0 || h > 23){
        throw "Invalid Hour";
    }
    else{
        hour = h;
    }
}

void better_clock::setMinute(int m){
    if (m < 0 || m > 59){
        throw "Invalid Minute";
    } else {
        minute = m;
    }
}

void better_clock::printStandard(){
    if (hour == 0){
        cout << "12";
    } else if (hour < 13){
        cout << hour;
    } else {
        cout << (hour-12);
    }
    cout << ":";
    if (minute < 10){
        cout << "0";
    }
    cout << minute;
    
    if (hour >= 12){
        cout << "PM" << endl;
    } else {
        cout << "AM" << endl;
    }
}

int better_clock::getHour(){
    return hour;
}

void better_clock::addTime(int m){
    minute += m;
    int xHours = minute / 60;
    minute %= 60;
    hour = (hour + xHours) % 24;
}

void better_clock::addTime(int h, int m){
    addTime(h*60 + m);
}

void better_clock::addTime(better_clock c){
    int m = c.getMinute(); //you can also just call the clock private variables directly for some reason
    int h = c.getHour(); //but that's dumb so I did this instead
    
    addTime(h, m);
    
}


