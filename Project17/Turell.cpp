#include"Header.h"
void Turell::shot(Turell turell,vector <vector<char>> vec, Turell turelli, Player& pl, HealPoint& hp) {
	
	while (true)
	{
		hp.Redering_HP(hp);
		for (size_t i = 0; i < turell.coord_bulet_turell.size(); i++)
		{
			
			if (turell.coord_bulet_turell[i].second == false) {

  				Sleep(50);
			
				--turell.coord_bulet_turell[i].first.X;
				if (vec[turell.coord_bulet_turell[i].first.Y][turell.coord_bulet_turell[i].first.X] == '#') {
					
					SetConsoleCursorPosition(hand, { turell.coord_bulet_turell[i].first.X+1, turell.coord_bulet_turell[i].first.Y});
					cout << ' ';
					SetConsoleCursorPosition(hand, { turelli.coord_bulet_turell[i].first.X, turell.coord_bulet_turell[i].first.Y });
					turell.coord_bulet_turell[i].first.X = turelli.coord_bulet_turell[i].first.X-1;
				}
				
				SetConsoleCursorPosition(hand, turell.coord_bulet_turell[i].first);

				SetConsoleTextAttribute(hand, White);
				cout << turell.char_bulet_turell;

				cout << ' ';
				

			}
			if (turell.coord_bulet_turell[i].second == true) {

  				Sleep(50);
			
				++turell.coord_bulet_turell[i].first.X;
				SetConsoleCursorPosition(hand, turell.coord_bulet_turell[i].first);
				if (vec[turell.coord_bulet_turell[i].first.Y][turell.coord_bulet_turell[i].first.X+1] == '#') {
					
					SetConsoleCursorPosition(hand, { turell.coord_bulet_turell[i].first.X-1, turell.coord_bulet_turell[i].first.Y});
					cout << ' ';
					cout << ' ';
					SetConsoleCursorPosition(hand, { turelli.coord_bulet_turell[i].first.X, turell.coord_bulet_turell[i].first.Y });
					turell.coord_bulet_turell[i].first.X = turelli.coord_bulet_turell[i].first.X+1;
				}
				
				
				SetConsoleTextAttribute(hand, White);
				cout << ' ';
				cout << turell.char_bulet_turell;
				

				
				

			}

		}

		turell.ToDie(pl, turell, hp);
		if (pl.ItPl.second == 0) {
			system("cls");
			SetConsoleTextAttribute(hand, Purple);
			cout << "You die";
			Sleep(500);
			break;
		}
		
	}
	
} 
void  Turell::ToDie(Player& pl, Turell tl, HealPoint& hp) {
	if (pl.ItPl.first) {
		for (size_t i = 0; i < tl.coord_bulet_turell.size(); i++)
		{
			if (pl.PlayerCoord.Y == tl.coord_bulet_turell[i].first.Y && pl.PlayerCoord.X == tl.coord_bulet_turell[i].first.X) {
				--hp.HP.second;
			}
			if (hp.HP.second == 0) {
				pl.ItPl.second = 0;
			}
		}
		
	}

}
