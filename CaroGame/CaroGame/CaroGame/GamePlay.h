#ifndef _GAMEPLAY_H_
#define _GAMEPLAY_H_

#include<iostream>
#include "BoardCaro.h"
#include "Menu.h"
#include <conio.h>
#include <fstream>
#include<string>
using namespace std;

#pragma comment( lib, "Winmm.lib" )

#define BOARD_SIZE 13
#define LEFT 1
#define TOP 1

class _Game {
public:
	static int CountWin1;
	static int CountWin2;
	static int CountStep1;
	static int CountStep2;
private:
	_Board* _b;
	bool _turn;
	int _x, _y;
	int _command;
	bool _loop;
	long* MangDiemTanCong;
	long* MangDiemPhongNgu;
public:
	_Board* get_b() { return _b; }
public:
	_Game(int, int, int);
	~_Game();
	int getCommand();
	bool isContinue();
	char waitKeyBoard();
	char askContinue();
	void startGame();
	void loadGame(string);
	void exitGame();
	int processFinish();
	bool processCheckBoard();
	void moveRight();
	void moveLeft();
	void moveUp();
	void moveDown();
	bool processCheckBoardWithMachine();
	int processFinishWithMachine();
	_Point* TimKiemNuocDi();
public:
	long DiemTC_DuyetDoc(int, int);
	long DiemTC_DuyetNgang(int, int);
	long DiemTC_DuyetCheoPhai(int, int);
	long DiemTC_DuyetCheoTrai(int, int);
	long DiemPN_DuyetDoc(int, int);
	long DiemPN_DuyetNgang(int, int);
	long DiemPN_DuyetCheoPhai(int, int);
	long DiemPN_DuyetCheoTrai(int, int);
};

#endif
