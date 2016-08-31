#pragma once

#include "iostream"
#include "list"
#include "Point.h"
#include "Figure.h"

class VerticalLine : public Figure
{
public:

	VerticalLine(int yBottom, int yTop, int x, char sym);
	~VerticalLine();
};

