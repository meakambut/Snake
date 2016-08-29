#include "stdafx.h"
#include "FoodCreator.h"
#include "Point.h"
#include "time.h"


FoodCreator::FoodCreator(int mapWidth, int mapHeight, char sym)
{
	this->mapWidth = mapWidth;
	this->mapHeight = mapHeight;
	this->sym = sym;
}

Point FoodCreator::CreateFood()
{
	srand(time(0));
	int x = rand() % mapWidth;
	int y = rand() % mapHeight;
	Point tmp(x, y, sym);
	return tmp;
}

FoodCreator::~FoodCreator()
{
}
