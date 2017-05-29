//
//  robot.h
//  Final Practice
//
//  Created by Tiffany Montgomery on 12/12/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#ifndef robot_h
#define robot_h


#endif /* robot_h */

using namespace std;

class robot{
public:
    robot(string = "");
    string name;
    int motors;
    void printMotors();
    int getPrivNums();
    void setMotors(int);
    
private:
    string private_stuff;
    int priv_nums;
};

robot::robot(string n){
    name = n;
}

void robot::printMotors(){
    cout << motors;
}

void robot::setMotors(int i){
    motors = i;
}

int robot::getPrivNums(){
    return priv_nums;
}