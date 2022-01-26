#include "Menu.h"

int _Game::CountWin1 = 0;
int _Game::CountWin2 = 0;
int _Game::CountStep1 = 0;
int _Game::CountStep2 = 0;
int main() {
	SetConsoleTitle(L"Đồ án Caro");
	_Common::fixConsoleWindow();
	_Common::start();
	while (1)
	{
		menu();
	}
	return 0;
}
