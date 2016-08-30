#include "stdafx.h"
#include "iostream"
#include "list"
#include "HorizontalLine.h"
#include "Point.h"
#include "stdio.h"
#include "conio.h"
#include "windows.h"

using namespace std;

HorizontalLine::HorizontalLine(int xLeft, int xRight, int y, char sym)
{

	for (int x = xLeft; x <= xRight; x++)
	{
		Point p(x, y, sym);
		pList.push_back(p);
	}

}

void HorizontalLine::SetColor(int text, int background)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	//SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
	SetConsoleTextAttribute(handle, (WORD)((background << 4) | text));
}

void HorizontalLine::Draw()
{
	list<Point>::iterator p = pList.begin();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
	while (p != pList.end())
	{
		p->Draw();
		p++;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
}

void HorizontalLine::test()
{
	cout << "HorizontalLine\n";
}

HorizontalLine::~HorizontalLine()
{
}
