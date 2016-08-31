#include "stdafx.h"
#include "Figure.h"
#include "iostream"
#include "list"
#include "Point.h"

using namespace std;

void Figure::Draw()
{
	list<Point>::iterator p = pList.begin();

	while (p != pList.end())
	{
		p->Draw();
		p++;
	}
}

bool Figure::IsCrashed(Point p)
{
	list<Point>::iterator pointer = pList.begin();

	while (pointer != pList.end())
	{
		if ((*pointer).match(p))
		{
			return true;
		}
		else
			pointer++;
	}
	return false;
}

Figure::Figure()
{
}


Figure::~Figure()
{
}
