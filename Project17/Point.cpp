#include"Header.h"




void Tocen::gelocation(Tocen &tn, vector<vector<char>> vec) {
	srand(time(NULL));
	tn.TocenCOOrd.Y = rand() % (vec.size() - 2) + 1;
	tn.TocenCOOrd.X = rand() % (vec[tn.TocenCOOrd.Y].size() - 2) + 1;

	while (vec[tn.TocenCOOrd.Y][tn.TocenCOOrd.X] != ' ')
	{
		tn.TocenCOOrd.Y = rand() % (vec.size() - 2) + 1;
		tn.TocenCOOrd.X = rand() % (vec[tn.TocenCOOrd.Y].size() - 2) + 1;
	}
}
