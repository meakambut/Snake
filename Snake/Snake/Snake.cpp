#include "stdafx.h"
#include "Snake.h"
#include "Direction.h"
#include "Point.h"
#include "list"

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
	Point nextPoint(head.x, head.y, head.sym);
	nextPoint.Move(1, direction);
	return nextPoint;
}

Snake::~Snake()
{
}
