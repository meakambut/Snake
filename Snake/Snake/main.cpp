// Snake.cpp: определяет точку входа для консольного приложения.
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
#include "FoodCreator.h"
#include "stdio.h"
#include "Obstacles.h"

using namespace std;

void Draw(Figure* figure)
{
	(*figure).Draw();
}

int main()
{
	//set the window
	HANDLE out_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD crd = { 80, 25 };
	SMALL_RECT src = { 0, 0, crd.X - 1, crd.Y - 1 };
	SetConsoleWindowInfo(out_handle, true, &src);
	SetConsoleScreenBufferSize(out_handle, crd);


	//obstacles identification
	VerticalLine *vp, v1(0, 10, 5, '%');
	vp = &v1;

	HorizontalLine *hp, h1(45, 65, 9, '!');
	hp = &h1;

	Snake *fp;

	Obstacles obsList;
	obsList.Add(hp);
	
	obsList.Add(vp);

	obsList.Draw();

	//drawing the frame
	HorizontalLine topLine(0,79,0,'+');
	HorizontalLine bottomLine(0, 79, 24, '+');
	VerticalLine leftLine(0, 24, 0, '+');
	VerticalLine rightLine(0, 23, 79, '+');

	//topLine.Draw();
	//leftLine.Draw();
	//bottomLine.Draw();
	//rightLine.Draw();


	//drawing points
	FoodCreator foodCreator(80, 25, '#');
	Point food = foodCreator.CreateFood();
	food.Draw();

	Point p(6, 5, '*');
	Snake snake(p, 4, RIGHT);
	snake.Draw();
	Sleep(100);

	char a;
	cout << endl;
	int i = 0;
	while (true)
	{
		i = 1;
		if (snake.IsCrashed(obsList))
			break;
		if (snake.Eat(food))
		{
			food.sym = '*';
			food.Draw();
			food = foodCreator.CreateFood();
			food.Draw();
		}

		if (_kbhit())
		{
			a = _getch();
			if (a == 27) //esc
				break;
			else snake.HandleKey(a);
		}
		else
		{
			fp = &snake;
			obsList.Add(fp);
			snake.Move();
			Sleep(150);
		}
		i++;
		if (i == 10)
		{

		}
	}

	//system("color 05");
	//cout << cin.get();

	return 0;
}

