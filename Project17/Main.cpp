#include"Header.h"
void tempest(Turell tur, vector<vector<char>> vec, Player* pl, HealPoint* hp) {
    tur.shot(tur, vec, tur, *pl, *hp);

}
     std::unique_lock<std::mutex> lk(cv_m);
int main() {

    Box b;
    Turell turell;
    Player pl;
    Tocen tn;
    HealPoint hp;
    srand(time(NULL));
    tn.WhyNeedToken(tn);
    vector<vector <char>> vec;
    vecFILL(vec);
    char box = char(219);
  
    vecRead(vec, turell, hp);
    CONSOLE_CURSOR_INFO cci;
        GetConsoleCursorInfo(hand, &cci);
        cci.bVisible = false;
        GetConsoleCursorInfo(hand, &cci);
    COORD boxcursCoord{ b.Y,b.X };
    SetConsoleCursorPosition(hand, pl.PlayerCoord);
    tn.gelocation(tn, vec);
    

    while (true)
    {
        
        thread th(tempest, turell, vec, &pl, &hp);
        th.detach();
        cv.wait_for(lk, 1ms);
        
        if (_kbhit() and pl.trac_control) {
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
                pl.win = 1;
                cout << "You win";
                Sleep(500);
                    break;
                
            }
        }
        if (pl.ItPl.second == 0) {
            Sleep(500);
            break;

        }
        pl.trac_control = false;
       
    }
   
}
