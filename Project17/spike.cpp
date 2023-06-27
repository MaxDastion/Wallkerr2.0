#include "Header.h"

void spike::log_sp(spike& sp, bool& jk, Player pl) {
	std::unique_lock<std::mutex> lk(cv_m);
	while (jk) {
		cv.wait_for(lk, 1ms);
		for (auto& i : sp.spike_coord)
		{
			SetConsoleTextAttribute(hand, Green);
			SetConsoleCursorPosition(hand, i);
			cout << '_';
			sp.trac_upSP = 0;

		}
		Sleep(1000);
		for (auto& i : sp.spike_coord)
		{
			SetConsoleTextAttribute(hand, Green);
			SetConsoleCursorPosition(hand, i);
			cout << '^';
			sp.trac_upSP = 1;
		}
		Sleep(1000);
		jk = 0;
		if (pl.ItPl.second == 0) {
			system("cls");
			SetConsoleTextAttribute(hand, Purple);
			cout << "You die";
			Sleep(500);
			break;
		}
		if (pl.win) {
			system("cls");
			cout << "You win";
			Sleep(500);
			break;

		}

	}
	return;
}