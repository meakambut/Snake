#include "stdafx.h"
#include "iostream"
#include "list"
#include "HorizontalLine.h"
#include "Point.h"

using namespace std;

HorizontalLine::HorizontalLine(int xLeft, int xRight, int y, char sym)
{

	for (int x = xLeft; x <= xRight; x++)
	{
		Point p(x, y, sym);
		pList.push_back(p);
	}

}

void HorizontalLine::Draw()
{
	list<Point>::iterator p = pList.begin();

	while (p != pList.end())
	{
		p->Draw();
		p++;
	}
}


HorizontalLine::~HorizontalLine()
{
}
