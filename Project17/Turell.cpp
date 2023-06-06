#include"Header.h"
void Turell::shot(Turell turell) {
	
	while (true)
	{
		if (turell.direction_turell == false) {
			
			
			Sleep(100);
			SetConsoleCursorPosition(hand, turell.coord_bulet_turell);
			turell.coord_bulet_turell.X--;
			cout << turell.char_bulet_turell;

			cout << ' ';
			if (turell.coord_bulet_turell.X == 0) {
				short x = turell.coord_Turell.X;
				turell.coord_bulet_turell.X = --x;
				SetConsoleCursorPosition(hand, { 1, turell.coord_bulet_turell.Y });
				cout << ' ';
			}
			
		}
	}
	
} 
void  Turell::ToDie{
}