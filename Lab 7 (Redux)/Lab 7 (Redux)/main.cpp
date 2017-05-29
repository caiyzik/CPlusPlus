//
//  main.cpp
//  Lab 7 (Number 9)
//
//  Created by Tiffany Montgomery on 10/30/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

/*Page 457 #9
 
 • Void loadData(arr, size)
 a. This function should load the student
 information from a file. Use the data in the
 problem to create a file called grades.dat
 • Void calculateGrades(arr, size)
 • Void printArray(arr, size)
 
 first grade average is arithmetic mean
 second grade average = 0.2*(grade1 + grade4) + 0.3*(grade2 + grade3)
 
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//function prototypes
void loadData(double[][7], int, int);
void calculateGrades(double[][7], int, int);
void printArray(double[][7], int, int);

int main() {
    int COLS = 7; //student number, four grades, 2 computed final grades
    int ROWS = 60;
    double gradeBook[ROWS][COLS];
    
    loadData(gradeBook, 2, 4);
    
    loadData(gradeBook, ROWS, COLS);
    calculateGrades(gradeBook, ROWS, COLS);
    //printArray(gradeBook, COLS, STUDENTS);
    
    return 0;
}

void loadData(double arr[][7], int rows, int cols){
    string fileName = "grades.txt";
    int item;
    ifstream inFile;
    int count = 0;
    int array[rows * cols];
    
    //open file
    inFile.open(fileName);
    
    //check if it opened
    if (!inFile){
        //no file exists
        cout << "No File Found ..." << endl;
    }else{
        //file does exist
        inFile >> item;
        
        while(!inFile.eof()){
            array[count] = item;
            count++;
            
            inFile >> item;
        }
        
        inFile.close();
    }
    
    //load data into 2D array
    int counter = 0;
    for (int i = 0; i < rows; i = i + 5){
        arr[i][0] = array[i];
        for (int j = 1; j < cols; j++){
            arr[i][j] = array[i + counter];
            counter++;
        }
        counter = 0;
    }
    
}
void calculate(double arr[][7], int rows, int cols){
    
}
void printArray(double arr[][7], int rows, int cols){
    
}