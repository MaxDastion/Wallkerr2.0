﻿#include"Header.h"






void vecRead(vector<vector <char>> vec, Turell& turell) {
    SetConsoleTextAttribute(hand, LightRed);
    for (short i = 0; i < vec.size(); i++)
    {
       
        for (short f = 0; f < vec[i].size(); f++)
        {
            
            if (vec[i][f] == '$') {
                SetConsoleTextAttribute(hand, Sky);

            }
            else {

                SetConsoleTextAttribute(hand, LightRed);
            }
            if (vec[i][f] == '`') {
                cout << ' ';
                
            }
            else if (vec[i][f] == '}') {
                short iss = f;
                turell.coord_Turell = { --iss,i  };
                turell.coord_bulet_turell = {--iss,i };
                cout << char(184);
            }
            else if(vec[i][f]== '#'|| vec[i][f]== ' ') {
                cout << vec[i][f];
            }
            
           
        }
        cout << endl;
    }
}



void vecFILL(vector<vector <char>>& vec) {

    string str;
    ifstream fin("Level_1.txt");
  
        
        while (getline(fin, str))
        {
            vector<char> veci;
            for (size_t i = 0; i < str.size(); i++)
            {
                veci.push_back(str[i]);
            }
            

            vec.push_back(veci);
        }
    

    fin.close();
 
    
        
}

