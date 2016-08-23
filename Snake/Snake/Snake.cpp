// Snake.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
//#include "iostream"
//#include "windows.h"
#include "Point.h"

using namespace std;

int main()
{

	Point p1;
	p1.x = 1;
	p1.y = 3;
	p1.sym = '*';

	Point p2;
	p2.x = 4;
	p2.y = 5;
	p2.sym = '#';

	p1.Draw();
	p2.Draw();

	cout << cin.get();
    return 0;
}

