#include "stdafx.h"
#include "Point.h"

using namespace std;

void Point::Draw()
{
	COORD position = { x, y };
	HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hconsole, position);
	cout << sym;
}

Point::Point(int _x, int _y, char _sym)
{
	x = _x;
	y = _y;
	sym = _sym;
}

Point::~Point()
{
}
