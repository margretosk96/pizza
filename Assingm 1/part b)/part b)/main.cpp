//
//  main.cpp
//  part b)
//
//  Created by Thelma Rut Jóhannsdóttir on 28/11/2017.
//  Copyright © 2017 Thelma Rut Jóhannsdóttir. All rights reserved.
//
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  
    string str;
    ifstream fin;
    fin.open("NewDataTextFile.txt");
    if(fin.is_open()) {
        //*while(!fin.eof()){
        
            fin >> str;
            cout << str << endl;
        
        }
        //*cout << endl << endl;
        cout << fin.eof() << endl;
    
    
    else {
    cout << "File not open" << endl;

}
    ofstream fout;
    fout.open("NewDataTextFile.txt", ios::app);
    fout << str << endl;
    fin.close();
    
    
    
    return 0;
}
