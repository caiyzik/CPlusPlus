//
//  main.cpp
//  More In class examples
//
//  Created by Tiffany Montgomery on 10/17/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>
#include <ctime>

using namespace std;

//Start Debugging by running program with breakpoint
//F6 - Step Over
//F7 - Step Into

int loadArray(int[], int);
void printArray(int[], int);


int main(int argc, const char * argv[]) {
    const int SIZE = 10;
    int myArray[SIZE];
    int numUsed = 0; //tells you how many spaces are used and where the index of the next open spot is
    
    // seed the random number generator
    //srand((time(NULL))
    
    numUsed = loadArray(myArray, SIZE);
    cout << "Loaded " << numUsed << "numbers..." << endl;
    
    printArray(myArray, numUsed);
    
    
    return 0;
}

int loadArray(int arr[], int size){
    //will fill with random numbers, until full or a '0' randomly comes up
    int used = 0;
    int randValue = rand() % size; //possible values [0,size)
    
    while (randValue !=0 && used < size){
        arr[used] = randValue;
        used++;
        randValue = rand() % size;
    }
    
    return used;
}

void printArray(int arr[], int size){
    for (int i=0; i < size; i++){
        cout << "Array [" << i << "] = " << arr[i] <<endl;
    }
}