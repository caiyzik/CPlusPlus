//
//  main.cpp
//  Lab 08
//
//  Created by Tiffany Montgomery on 11/18/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

/*
Lab 08 Prompt
Start your program by loading the words into your vector. 
Then begin a loop that allows the user to enter in a word to search. 
Call the sequential search, displaying the amount of comparisons until the user enters a “0”. 
After this, sort the array 
and then do the same lookup, except this time call the binary search function, also showing the amount of comparisons.
 */

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;


//function prototypes
void loadWords(vector<string>&);
int sequentialSearch(vector<string>&, string, int&);
void selectionSort(vector<string>&);
int binarySearch(vector<string>&, string, int&);

int main() {
    //initialize variables
    vector<string> words;
    loadWords(words);
    string target;
    int count= 0;
    
    cout << "Enter 0 to quit." << endl;
    
    //begin sequential search
    while (target != "0"){
        cout << "Enter target for sequential search (ALL CAPS): " << endl;
        cin >> target;
        int num = sequentialSearch(words, target, count);
        cout << "Comparisions Made: " << num << endl;
    }
    
    //sort the vector
    selectionSort(words);
    
    //reset sentinal
    target = "1";
    
    //begin binary search
    while (target != "0"){
        cout << "Enter target for binary search (ALL CAPS): " << endl;
        cin >> target;
        int num = binarySearch(words, target, count);
        cout << "Comparisions Made: " << count << endl;
    }
    
    return 0;
}

void loadWords(vector<string>& words){
    /*This will load the unsorted words (unsortedBog.dat) from the file into your
     vector of strings.*/
    
    string filename = "unsortedBOG.DAT";
    ifstream infile;
    int index = 0;
    string item;
    
    infile.open(filename);
    
    if (!infile){
        //no file exists
        cout << "No File Found..." << endl;
    }
    
   else{
        //read from the file
        
        do{
            infile >> item;
            words.push_back(item);
            index++;
            
        } while(!infile.eof());
       
       cout << "Dictionary Successfully Read" << endl;
       cout << "Loaded " << index << " Words" << endl << endl;
        
   }
    
}

int sequentialSearch(vector<string>& words, string targetWord, int& count){
    //This will perform the sequential search and keep track of how many comparisons have happened.
    
    for (int i = 0; i < words.size(); i++){
            if (words[i] == targetWord)
                return i;
        }
    //doesn't not locate index
    if (targetWord == "0"){
        cout << "Sequential Search Completed." << endl;
    }
    else{
        cout << "Word not located." << endl;
    }
    return -1;
}

void selectionSort(vector<string>& words){
    //This will perform the selection sort on the words.
    
    string temp;
    int lowIndex;
    for (int i = 0; i < words.size()-1; i++){
        lowIndex = i;
        for(int j = i + 1; j < words.size(); j++){
            if (words[j] < words[lowIndex]){
                lowIndex = j;
            }
        }
        
        //swap i-th position with lowIndex position
        temp = words[lowIndex];
        words[lowIndex] = words[i];
        words[i] = temp;
        
    }
}

int binarySearch(vector<string>& words, string targetWord, int& count) {
    //This will perform the binary search and keep track of how many comparisons have happened.
    
    long low, high, mid;
    //Remember: [low, high); low is going to on what you're looking for, high is going to be one past it

    low  = 0;
    high = int(words.size());
    
    if(targetWord == "0"){
        cout << "Binary Search Completed." << endl;
        count = 0;
        return -1;
    }
    
    while (low < high){
        mid = (high + low)/2;
        if (words[mid] == targetWord){
            return int(mid);
        }
        else if (targetWord < words[mid]){
            high = mid;
        }
        else{
            low = mid + 1; //you've already searched mid so skip it
        }
        count++;
    }
    
    return -1;
}

/*
 OUTPUT
 
 Dictionary Successfully Read
 Loaded 3536 Words
 
 Enter 0 to quit.
 Enter target for sequential search (ALL CAPS):
 SEVEN
 Comparisions Made: 3036
 Enter target for sequential search (ALL CAPS):
 FOUR
 Comparisions Made: 2022
 Enter target for sequential search (ALL CAPS):
 0
 Sequential Search Completed.
 Comparisions Made: -1
 Enter target for binary search (ALL CAPS):
 SEVEN
 Comparisions Made: 8
 Enter target for binary search (ALL CAPS):
 FOUR
 Comparisions Made: 19
 Enter target for binary search (ALL CAPS):
 O
 Comparisions Made: 31
 Enter target for binary search (ALL CAPS):
 0
 Binary Search Completed.
 Comparisions Made: 0
 Program ended with exit code: 0
 
 */
