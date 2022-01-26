#ifndef _SETTING_H_
#define _SETTING_H_
#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
using namespace std;
class _Common {
public:
	static void fixConsoleWindow();
	static void gotoXY(int, int);
	static void fontColor(int);
	static void start();
	static void setFontSize(int);
};
BOOL WINAPI SetConsoleTitle(
	_In_ LPCTSTR lpConsoleTitle
);
#endif