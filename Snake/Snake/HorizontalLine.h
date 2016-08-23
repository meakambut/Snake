#pragma once

#include "iostream"
#include "list"
#include "Point.h"

class HorizontalLine
{
public:
	list<Point> pList;

	void Draw();

	HorizontalLine(int xLeft, int xRight, int y, char sym);
	~HorizontalLine();
};

