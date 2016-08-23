#include "stdafx.h"
#include "Point.h"

using namespace std;

void Point::Draw()
{
	COORD position = { x, y };
	HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hconsole, position);
	cout << sym << endl;
}


Point::Point()
{
}


Point::~Point()
{
}
