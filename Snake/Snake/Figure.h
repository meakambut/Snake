#pragma once

#include "iostream"
#include "list"
#include "Point.h"

class Figure
{

protected: 
	list<Point> pList;

public:
	virtual void Draw();
	bool IsCrashed(Point p);
	Figure();
	~Figure();
};

