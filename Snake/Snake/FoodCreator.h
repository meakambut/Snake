#pragma once
#include "Point.h"

class FoodCreator
{
public:
	int mapWidth;
	int mapHeight;
	char sym;

	FoodCreator(int mapWidth, int mapHeight, char sym);
	Point CreateFood();
	~FoodCreator();
};

