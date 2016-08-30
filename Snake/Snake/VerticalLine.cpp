#include "stdafx.h"
#include "iostream"
#include "list"
#include "VerticalLine.h"
#include "Point.h"

using namespace std;

VerticalLine::VerticalLine(int yBottom, int yTop, int x, char sym)
{
	for (int y = yBottom; y <= yTop; y++)
	{
		Point p(x, y, sym);
		pList.push_back(p);
	}
}

void VerticalLine::test()
{
	cout << "VerticalLine\n";
}


VerticalLine::~VerticalLine()
{
}
