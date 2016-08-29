#pragma once

#include "iostream"
#include "list"
#include "Point.h"
#include "Figure.h"
#include "stdio.h"
#include "conio.h"


class HorizontalLine : public Figure
{
public:

	HorizontalLine(int xLeft, int xRight, int y, char sym);
	void Draw();
	void SetColor(int text, int background);
	~HorizontalLine();
};

