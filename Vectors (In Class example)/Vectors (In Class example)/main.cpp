//
//  main.cpp
//  Vectors (In Class example)
//
//  Created by Tiffany Montgomery on 11/14/16.
//  Copyright © 2016 Tiffany Montgomery. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
    //don't do this all the time because they are slow (it doesn't scale)
    //can you create a language that has this type of structure as a default structure?
    
    vector<string> words;
    vector<int> v;
    string str;
    
    //open file
    
    /*
     
     complete at home
     
     inFile.open("words.txt");
    
    if (!inFile)*/
    
    cout << "Enter a word ('exit' to quit): ";
    getline(cin, str); //allows you to get the whole line of text instead of cin until it hits a space
    
    while (str != "exit"){
        words.push_back(str);
        
        cout << "Enter a word ('exit' to quit): ";
        getline(cin, str);
        
    }
    
    words.push_back("Hello");
    words.push_back("Where is this?");
    
    words.resize(7, "Intialize to this");
    
    cout << "Number of Elements" << words.size() << endl;
    
    for (int i = 0; i < words.size(); i++){
        cout << "Element [" << i << "] =" << words[i] <<endl;
    }
    
    while(!words.empty()){
        cout << words.back() << endl;
        words.pop_back();
    }

    return 0;
}

