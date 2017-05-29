//
//  main.cpp
//  Lab6-Number1
//
//  Created by Tiffany Montgomery on 10/23/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int loadGrades(double grades[]){
    int counter = 0;
    double input = 0;
    
    cout << "Enter a negative number to quit" << endl;
    
    while (input >= 0){
        cout << "Enter Grade #" << counter+1 <<": "<< endl;
        cin >> input;
        if (input >= 0){
            grades[counter] = input;
            counter++;
        }
    }
    
    return counter;
}

double getSum(double grades[], int total){
    double sum;
    
    for (int i = 0; i < total; i++){
        sum += grades[i];
    }
    
    return sum;
}

char convertGrade(double grade){
    if (grade >= 90 && grade <= 100){
        return 'A';
    }
    else if (grade >= 80 && grade < 90){
        return 'B';
    }
    else if (grade >= 70 && grade < 80){
        return 'C';
    }
    else if (grade >= 60 && grade < 70){
        return 'D';
    }
    else if (grade < 60){
        return 'F';
    }
    else{
        return -1;
    }
}

int main() {
    double grades[10];
    int gradesLoaded = loadGrades(grades);
    cout << "Loaded " << gradesLoaded << " grades..." << endl;
    
    
    double grade_Sum = getSum(grades, gradesLoaded);
    double average = grade_Sum/ gradesLoaded;
    
    cout << fixed << setprecision(1) << endl;
    
    cout << "Sum: " << grade_Sum << endl;
    cout << "Average: :" << average << endl;
    
    char letterGrade;
    
    cout << "Grades" <<endl;
    
    for(int i = 0; i < gradesLoaded; i++){
        letterGrade = convertGrade(grades[i]);
        if(grades[i] < average){
            cout << "*" << grades[i] << "\t" << letterGrade << endl;
        }
        else{
            cout << grades[i] << "\t" << letterGrade << endl;
        }
    }
    
    /*
     Output
     
     Enter a negative number to quit
     Enter Grade #1:
     67
     Enter Grade #2:
     95
     Enter Grade #3:
     85
     Enter Grade #4:
     79
     Enter Grade #5:
     84
     Enter Grade #6:
     99
     Enter Grade #7:
     80
     Enter Grade #8:
     -1
     Loaded 7 grades...
     
     Sum: 589.0
     Average: :84.1
     Grades
     *67.0	D
     95.0	A
     85.0	B
     *79.0	C
     *84.0	B
     99.0	A
     *80.0	B
     Program ended with exit code: 0
     */
    
    
    return 0;
}