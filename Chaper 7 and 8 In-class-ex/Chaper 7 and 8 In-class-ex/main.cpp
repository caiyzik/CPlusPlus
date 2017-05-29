//
//  main.cpp
//  Chaper 7 and 8 In-class-ex
//
//  Created by Tiffany Montgomery on 10/24/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//function prototypes
int addItems(string[], int);
void printItems(string[], int);
void saveItems(string[], int);
int loadItems(string []);

int main() {
    
    const int MAX = 100;
    string list[MAX];
    int numItems = 0;
    
    numItems = addItems(list, numItems);
    cout << "Number of Items: " << numItems << endl;
    
    printItems(list, numItems);
    saveItems(list, numItems);
    
    return 0;
}

int addItems(string arr[], int used){
    //let user add shopping items until they enter 'exit'
    //return the updated number of items
    
    string newItem;
    
    cout << "Enter New Item ('exit' to quit): " << endl;
    cin >> newItem;
    
    while (newItem != "exit"){
        //add item to array
        arr[used] = newItem;
        used++;
        
        cout << "Enter New Item ('exit' to quit): " << endl;
        cin >> newItem;
    }
    
    return used;
}

void printItems(string arr[], int used){
    for (int i = 0; i < used; i++){
        cout << "Item # " << i+1 << " " << arr[i] << endl;
    }
}

void saveItems(string arr[], int used){
    
    string fileName = "shoppingList.txt";
    ofstream outFile;
    
    //open file
    outFile.open(fileName);
    
    //loop and write contents of array to file
    for (int i = 0; i < used; i++){
        outFile << arr[i] << endl;
    }
    
    //close the file
    outFile.close();
}

int loadItems(string arr[]){
    string fileName = "shoppingList.txt";
    string item;
    ifstream inFile;
    int used = 0;
    
    //open file
    inFile.open(fileName);
    
    //check if it opened
    if (!inFile){
        //no file exists
        cout << "No File Found ..." << endl;
        cout << "New Shopping List Created ..." << endl;
    }else{
        //file does exist
        inFile >> item;
        
        while(!inFile.eof()){
            //put it in list
            arr[used] = item;
            used++;
            
            inFile >> item;
        }
        
        inFile.close();
    }
}
