#include "stdafx.h"
#include "Snake.h"
#include "Direction.h"
#include "Point.h"
#include "list"

using namespace std;

Snake::Snake(Point tail, int length, Direction direction)
{
	for (int i = 0; i < length; i++)
	{
		Point p(tail.x, tail.y, tail.sym);
		p.Move(i, direction);
		pList.push_back(p);
	}
}


Snake::~Snake()
{
}
