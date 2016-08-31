#include "stdafx.h"
#include "list"
#include "Obstacles.h"
#include "Snake.h"
#include "Point.h"
#include "Direction.h"
#include "Figure.h"

using namespace std;

void Obstacles::Add(Figure *p)
{
	fList.push_back(p);
}

void Obstacles::Remove(Figure *p)
{
	fList.pop_back();
}

void Obstacles::Draw()
{
	list<Figure*>::iterator pointer = fList.begin();

	while (pointer != fList.end())
	{
		(*pointer)->Draw();
		pointer++;
	}
}

bool Obstacles::IsCrashed(Point p)
{
	list<Figure*>::iterator pointer = fList.begin();

	while (pointer != fList.end())
	{
		if ((*pointer)->IsCrashed(p))
			return true;
		else
			pointer++;
	}
	return false;
}

Obstacles::Obstacles()
{
}

Obstacles::~Obstacles()
{
}
