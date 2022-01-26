#include "Menu.h"
void menu()
{
	_Game::CountWin1 = 0;
	_Game::CountWin2 = 0;
	_Game::CountStep1 = 0;
	_Game::CountStep2 = 0;
	system("cls");
	_Common::fontColor(15);
	cout << "\t\t                       00000000                                                " << endl;
	cout << "\t\t                    0            0             XX             XX               " << endl;
	cout << "\t\t                  0                0             XX         XX                 " << endl;
	cout << "\t\t                0     00      00     0             XX     XX                   " << endl;
	cout << "\t\t                0     00      00     0               XX XX                     " << endl;
	cout << "\t\t                0                    0             XX     XX                   " << endl;
	cout << "\t\t                0    0           0   0           XX         XX                 " << endl;
	cout << "\t\t                  0    0 0 0 0 0   0           XX             XX               " << endl;
	cout << "\t\t                    0            0           XX                 XX             " << endl;
	cout << "\t\t                       00000000                                                " << endl;
	_Common::gotoXY(0, 10);
	_Common::fontColor(9);
	cout << "\t\t\t\t\t"; for (int i = 1; i <= 35; i++) {
		cout << char(254);
	}
	cout << endl;
	_Common::fontColor(9);
	cout << "\t\t\t\t\t" << char(219) << "\t    ";
	_Common::fontColor(15);
	cout << "NEW GAME";
	_Common::fontColor(9);
	cout << "              " << char(219) << endl;
	_Common::fontColor(9);
	cout << "\t\t\t\t\t" << char(219) << "\t    LOAD GAME             " << char(219) << endl;
	cout << "\t\t\t\t\t" << char(219) << "\t    HELP                  " << char(219) << endl;
	cout << "\t\t\t\t\t" << char(219) << "\t    ABOUT                 " << char(219) << endl;
	cout << "\t\t\t\t\t" << char(219) << "\t    EXIT GAME             " << char(219) << endl;
	cout << "\t\t\t\t\t"; for (int i = 1; i <= 35; i++) {
		cout << char(254);
	}
	processMenu(selectMenu());
}
int selectMenu()
{
	int selection = 1;
	while (1)
	{
		int move = _getch();
		move = toupper(move);
		if (move == 'S' || move == 80)
		{
			switch (selection)
			{
			case 1: case 2: case 3: case 4: selection++;
				break;
			case 5: selection = 1;
				break;
			}
			printMenu(selection);
		}
		if (move == 'W' || move == 72)
		{
			switch (selection)
			{
			case 1: selection = 5; break;
			case 2: case 3: case 4: case 5: selection--; break;
			}
			printMenu(selection);
		}
		if (move == 13)
			return selection;
	}
}
void printMenu(int selection)
{
	switch (selection)
	{
	case 1:
		_Common::gotoXY(0, 15);
		_Common::fontColor(9);
		cout << "\t\t\t\t\t" << char(219) << "\t    EXIT GAME             " << char(219);
		_Common::gotoXY(52, 11);
		_Common::fontColor(15);
		cout << "NEW GAME";
		_Common::gotoXY(0, 12);
		_Common::fontColor(9);
		cout << "\t\t\t\t\t" << char(219) << "\t    LOAD GAME             " << char(219);

		_Common::gotoXY(0, 17);
		break;
	case 2:
		_Common::gotoXY(0, 11);
		_Common::fontColor(9);
		cout << "\t\t\t\t\t" << char(219) << "\t    NEW GAME              " << char(219);
		_Common::gotoXY(52, 12);
		_Common::fontColor(15);
		cout << "LOAD GAME";
		_Common::gotoXY(0, 13);
		_Common::fontColor(9);
		cout << "\t\t\t\t\t" << char(219) << "\t    HELP                  " << char(219);
		_Common::gotoXY(0, 17);
		break;
	case 3:
		_Common::gotoXY(0, 12);
		_Common::fontColor(9);
		cout << "\t\t\t\t\t" << char(219) << "\t    LOAD GAME             " << char(219);
		_Common::gotoXY(52, 13);
		_Common::fontColor(15);
		cout << "HELP";
		_Common::gotoXY(0, 14);
		_Common::fontColor(9);
		cout << "\t\t\t\t\t" << char(219) << "\t    ABOUT                 " << char(219);
		_Common::gotoXY(0, 17);
		break;
	case 4:
		_Common::gotoXY(0, 13);
		_Common::fontColor(9);
		cout << "\t\t\t\t\t" << char(219) << "\t    HELP                  " << char(219);
		_Common::gotoXY(52, 14);
		_Common::fontColor(15);
		cout << "ABOUT";
		_Common::gotoXY(0, 15);
		_Common::fontColor(9);
		cout << "\t\t\t\t\t" << char(219) << "\t    EXIT GAME             " << char(219);
		_Common::gotoXY(0, 17);
		break;
	case 5:
		_Common::gotoXY(0, 14);
		_Common::fontColor(9);
		cout << "\t\t\t\t\t" << char(219) << "\t    ABOUT                 " << char(219);
		_Common::gotoXY(52, 15);
		_Common::fontColor(15);
		cout << "EXIT GAME";
		_Common::gotoXY(0, 11);
		_Common::fontColor(9);
		cout << "\t\t\t\t\t" << char(219) << "\t    NEW GAME              " << char(219);
		_Common::gotoXY(0, 17);
		break;
	}
}
int selectMenuNewGame() {
	int selection = 1;
	while (1)
	{
		int move = _getch();
		move = toupper(move);
		if (move == 'S' || move == 80)
		{
			switch (selection)
			{
			case 1: case 2: case 3: case 4:
				selection++;
				break;
			case 5:
				selection = 1;
				break;
			}
			menuNewGame(selection);

		}
		if (move == 'W' || move == 72)
		{
			switch (selection)
			{
			case 1:
				selection = 5;
				break;
			case 2: case 3: case 4: case 5:
				selection--;
				break;
			}
			menuNewGame(selection);
		}
		if (move == 13)
			return selection;
		if (move == 27)
			menu();
	}

}
void menuNewGame(int selection) {
	switch (selection)
	{
	case 1:
		_Common::gotoXY(42, 11);
		_Common::fontColor(15);
		cout << "       PLAY WITH PERSON";
		_Common::gotoXY(0, 12);
		_Common::fontColor(9);
		cout << "\t\t\t\t\t" << char(219) << "        PLAY WITH COMPUTER       " << char(219);
		_Common::gotoXY(0, 20);
		break;
	case 2:
		_Common::gotoXY(0, 11);
		_Common::fontColor(9);
		cout << "\t\t\t\t\t" << char(219) << "        PLAY WITH PERSON         " << char(219);
		_Common::gotoXY(42, 12);
		_Common::fontColor(15);
		cout << "       PLAY WITH COMPUTER";
		_Common::gotoXY(0, 13);
	}
}
void processMenu(int choose)
{
	switch (choose)
	{
	case 1:
		_Common::fontColor(9);
		_Common::gotoXY(0, 10);
		cout << "\t\t\t\t\t"; for (int i = 1; i <= 35; i++) {
			cout << char(254);
		}cout << endl;
		_Common::gotoXY(0, 11);
		cout << "\t\t\t\t\t" << char(219) << " ";
		_Common::fontColor(15);
		cout << "       PLAY WITH PERSON";
		_Common::fontColor(9);
		cout << "         " << char(219);
		_Common::gotoXY(0, 12);
		cout << "\t\t\t\t\t" << char(219) << "        PLAY WITH COMPUTER       " << char(219) << endl;
		_Common::gotoXY(0, 13);
		cout << "\t\t\t\t\t"; for (int i = 1; i <= 35; i++) {
			cout << char(254);
		}
		for (int i = 0; i < 3; i++)
		{
			_Common::gotoXY(40, 14 + i);
			cout << "                                   ";
		}
		_Common::gotoXY(0, 13);
		switch (selectMenuNewGame()) {
		case 1: newGame(); break;
		case 2: newGameWithMachine(); break;
		}
		break;
	case 2: {
		fstream fin;
		string a;
		int stop;
		do {
			for (int i = 0; i < 5; i++) {
				_Common::gotoXY(41, 11 + i);
				cout << "                               ";
			}
			_Common::fontColor(15);
			_Common::gotoXY(41, 12);
			cout << "  Nhap ten nguoi dung: ";
			_Common::gotoXY(41, 13);
			getline(cin, a);
			fin.open(a, ios::in);
			if (fin.fail())
				stop = 0;
			else
				stop = 2;
			if (stop == 0)
			{
				_Common::gotoXY(41, 20);
				cout << "Ten file khong ton tai!";
				_Common::gotoXY(41, 21);
				cout << "Nhan C de tiep tuc.";
				_Common::gotoXY(41, 22);
				cout << "Nhan esc de ve Menu.";
				if (_getch() == 27)
				{
					stop = 1;
					menu();
				}
			}
		} while (stop == 0);
		if (stop == 2)
			loadGame(a);
	}
		  break;
	case 3:
		help();
		break;
	case 4:
		about();
		break;
	case 5:
		exit(0);
	}
}
void newGameWithMachine()
{
	_Game g(BOARD_SIZE, LEFT, TOP);
	g.startGame();
	_Common::gotoXY(BOARD_SIZE * 7 - 16, TOP + 1);
	_Common::fontColor(15);
	cout << "PLAYER 1 VS MACHINE";
	_Common::gotoXY(g.get_b()->getXAt(0, 0), g.get_b()->getYAt(0, 0));
	while (g.isContinue()) {
		g.waitKeyBoard();
		if (g.getCommand() == 27) g.exitGame();
		else {
			if (g.getCommand() == 'A' || g.getCommand() == 75)
				g.moveLeft();
			if (g.getCommand() == 'W' || g.getCommand() == 72)
				g.moveUp();
			if (g.getCommand() == 'S' || g.getCommand() == 80)
				g.moveDown();
			if (g.getCommand() == 'D' || g.getCommand() == 77)
				g.moveRight();
			if (g.getCommand() == 13 || g.getCommand() == 32)
			{
				if (g.processCheckBoardWithMachine())
				{
					switch (g.processFinishWithMachine())
					{
					case WIN1: case WIN2: case DRAW:

						if (g.askContinue() != 'Y')
						{
							_Common::gotoXY(100, 105);
							g.exitGame();
						}
						else
						{
							g.startGame();
							_Common::gotoXY(BOARD_SIZE * 7 - 16, TOP + 1);
							_Common::fontColor(15);
							cout << "PLAYER 1 VS MACHINE";
							_Common::gotoXY(g.get_b()->getXAt(0, 0), g.get_b()->getYAt(0, 0));
						}
					}
				}
			}
		}
	}
}

void newGame()
{
	_Game g(BOARD_SIZE, LEFT, TOP);
	g.startGame();
	_Common::gotoXY(BOARD_SIZE * 7 - 16, TOP + 1);
	_Common::fontColor(15);
	cout << "PLAYER 1 VS PLAYER 2";
	_Common::gotoXY(g.get_b()->getXAt(0, 0), g.get_b()->getYAt(0, 0));
	while (g.isContinue()) {
		g.waitKeyBoard();
		if (g.getCommand() == 27) g.exitGame();
		else {
			if (g.getCommand() == 'A' || g.getCommand() == 75)
				g.moveLeft();
			if (g.getCommand() == 'W' || g.getCommand() == 72)
				g.moveUp();
			if (g.getCommand() == 'S' || g.getCommand() == 80)
				g.moveDown();
			if (g.getCommand() == 'D' || g.getCommand() == 77)
				g.moveRight();
			if (g.getCommand() == 13 || g.getCommand() == 32)
			{
				if (g.processCheckBoard())
				{
					switch (g.processFinish())
					{
					case WIN1: case WIN2: case DRAW:

						if (g.askContinue() != 'Y')
						{
							_Common::gotoXY(100, 105);
							g.exitGame();
						}
						else
						{
							g.startGame();
							_Common::gotoXY(BOARD_SIZE * 7 - 16, TOP + 1);
							_Common::fontColor(15);
							cout << "PLAYER 1 VS PLAYER 2";
							_Common::gotoXY(g.get_b()->getXAt(0, 0), g.get_b()->getYAt(0, 0));
						}
					}
				}
			}
		}
	}
}
void loadGame(string a) {
	_Game g(BOARD_SIZE, LEFT, TOP);
	g.loadGame(a);
	_Common::gotoXY(BOARD_SIZE * 7 - 16, TOP + 1);
	_Common::fontColor(15);
	cout << "PLAYER 1 VS PLAYER 2";
	_Common::gotoXY(g.get_b()->getXAt(0, 0), g.get_b()->getYAt(0, 0));
	while (g.isContinue()) {
		g.waitKeyBoard();
		if (g.getCommand() == 27) g.exitGame();
		else {
			if (g.getCommand() == 'A' || g.getCommand() == 75)
				g.moveLeft();
			if (g.getCommand() == 'W' || g.getCommand() == 72)
				g.moveUp();
			if (g.getCommand() == 'S' || g.getCommand() == 80)
				g.moveDown();
			if (g.getCommand() == 'D' || g.getCommand() == 77)
				g.moveRight();
			if (g.getCommand() == 13 || g.getCommand() == 32)
			{
				if (g.processCheckBoard()) {
					switch (g.processFinish()) {
					case WIN1: case WIN2: case DRAW:
						g.askContinue();
						if (g.askContinue() != 'Y')
						{
							_Common::gotoXY(100, 105);
							g.exitGame();
						}
						else
						{
							g.startGame();
							_Common::gotoXY(BOARD_SIZE * 7 - 16, TOP + 1);
							_Common::fontColor(15);
							cout << "PLAYER 1 VS PLAYER 2";
							_Common::gotoXY(g.get_b()->getXAt(0, 0), g.get_b()->getYAt(0, 0));
						}
					}
				}

			}
		}
	}

}

void help() {
	system("cls");
	_Common::fontColor(14);
	cout << "\t========TRONG GIAO DIEN TRO CHOI========" << endl;
	_Common::fontColor(11);
	cout << "\t1. Su dung cac phim W, A, S, D hoac cac phim mui ten de di chuyen." << endl;
	_Common::fontColor(14);
	cout << "\t2. Su dung phim Space hoac Enter de thuc hien 1 nuoc danh." << endl;
	_Common::fontColor(11);
	cout << "\t3. Su dung ESC de thoat khoi tro choi." << endl;
	_Common::fontColor(14);
	cout << "\t******************************************" << endl;
	_Common::fontColor(11);
	cout << "\t============TRONG GIAO DIEN MENU============" << endl;
	_Common::fontColor(14);
	cout << "\t1. Su dung cac phim W, A, S, D hoac cac phim mui ten de di chuyen." << endl;
	_Common::fontColor(11);
	cout << "\t2. Nhan phim Enter de lua chon." << endl;
	_Common::fontColor(14);
	cout << "\t3. Cac chuc nang trong Menu:" << endl;
	_Common::fontColor(11);
	cout << "\t\t+ NEW GAME: Tao mot van choi moi." << endl;
	_Common::fontColor(14);
	cout << "\t\t+ LOAD GAME: Tai lai van choi con choi do truoc do." << endl;
	_Common::fontColor(11);
	cout << "\t\t+ HELP: Huong dan su dung." << endl;
	_Common::fontColor(14);
	cout << "\t\t+ ABOUT: Thong tin va lien he cua nguoi lam game." << endl;
	_Common::fontColor(11);
	cout << "\t\t+ EXIT: Thoat khoi chuong trinh." << endl;
	_Common::fontColor(14);
	system("pause");
}

void about() {
	system("cls");
	_Common::fontColor(11);
	cout << "\t=======DANH SACH THANH VIEN LAM GAME======" << endl;
	_Common::fontColor(14);
	cout << "Tran Gia Lac _ 20127046" << endl;
	cout << "Pham Giang Thai Duong _ 20127143" << endl;
	cout << "Bui Quang Thanh _ 201273290" << endl;
	cout << "Nguyen Manh Cuong _ 20127456" << endl;
	cout << "Duong Chi Thong _ 20127634" << endl;
	cout << "Nguon tham khao:" << endl;
	cout << "Do an cuoi ky cua sinh vien K18" << endl;
	system("pause");
}




