#include"Header.h"


bool barriaUP(COORD cursorCoord, vector<vector <char>> vec, COORD boxcursorCoor) {
    
    if (vec[--cursorCoord.Y][cursorCoord.X] == '#' or vec[cursorCoord.Y][cursorCoord.X] == '$' or vec[cursorCoord.Y][cursorCoord.X] == '}')
    {
        return false;
    }
    
}
bool barriaLEFT(COORD cursorCoord, vector<vector <char>> vec) {
    if (vec[cursorCoord.Y][--cursorCoord.X] == '#'  or vec[cursorCoord.Y][cursorCoord.X] == '$' or vec[cursorCoord.Y][cursorCoord.X] == '}')
    {
        return false;
    }
}
bool barriaDOWN(COORD cursorCoord, vector<vector <char>> vec) {
    if (vec[++cursorCoord.Y][cursorCoord.X] == '#' or vec[cursorCoord.Y][cursorCoord.X] == '$' or vec[cursorCoord.Y][cursorCoord.X] == '}')
    {
        return false;
    }
}
bool barriaRIGHT(COORD cursorCoord, vector<vector <char>> vec) {
    if (vec[cursorCoord.Y][++cursorCoord.X] == '#' or vec[cursorCoord.Y][cursorCoord.X] == '$' or vec[cursorCoord.Y][cursorCoord.X] == '}')
        {
            return false;
        }

   
}
bool boxPlayer = false;
void upravPlayer(COORD& cursorCoord, vector<vector <char>> vec, char& pl, char& b,COORD cursorCoordi, Box &box, COORD& boxcursorCoord, Tocen& tn) {

    switch (_getch())
    {
    case 'w':
        if (barriaUP(COORD{ cursorCoord.X, cursorCoord.Y }, vec, boxcursorCoord))
        {
            SetConsoleCursorPosition(hand, cursorCoord);
            cursorCoord.Y--;
   
            cout << " ";
           

        }
        break;
    case 's':
        if (barriaDOWN(COORD{ cursorCoord.X, cursorCoord.Y }, vec))
        {

            

            SetConsoleCursorPosition(hand, cursorCoord);
            ++cursorCoord.Y;
            cout << " ";



        }
        break;
    case 'a':

        if (barriaLEFT(COORD{ cursorCoord.X, cursorCoord.Y }, vec))
        {

            

            SetConsoleCursorPosition(hand, cursorCoord);
            --cursorCoord.X;
            cout << " ";



        }
        
        break;
    case 'd':

        if (barriaRIGHT(COORD{ cursorCoord.X, cursorCoord.Y }, vec))
        {

         

            SetConsoleCursorPosition(hand, cursorCoord);
            ++cursorCoord.X;
            cout << " ";


            break;
        }
    case'e':
        if (cursorCoord.Y == box.Y && cursorCoord.X == box.X) {
            b = ' ';
            box.logicBOX(boxPlayer);

            pl = char(176);
        }
        else if (boxPlayer){
           
            b = char(219);
            pl = '@';
            boxPlayer = false;
            box.X = boxcursorCoord.X;
            box.Y = boxcursorCoord.Y;

        }
        
        break;
    case'q':
        if (cursorCoord.Y == tn.TocenCOOrd.Y && cursorCoord.X == tn.TocenCOOrd.X) {
            tn.tocen++;
            tn.gelocation(tn, vec);
            pl = char(176);
        }
        
        break;
    default:
        break;
    }
    if (boxPlayer == true) {
        boxcursorCoord.X = cursorCoord.X;
        boxcursorCoord.Y = cursorCoord.Y;
    }
    SetConsoleCursorPosition(hand, tn.TocenTEXTCOOrd);
    cout << "Tokens: " << tn.tocen << endl;

    SetConsoleCursorPosition(hand, tn.TocenTEXT2COOrd);
    cout << "Need tokens: " << tn.needtocen << endl;
    
}