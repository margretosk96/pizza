//
//  main.cpp
//  Assingm 1
//
//  Created by Margrét ósk Rannversdóttir on 27/11/2017.
//  Copyright © 2017 Margrét ósk Rannversdóttir. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


    
    int main()
        {
            
            string str;
            ifstream fin;
            bool read = true;
            char character;
            int counter = 1;
            
            fin.open("LyricsToSong.txt");
            if(fin.is_open()) {
                while(!fin.eof() && read) {
                getline(fin, str);
                cout << str <<  endl;
                    
                if(counter == 10)
                {
                    character = ' ';
                    while(!(toupper(character) == 'Y' || toupper(character) == 'N')){
                        cout << "Do you wish to continue (y/n)?" << " ";
                        cin >> character;
        
                    }
                    counter = 0;
                    
                    if(toupper(character) == 'N')
                    {
                        read = false;
                    }
                        
                }
                    counter++;
                        }
                fin.close();
            }
                    else
                    {
                        cout << "Unable to read the file" << endl;
                        
                        
                    }
                
            
        
    return 0;
    
}
