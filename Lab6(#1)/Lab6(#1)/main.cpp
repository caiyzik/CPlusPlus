//
//  main.cpp
//  Lab6(#1)
//
//  Created by Tiffany Montgomery on 10/23/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>

/*
 Page 456 #1
 Create the following functions
 
 char convertGrade(double); - Takes one grade and
 sends back corresponding letter grade.
 
 int loadGrades(double []); - Loads grades and
 returns number loaded.
 
 double getSum(double [], int); - adds up all grades
 and returns.
 
 Enter a Negative Number to Quit
 Enter Grade #1: 67
 Enter Grade #2: 95
 Enter Grade #3: 85
 Enter Grade #4: 79
 Enter Grade #5: 84
 Enter Grade #6: 99
 Enter Grade #7: 80
 Enter Grade #8: -1
 Loaded 7 Grades...
 
 Sum 589.0
 Average 84.1
 
 Grades...
 * 67.0 D
 95.0 A
 85.0 B
 * 79.0 C
 * 84.0 B
 99.0 A
 * 80.0 B
 Press any key to continue . . .
 */

int loadGrades(double grades[]){
    int counter = 1;
    double input = 0;
    
    while (input >= 0){
        cout << "Enter Grade #" << counter <<": "<< endl();
        cin >> input;
        grades[counter-1] = input;
        counter++;
    }
    
    return counter;
}

int main() {
    double grades[10];
    cout << loadGrades(grades);
    
    return 0;
}
