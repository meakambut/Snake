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

Figure::Figure()
{
}


Figure::~Figure()
{
}
