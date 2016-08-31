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

	Obstacles obsList;
	Snake *fp;

	VerticalLine *vp, v1(1, 10, 5, '+');
	vp = &v1;
	obsList.Add(vp);

	HorizontalLine *hp, h1(45, 65, 9, '+');
	hp = &h1;
	obsList.Add(hp);

	HorizontalLine topLine(0, 79, 0, '+');
	hp = &topLine;
	obsList.Add(hp);

	HorizontalLine bottomLine(0, 78, 24, '+');
	hp = &bottomLine;
	obsList.Add(hp);

	VerticalLine leftLine(0, 24, 0, '+');
	vp = &leftLine;
	obsList.Add(vp);

	VerticalLine rightLine(0, 23, 79, '+');
	vp = &rightLine;
	obsList.Add(vp);

	obsList.Draw();

	
	//drawing points
	FoodCreator foodCreator(80, 25, '*');
	Point food = foodCreator.CreateFood();
	food.Draw();

	Point p(6, 5, '*');
	Snake snake(p, 4, RIGHT);
	snake.Draw();
	fp = &snake;
	obsList.Add(fp);
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
		else
		{
			if (snake.IsCrashed(obsList))
				break;
			if (snake.Eat(food))
			{
				food.sym = '*';
				food.Draw();
				food = foodCreator.CreateFood();
				while (snake.IsFoodInsideObstacles(obsList, food))
				{
					cout << "inside\n";
					food = foodCreator.CreateFood();
				}
				food.Draw();
			}
			snake.Move();
			Sleep(150);
		}

		obsList.Remove(fp);
		fp = &snake;
		obsList.Add(fp);
	}

	//system("color 05");
	//cout << cin.get();

	return 0;
}

