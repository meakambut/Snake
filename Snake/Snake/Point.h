#pragma once

#include "iostream"
#include "windows.h"
#include "Direction.h"

using namespace std;

class Point
{
public:
	int x, y;
	char sym;

	void Move(int offset, Direction direction);
	void Draw();

	Point(int _x, int _y, char _sym);
	~Point();
};

