#pragma once
#include <iostream>
#include <vector>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <algorithm>
#include <fstream>
#include <string>
#include <thread>

static HANDLE hand = GetStdHandle(STD_OUTPUT_HANDLE);


using namespace std;

enum Collor
{
	Black = 0,
	DarkBlue = 1,
	Green = 2,
	LihtBlue = 3,
	Red = 4,
	Purple = 5,
	Yellow = 6,
	White = 7,
	Grey = 8,
	Blue = 9,
	LightGreen = 10,
	Sky = 11,
	LightRed = 12,
	LightPurple = 13,
	LightYellow = 14,
	LightGrey = 15

};
class Box
{

public:
	
	

	int X = 3;
	int Y = 3;

	void logicBOX(bool& boxPlayer);
};
//class Wall
//{
//public:
//	int WallY;
//	int WallSize;
//	int WallRigtorLeft;
//	int WallNothing = 0;
//	int WallQuantity;
//	void wallCreat(vector<vector <char>>& vec, Wall& wa,Wall wan);
//	void Wallvecfill(vector<vector <char>>& vec, Wall& wa, int rasd);
//	void Wallvecfill(vector<vector <char>>& vec, Wall& wa);
//	bool OchenMnogo(vector<int> v, int y);
//};

class Point {
public:
	COORD CoordPoit;
};

class Player {
public:
	COORD PlayerCoord{ 10,10 };
	char charpl = '@';

};


class Turell {
public:
	char char_turel = char(201);
	COORD coord_Turell;
	char char_bulet_turell = char(248);
	vector <pair<COORD, bool>> coord_bulet_turell;
	void shot(Turell turell, vector<vector<char>> vec, Turell turelli);
	void ToDie();
	
};

class Tocen  {
	
public:
	COORD TocenCOOrd{ 0,0};
	void gelocation(Tocen& tn, vector<vector<char>> vec);
	int tocen = 0;
	int needtocen = 0;
	char tocenchar = char(254);
	COORD TocenTEXTCOOrd{ 87,0 };
	COORD TocenTEXT2COOrd{ 87,1 };
	void WhyNeedToken(Tocen& tn);

};
void upravPlayer(COORD& cursorCoord, vector<vector <char>> vec, char& pl, char& b, COORD cursorCoordi, Box &box, COORD& boxcursorCoord, Tocen& tn);
void vecRead(vector<vector <char>> vec, Turell& turell);
void vecFILL(vector<vector <char>>& vec);

bool barriaUP(COORD cursorCoord, vector<vector <char>> vec, COORD boxcursorCoord);
bool barriaDOWN(COORD cursorCoord, vector<vector <char>> vec);
bool barriaLEFT(COORD cursorCoord, vector<vector <char>> vec);
bool barriaRIGHT(COORD cursorCoord, vector<vector <char>> vec);



