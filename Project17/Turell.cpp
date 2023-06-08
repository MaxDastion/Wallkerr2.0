#include"Header.h"
void Turell::shot(Turell turell,vector <vector<char>> vec, Turell turelli) {
	
	while (true)
	{
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
				
				
				
				cout << ' ';
				cout << turell.char_bulet_turell;
				

				
				

			}
		}
		
	}
	
} 
void  Turell::ToDie(){
	cout << " sf"; 
	cout << " sf"; 
	cout << " sf"; 
	cout << " sf"; 
	cout << " sf"; 


}