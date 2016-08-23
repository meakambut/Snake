// Snake.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
//#include "iostream"
//#include "windows.h"
#include "Point.h"
#include "list"

using namespace std;

int main()
{
	int i;
	list<int>::iterator p;
	Point p1(1,3,'*');
	Point p2(4, 5, '#');

	p1.Draw();
	p2.Draw();

	list<int> numList;
	numList.push_back(0);
	numList.push_back(1);
	numList.push_back(2);

	p = numList.begin();
	for (i = 0; i < 3; i++)
	{
		cout << *p << endl;
		p++;
	}

	p = numList.begin();
	p = numList.erase(p);
	for (i = 0; i < 2; i++)
	{
		cout << *p << endl;
		p++;
	}

	list<Point> pList;
	pList.push_back(p1);
	pList.push_back(p2);

	cout << cin.get();
    return 0;
}

