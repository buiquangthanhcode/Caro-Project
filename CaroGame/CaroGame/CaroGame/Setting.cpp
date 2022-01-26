#include "Setting.h"
void _Common::fixConsoleWindow() {
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);
}
void _Common::gotoXY(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void _Common::fontColor(int x) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}
void _Common::setFontSize(int FontSize)
{
	CONSOLE_FONT_INFOEX info = { 0 };
	info.cbSize = sizeof(info);
	info.dwFontSize.Y = FontSize;
	info.FontWeight = FW_NORMAL;
	wcscpy_s(info.FaceName, L"Lucida Console");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), NULL, &info);
}
void _Common::start()
{
	_Common::gotoXY(0, 7);
	_Common::fontColor(12);
	cout << "\t\t"; for (int i = 1; i <= 87; i++) {
		cout << " ";
	} cout << endl;
	cout << "\t\t"; for (int i = 1; i <= 87; i++) {
		cout << char(219);
	} cout << endl;
	cout << "\t\t" << char(219) << "                                                                                     " << char(219) << endl;
	cout << "\t\t" << char(219) << "                                                                                     " << char(219) << endl;
	cout << "\t\t" << char(219) << "             0000000000      0000000000      0000000000       00000000000            " << char(219) << endl;
	cout << "\t\t" << char(219) << "            0          0    0          0    0          0     0           0           " << char(219) << endl;
	cout << "\t\t" << char(219) << "            0          0    0          0    0           0    0           0           " << char(219) << endl;
	cout << "\t\t" << char(219) << "            0               0          0    0           0    0           0           " << char(219) << endl;
	cout << "\t\t" << char(219) << "            0               0          0    0          0     0           0           " << char(219) << endl;
	cout << "\t\t" << char(219) << "            0               000000000000    00000000000      0           0           " << char(219) << endl;
	cout << "\t\t" << char(219) << "            0          0    0          0    0          0     0           0           " << char(219) << endl;
	cout << "\t\t" << char(219) << "            0          0    0          0    0           0    0           0           " << char(219) << endl;
	cout << "\t\t" << char(219) << "             0000000000     0          0    0           0     00000000000            " << char(219) << endl;
	cout << "\t\t" << char(219) << "                                                                                     " << char(219) << endl;
	cout << "\t\t" << char(219) << "                                                                                     " << char(219) << endl;
	cout << "\t\t"; for (int i = 1; i <= 87; i++) {
		cout << char(219);
	} cout << endl;
	cout << "\t\t"; for (int i = 1; i <= 87; i++) {
		cout << " ";
	} cout << endl;

	Sleep(500);
	for (int i = 7; i < 12; i++)
	{
		system("cls");
		_Common::gotoXY(0, 7);
		_Common::fontColor(i);
		cout << "\t\t"; for (int i = 1; i <= 87; i++) {
			cout << " ";
		} cout << endl;
		cout << "\t\t"; for (int i = 1; i <= 87; i++) {
			cout << char(219);
		} cout << endl;
		cout << "\t\t" << char(219) << "                                                                                     " << char(219) << endl;
		cout << "\t\t" << char(219) << "                                                                                     " << char(219) << endl;
		cout << "\t\t" << char(219) << "             0000000000      0000000000      0000000000       00000000000            " << char(219) << endl;
		cout << "\t\t" << char(219) << "            0          0    0          0    0          0     0           0           " << char(219) << endl;
		cout << "\t\t" << char(219) << "            0          0    0          0    0           0    0           0           " << char(219) << endl;
		cout << "\t\t" << char(219) << "            0               0          0    0           0    0           0           " << char(219) << endl;
		cout << "\t\t" << char(219) << "            0               0          0    0          0     0           0           " << char(219) << endl;
		cout << "\t\t" << char(219) << "            0               000000000000    00000000000      0           0           " << char(219) << endl;
		cout << "\t\t" << char(219) << "            0          0    0          0    0          0     0           0           " << char(219) << endl;
		cout << "\t\t" << char(219) << "            0          0    0          0    0           0    0           0           " << char(219) << endl;
		cout << "\t\t" << char(219) << "             0000000000     0          0    0           0     00000000000            " << char(219) << endl;
		cout << "\t\t" << char(219) << "                                                                                     " << char(219) << endl;
		cout << "\t\t" << char(219) << "                                                                                     " << char(219) << endl;
		cout << "\t\t"; for (int i = 1; i <= 87; i++) {
			cout << char(219);
		} cout << endl;
		cout << "\t\t"; for (int i = 1; i <= 87; i++) {
			cout << " ";
		} cout << endl;
		Sleep(500);
	}
	system("cls");
	_Common::fontColor(8);
	_Common::gotoXY(60, 14);
	cout << "LOADING...";
	_Common::gotoXY(20, 15);
	for (int i = 1; i <= 85; i++) {
		cout << char(219);
		Sleep(20);
	}
	system("cls");
}

