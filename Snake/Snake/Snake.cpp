#include "stdafx.h"
#include "list"
#include "Obstacles.h"
#include "Snake.h"
#include "Point.h"
#include "Direction.h"
#include "Figure.h"

using namespace std;

Snake::Snake(Point tail, int length, Direction _direction)
{
	for (int i = 0; i < length; i++)
	{
		direction = _direction;
		Point p(tail.x, tail.y, tail.sym);
		p.Move(i, direction);
		pList.push_back(p);
	}
}

void Snake::Move()
{
	list<Point>::iterator p = pList.begin();
	Point tail(p->x, p->y, p->sym);
	pList.erase(p);
	//pList.pop_front;
	Point head = GetNextPoint();
	//Point head(tmp.x, tmp.y, tmp.sym);
	pList.push_back(head);

	tail.Clear();
	head.Draw();


}

Point Snake::GetNextPoint()
{
	list<Point>::iterator p = pList.end();
	p--;
	Point head(p->x, p->y, p->sym);
	Point nextPoint = head;
	nextPoint.Move(1, direction);
	return nextPoint;
}

void Snake::HandleKey(char a)
{
	if (a == 72) //up
	{
		if (direction == DOWN)
		{
			pList.reverse();
		}
		direction = UP;
	}
	else if (a == 75) //left
	{
		if (direction == RIGHT)
		{
			pList.reverse();
		}
		direction = LEFT;
	}
	else if (a == 77) //right
	{
		if (direction == LEFT)
		{
			pList.reverse();
		}
		direction = RIGHT;
	}
	if (a == 80) //down
	{
		if (direction == UP)
		{
			pList.reverse();
		}
		direction = DOWN;
	}
}

bool Snake::Eat(Point food)
{
	Point head = GetNextPoint();
	if (head.match(food))
	{
		food.sym = head.sym;
		pList.push_back(food);
		return true;
	}
	else
		return false;
}

bool Snake::IsCrashed(Obstacles obsList)
{
	Point head = GetNextPoint();

	if (obsList.IsCrashed(head))
		return true;
	else
		return false;
}

bool Snake::IsFoodInsideObstacles(Obstacles obsList, Point food)
{
	if (obsList.IsCrashed(food))
		return true;
	else
		return false;
}

Snake::~Snake()
{
}
