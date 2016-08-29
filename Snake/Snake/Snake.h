#pragma once
#include "Figure.h"
#include "Direction.h"
class Snake :
	public Figure
{
	Direction direction;
public:
	Snake(Point tail, int length, Direction direction);
	void Move();
	Point GetNextPoint();
	void HandleKey(char a);
	bool Eat(Point food);
	~Snake();
};

