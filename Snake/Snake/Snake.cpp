// Snake.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
//#include "iostream"
//#include "windows.h"
#include "Point.h"
#include "list"
#include "HorizontalLine.h"
#include "VerticalLine.h"

using namespace std;

int main()
{
	Point p1(1,3,'*');
	Point p2(4, 5, '#');

	p1.Draw();
	p2.Draw();

	HorizontalLine hline(5,10,8,'+');
	hline.Draw();

	VerticalLine vline(8, 16, 5, '+');
	vline.Draw();

	cout << cin.get();
    return 0;
}

