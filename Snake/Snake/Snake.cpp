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

	HANDLE out_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD crd = { 80, 25 };
	SMALL_RECT src = { 0, 0, crd.X - 1, crd.Y - 1 };
	SetConsoleWindowInfo(out_handle, true, &src);
	SetConsoleScreenBufferSize(out_handle, crd);

	Point p1(1,3,'*');
	//Point p2(4, 5, '#');

	
	//p2.Draw();

	HorizontalLine topLine(0,78,0,'+');
	HorizontalLine bottomLine(0, 78, 24, '+');
	VerticalLine leftLine(0, 24, 0, '+');
	VerticalLine rightLine(0, 24, 78, '+');

	topLine.Draw();
	leftLine.Draw();
	bottomLine.Draw();
	rightLine.Draw();
	//p1.Draw();
	cout << cin.get();
    return 0;
}

