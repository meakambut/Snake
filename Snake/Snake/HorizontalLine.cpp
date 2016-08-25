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


HorizontalLine::~HorizontalLine()
{
}
