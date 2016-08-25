#pragma once

#include "iostream"
#include "list"
#include "Point.h"
#include "Figure.h"

class HorizontalLine : public Figure
{
public:

	HorizontalLine(int xLeft, int xRight, int y, char sym);
	~HorizontalLine();
};

