#include "Header.h"

void Men() {
	string str;
    ifstream fin("MEnuv.txt"); bool track =1;
    while (getline(fin, str))
    {
        
        for (size_t i = 0; i < str.size(); i++)
        {
            cout << str[i];
        }
        cout << endl;

        
    }

    COORD cod{ 13,13 };
    SetConsoleCursorPosition(hand, cod);
    cout << "} load game";
    while (track)
    {
        Sleep(1000);
        SetConsoleCursorPosition(hand, cod);
        cout << ' ';
        Sleep(1000);
        SetConsoleCursorPosition(hand, cod);
        cout << '}';
        
        if (GetAsyncKeyState('\r')) {
            track = 0;
        }
        else;
    }
    int arr[7] = { 3, 7, 11, 14, 22, 26, 28 };
    for (size_t i = 0; i < 7; i++)
    {
        cod = { 10, 13 };
        SetConsoleCursorPosition(hand, cod);
        cout << "_____________________________";//28
        cod.Y++;
        SetConsoleCursorPosition(hand, cod);
        cout << '|';
    
    
                int temp = 28 - arr[i];
            for (size_t j = 0; j < arr[i]; j++)
            {
                cout << char(219);
            }
                for (size_t f = 0; f < temp; f++)
                {
                    cout << ' ';
                }
        cout << '|';
        cod.Y ++;
        SetConsoleCursorPosition(hand, cod);
        cout << "-----------------------------";
        Sleep(500);
        std::system("cls");
    }
    fin.close();
}