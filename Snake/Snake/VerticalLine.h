#pragma once

#include "iostream"
#include "list"
#include "Point.h"

class VerticalLine
{
public:
	list<Point> pList;

	void Draw();

	VerticalLine(int yBottom, int yTop, int x, char sym);
	~VerticalLine();
};

