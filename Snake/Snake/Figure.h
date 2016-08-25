#pragma once

#include "iostream"
#include "list"
#include "Point.h"

class Figure
{

protected: 
	list<Point> pList;

public:
	void Draw();

	Figure();
	~Figure();
};

