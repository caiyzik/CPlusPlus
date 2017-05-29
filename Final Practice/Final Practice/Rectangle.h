//
//  Rectangle.h
//  Final Practice
//
//  Created by Tiffany Montgomery on 12/12/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#ifndef Rectangle_h
#define Rectangle_h


#endif /* Rectangle_h */

#include <iomanip>

using namespace std;

class Rectangle{
public:
    Rectangle(double = 1.0, double = 1.0);
    void showData();
    void setData(double, double);
    void perimeter();
    void area();
    
private:
    double length;
    double width;
    
};

Rectangle::Rectangle(double l, double w){
    length = l;
    width = w;
}

void Rectangle::showData(){
    cout << "Length: " << length;
    cout << "Width: " << width;
}

void Rectangle::setData(double l, double w){
    length = l;
    width = w;
}

void Rectangle::perimeter(){
    cout << 2*(length + width);
}

void Rectangle::area(){
    cout << length*width;
}