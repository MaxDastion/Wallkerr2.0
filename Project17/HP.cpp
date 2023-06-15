#include "Header.h"
void HealPoint::Redering_HP(HealPoint hp) {
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(hand, &cci);
	cci.bVisible = false;
	GetConsoleCursorInfo(hand, &cci);
	SetConsoleCursorPosition(hand, hp.Coord_redering_HP);
	SetConsoleTextAttribute(hand, Red);
	cout << "HP: ";
	for (size_t i = 0; i < hp.HP.second; i++)
	{
		cout << hp.HP.first;
	}for (size_t i = 0; i < hp.space; i++)
	{
		cout << ' ';
	}
	
	
	
}