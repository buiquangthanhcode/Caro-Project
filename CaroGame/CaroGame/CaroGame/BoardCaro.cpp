#include "BoardCaro.h"

int _Board::getSize() { return _size; }
int _Board::getLeft() { return _left; }
int _Board::getTop() { return _top; }
int _Board::getXAt(int i, int j) {
	return _pArr[i][j].getX();
}
int _Board::getYAt(int i, int j) {
	return _pArr[i][j].getY();
}

_Board::_Board(int pSize, int pX, int pY) {
	_size = pSize;
	_left = pX;
	_top = pY;
	_pArr = new _Point * [pSize];
	for (int i = 0; i < pSize; i++)
		_pArr[i] = new _Point[pSize];
}
_Board::~_Board() {
	for (int i = 0; i < _size; i++)
		delete[] _pArr[i];
	delete[] _pArr;
}

void _Board::resetData() {
	if (_size == 0) return;
	for (int i = 0; i < _size; i++) {
		for (int j = 0; j < _size; j++) {
			_pArr[i][j].setX(4 * j + _left + 2);
			_pArr[i][j].setY(2 * i + _top + 1);
			_pArr[i][j].setCheck(0);
		}
	}
}
void _Board::drawBoard() {
	if (_pArr == NULL) return;
	for (int i = 0; i <= _size; i++) {
		for (int j = 0; j <= _size; j++) {
			_Common::gotoXY(_left + 4 * i, _top + 2 * j);
			_Common::fontColor(14);
			cout << ".";
		}
	}
	for (int i = 0; i <= _size * 4 + 1; i++) {
		_Common::fontColor(15);
		_Common::gotoXY(_left + i - 1, _top - 1);
		cout << char(95);
		_Common::gotoXY(_left + i - 1, _top + _size * 2 + 1);
		cout << char(95);
	}

	for (int j = 1; j < _size * 2 + 3; j++) {
		_Common::gotoXY(_left - 1, _top + j - 1);
		cout << char(179);
		_Common::gotoXY(_left + _size * 4, _top + j - 1);
		cout << char(179);
	}
	_Board::drawTableResult();
	_Common::gotoXY(_pArr[0][0].getX(), _pArr[0][0].getY());
}

void _Board::drawTableResult()
{
	_Common::fontColor(15);
	for (int i = 0; i <= _size * 5; i++) {
		_Common::gotoXY(_left + _size * 4 + i + 1, _top - 1);
		cout << char(95);
		_Common::gotoXY(_left + _size * 4 + i + 1, _top + _size * 2 + 1);
		cout << char(95);
	}
	for (int i = 1; i < _size * 2 + 3; i++) {
		_Common::gotoXY(_left + _size * 9 + 1, _top + i - 1);
		cout << char(179);
	}
	for (int i = 0; i < _size * 5; i++)
	{
		_Common::gotoXY(_left + _size * 4 + i + 1, _top + 8);
		cout << "_";
	}
	for (int i = 0; i < _size * 5; i++)
	{
		_Common::gotoXY(_left + _size * 4 + i + 1, _top + 15);
		cout << "_";
	}
}

int _Board::checkBoard(int pX, int pY, bool pTurn) {
	for (int i = 0; i < _size; i++) {
		for (int j = 0; j < _size; j++) {
			if (_pArr[i][j].getX() == pX && _pArr[i][j].getY() == pY && _pArr[i][j].getCheck() == 0) {
				if (pTurn)
				{
					_pArr[i][j].setCheck(-1);

				}
				else {
					_pArr[i][j].setCheck(1);
				}
				return _pArr[i][j].getCheck();
			}
		}
	}
	return 0;
}

int _Board::DuyetDoc(int px, int py)
{
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	int dong = (py - 2) / 2;
	int cot = (px - 3) / 4;
	int pointCheck;
	int check = getPoint(dong, cot).getCheck();
	for (int Dem = 1; Dem < 6 && dong + Dem < _size; Dem++)
	{
		pointCheck = getPoint(dong + Dem, cot).getCheck();
		if (check == pointCheck)
			SoQuanTa++;
		else if (pointCheck != 0)
		{
			SoQuanDich++;
			break;
		}
		else break;
	}
	for (int Dem = 1; Dem < 6 && dong - Dem >= 0; Dem++)
	{
		pointCheck = getPoint(dong - Dem, cot).getCheck();
		if (check == pointCheck)
			SoQuanTa++;
		else if (pointCheck != 0)
		{
			SoQuanDich++;
			break;
		}
		else break;
	}
	if (SoQuanDich != 2 && SoQuanTa == 4) return check;
	return 0;
}

int _Board::DuyetNgang(int px, int py)
{
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	int dong = (py - 2) / 2;
	int cot = (px - 3) / 4;
	int pointCheck;
	int check = getPoint(dong, cot).getCheck();
	for (int Dem = 1; Dem < 6 && cot + Dem < _size; Dem++)
	{
		pointCheck = getPoint(dong, cot + Dem).getCheck();
		if (check == pointCheck)
			SoQuanTa++;
		else if (pointCheck != 0)
		{
			SoQuanDich++;
			break;
		}
		else break;
	}
	for (int Dem = 1; Dem < 6 && cot - Dem >= 0; Dem++)
	{
		pointCheck = getPoint(dong, cot - Dem).getCheck();
		if (check == pointCheck)
			SoQuanTa++;
		else if (pointCheck != 0)
		{
			SoQuanDich++;
			break;
		}
		else break;
	}
	if (SoQuanDich != 2 && SoQuanTa == 4) return check;
	return 0;
}

int _Board::DuyetCheoPhai(int px, int py)
{
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	int dong = (py - 2) / 2;
	int cot = (px - 3) / 4;
	int pointCheck;
	int check = getPoint(dong, cot).getCheck();
	for (int Dem = 1; Dem < 6 && dong + Dem < _size && cot + Dem < _size; Dem++)
	{
		pointCheck = getPoint(dong + Dem, cot + Dem).getCheck();
		if (check == pointCheck)
			SoQuanTa++;
		else if (pointCheck != 0)
		{
			SoQuanDich++;
			break;
		}
		else break;
	}
	for (int Dem = 1; Dem < 6 && dong - Dem >= 0 && cot - Dem >= 0; Dem++)
	{
		pointCheck = getPoint(dong - Dem, cot - Dem).getCheck();
		if (check == pointCheck)
			SoQuanTa++;
		else if (pointCheck != 0)
		{
			SoQuanDich++;
			break;
		}
		else break;
	}
	if (SoQuanDich != 2 && SoQuanTa == 4) return check;
	return 0;
}

int _Board::DuyetCheoTrai(int px, int py)
{
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	int dong = (py - 2) / 2;
	int cot = (px - 3) / 4;
	int pointCheck;
	int check = getPoint(dong, cot).getCheck();
	for (int Dem = 1; Dem < 6 && dong + Dem < _size && cot - Dem >= 0; Dem++)
	{
		pointCheck = getPoint(dong + Dem, cot - Dem).getCheck();
		if (check == pointCheck)
			SoQuanTa++;
		else if (pointCheck != 0)
		{
			SoQuanDich++;
			break;
		}
		else break;
	}
	for (int Dem = 1; Dem < 6 && dong - Dem >= 0 && cot + Dem < _size; Dem++)
	{
		pointCheck = getPoint(dong - Dem, cot + Dem).getCheck();
		if (check == pointCheck)
			SoQuanTa++;
		else if (pointCheck != 0)
		{
			SoQuanDich++;
			break;
		}
		else break;
	}
	if (SoQuanTa != 2 && SoQuanTa == 4) return check;
	return 0;
}

int _Board::testBoard(int px, int py) {
	int kq;
	kq = DuyetDoc(px, py);
	if (kq != 0) return kq;
	kq = DuyetNgang(px, py);
	if (kq != 0) return kq;
	kq = DuyetCheoPhai(px, py);
	if (kq != 0) return kq;
	kq = DuyetCheoTrai(px, py);
	if (kq != 0)return kq;
	return CONTINUE;
}

void _Board::setPointcheck(int x, int y, int info)
{
	_pArr[x][y].setCheck(info);
}

_Point _Board::getPoint(int x, int y)
{
	return _pArr[x][y];
}
int _Board::checkBoardWithMachine(int pX, int pY) {
	for (int i = 0; i < _size; i++) {
		for (int j = 0; j < _size; j++) {
			if (_pArr[i][j].getX() == pX && _pArr[i][j].getY() == pY && _pArr[i][j].getCheck() == 0) {
				_pArr[i][j].setCheck(-1);
				return _pArr[i][j].getCheck();
			}
		}
	}
	return 0;
}