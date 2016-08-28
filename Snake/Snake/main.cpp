// Snake.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "windows.h"
#include "Point.h"
#include "list"
#include "HorizontalLine.h"
#include "VerticalLine.h"
#include "Direction.h"
#include "Snake.h"
#include "conio.h"

using namespace std;

int main()
{
	//set the window
	HANDLE out_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD crd = { 80, 25 };
	SMALL_RECT src = { 0, 0, crd.X - 1, crd.Y - 1 };
	SetConsoleWindowInfo(out_handle, true, &src);
	SetConsoleScreenBufferSize(out_handle, crd);

	//drawing the frame
	HorizontalLine topLine(0,78,0,'+');
	HorizontalLine bottomLine(0, 78, 24, '+');
	VerticalLine leftLine(0, 24, 0, '+');
	VerticalLine rightLine(0, 24, 78, '+');

	topLine.Draw();
	leftLine.Draw();
	bottomLine.Draw();
	rightLine.Draw();

	//drawing points
	Point p(4, 5, '*');
	Snake snake(p, 4, RIGHT);
	snake.Draw();
	Sleep(100);

	char a;
	cout << endl;
	while (true)
	{
		if (_kbhit())
		{
			a = _getch();
			if (a == 27) //esc
				break;
			else snake.HandleKey(a);
		}
		snake.Move();
		Sleep(100);
	}
    return 0;
}

