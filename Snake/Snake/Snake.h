#pragma once
#include "Figure.h"
#include "Direction.h"
#include "Snake.h"
#include "Point.h"
#include "list"
#include "Obstacles.h"

class Snake :
	public Figure
{
	Direction direction;
public:
	Snake(Point tail, int length, Direction direction);
	void Move();
	Point GetNextPoint();
	bool IsCrashed(class Obstacles obsList);
	void HandleKey(char a);
	bool Eat(Point food);
	~Snake();
};

