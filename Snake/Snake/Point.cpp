#include "stdafx.h"
#include "Point.h"
#include "Direction.h"
#include "stdio.h"
#include "conio.h"

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

Point::Point(int _x)
{
	x = _x;
	y = _x;
	sym = ' ';
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
		y -= offset;
	}
	else if (direction == DOWN)
	{
		y += offset;
	}
}

void Point::Clear()
{
	sym = ' ';
	Draw();
}

bool Point::match(Point p) //лучше переопределить =
{
	return p.x == this->x && p.y == this->y;
}
Point::~Point()
{
}
