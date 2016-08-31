#pragma once
#include "HorizontalLine.h"
#include "HorizontalLine.h"
#include "Figure.h"
#include "VerticalLine.h"
#include "Snake.h"

class Obstacles 
	: public Figure
{
public:
	list<Figure*> fList;
public:
	void Add(Figure *p);
	void Draw();
	bool IsCrashed(Point p);
	Obstacles();
	~Obstacles();
};

