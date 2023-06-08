#include"Header.h"
void tempest(Turell tur, vector<vector<char>> vec, Player* pl) {
    tur.shot(tur, vec, tur, *pl);
}
int main() {
    Box b;
    //Wall wa;
    Turell turell;
    Player pl;
    Tocen tn;
    srand(time(NULL));
    tn.WhyNeedToken(tn);
    vector<vector <char>> vec;
 //   wa.wallCreat(vec, wa, wa);
    vecFILL(vec);
   
    char box = char(219);
    
    vecRead(vec, turell);
    
    COORD boxcursCoord{ b.Y,b.X };
    SetConsoleCursorPosition(hand, pl.PlayerCoord);
    tn.gelocation(tn, vec);
    thread th(tempest, turell, vec,&pl);
    th.detach();
    while (true)
    {
   
        if (_kbhit()) {
            pl.ItPl.first = 1;
            SetConsoleCursorPosition(hand, tn.TocenCOOrd);
            SetConsoleTextAttribute(hand, Yellow);
            cout << tn.tocenchar;
            SetConsoleCursorPosition(hand, boxcursCoord);
            SetConsoleTextAttribute(hand, Purple);
            cout << box;
            upravPlayer(pl.PlayerCoord, vec, pl.charpl,box, pl.PlayerCoord, b, boxcursCoord,tn);
            SetConsoleCursorPosition(hand, pl.PlayerCoord);
            SetConsoleTextAttribute(hand, DarkBlue);
            if (pl.PlayerCoord.Y == b.Y && pl.PlayerCoord.X == b.X) {
                pl.charpl = char(251);
            }
            else
            {
                pl.charpl = '@';
            }
            cout << pl.charpl;
            if (tn.tocen == tn.needtocen) {
                system("cls");
                cout << "You win";
                if (_kbhit()) {
                    break;
                }
            }
        }
        if (pl.ItPl.second == 0) {
            Sleep(500);
            break;

        }
       
    }
   
}
