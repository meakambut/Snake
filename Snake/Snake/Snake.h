#pragma once
#include "Figure.h"
#include "Direction.h"
class Snake :
	public Figure
{
public:
	Direction direction;

	Snake(Point tail, int length, Direction direction);
	void Move();
	Point GetNextPoint();
	~Snake();
};

