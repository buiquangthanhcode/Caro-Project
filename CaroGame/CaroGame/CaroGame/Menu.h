#ifndef _MENU_H_
#define _MENU_H_
#include<iostream>
#include "GamePlay.h"
using namespace std;
void menu();
void printMenu(int selection);
int selectMenu();
void processMenu(int choose);
void newGame();
void menuNewGame(int selection);
int selectMenuNewGame();
void newGame();
void newGameWithMachine();
void loadGame(string a);
void help();
void about();
#endif