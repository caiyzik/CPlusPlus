//
//  main.cpp
//  14)
//
//  Created by Tiffany Montgomery on 11/14/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

/*Novemeber 14, 2016
 Array Qs
 Vectors
 Seraching and Sorting
 */

#include <iostream>

using namespace std;

/* BOARD EXAMPLES

//sequential search example
int seqSearch(int arr[], int size, int target){
    for (int i = 0; i < size; i++){
        if (arr[i] == target)
            return i;
    }
    //doesn't not locate index
    return -1;
}

//binary search
int binSearch(int arr[], int size, int target){
    int low, high, mid;
    //Remember: [low, high); low is going to on what you're looking for, high is going to be one past it
    low  = 0;
    high = size;
    while (low < high){
        mid = (high + low)/2;
        if (arr[mid] == target){
            return mid;
        }
        else if (target < arr[mid]){
            high = mid;
        }
        else{
            low = mid + 1; //you've already searched mid so skip it
        }
    }
    return -1;
    
}

//selection sort
void selSort(int arr[], int size){
    int temp, lowIndex;
    for (int i = 0; i < size-1; i++){
        lowIndex = i;
        for (int j = i + 1; j < size; j++){
            if (arr[j] < arr[lowIndex]){
                lowIndex = j;
            }
            temp = arr[lowIndex];
            arr[lowIndex] = arr[i];
            arr[i] = temp;
        }
    }
}
 
*/

//function prototypes
void selSort(int[], int);
void printArray(int[], int);

int main(int argc, const char * argv[]) {
    
    /*
     main code that goes with the sequential search example
     int arr[] = {9,4,7,63,2};
     int index;
     index = seqSearch(arr, 6, 10);
     if (index != -1){
        cout << arr[index];
     */
    
    /*
     int sortedARR[] = {9, 16, 21, 36, 44, 56, 71, 88, 92};
     */
    
    int myArr[7] = {29, 13, 34, 6, 17, 14, 21};
    
    selSort(myArr, 7);
    printArray(myArr, 7);
    
    return 0;
}

void selSort(int arr[], int size){
    int temp, lowIndex;
    for (int i = 0; i < size-1; i++){
        lowIndex = i;
        for(int j = i + 1; j < size; j++){
            if (arr[j] < arr[lowIndex]){
                lowIndex = j;
            }
        }
        
        //swap i-th position with lowIndex position
        temp = arr[lowIndex];
        arr[lowIndex] = arr[i];
        arr[i] = temp;
        
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}


