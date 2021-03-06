#pragma once

#include "iostream"
#include "windows.h"
#include "Direction.h"
#include "stdio.h"
#include "conio.h"

using namespace std;

class Point
{
public:
	int x, y;
	char sym;

	void Move(int offset, Direction direction);
	void Draw();
	void Clear();
	bool match(Point p);

	Point(int _x, int _y, char _sym);
	Point(int _x);
	~Point();
};

