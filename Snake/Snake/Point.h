#pragma once

#include "iostream"
#include "windows.h"

using namespace std;

class Point
{
public:
	int x, y;
	char sym;

	void Draw();

	Point();
	~Point();
};
