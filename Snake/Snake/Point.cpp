#include "stdafx.h"
#include "Point.h"
#include "Direction.h"

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

void Point::Move(int offset, Direction direction)
{
	if (direction == RIGHT)
	{
		x += offset;
	}
	else if (direction == LEFT)
	{
		x -= offset;
	}
	else if (direction == UP)
	{
		y += offset;
	}
	else if (direction == DOWN)
	{
		y -= offset;
	}
}

Point::~Point()
{
}
