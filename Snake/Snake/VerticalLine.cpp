#include "stdafx.h"
#include "iostream"
#include "list"
#include "VerticalLine.h"
#include "Point.h"

using namespace std;

void VerticalLine::Draw()
{
	list<Point>::iterator p = pList.begin();

	while (p != pList.end())
	{
		p->Draw();
		p++;
	}
}


VerticalLine::VerticalLine(int yBottom, int yTop, int x, char sym)
{
	for (int y = yBottom; y <= yTop; y++)
	{
		Point p(x, y, sym);
		pList.push_back(p);
	}
}


VerticalLine::~VerticalLine()
{
}
