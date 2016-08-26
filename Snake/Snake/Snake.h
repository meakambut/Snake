#pragma once
#include "Figure.h"
#include "Direction.h"
class Snake :
	public Figure
{
public:
	Snake(Point tail, int length, Direction direction);
	~Snake();
};

