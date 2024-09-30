#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(int a, int b)
{
	x = a;
	y = b;
}

void Point::Init(int a, int b)
{
	x = a;
	y = b;
}

void Point::Print()
{
	cout << x << "\t" << y << endl;
}

Point Point::Sum(Point b) const
{
	Point rez;
	rez.x = this->x + b.x;
	rez.y = this->y + b.y;
	return rez;
}
Point Point::operator+(Point b)
{
	return Point(this->x + b.x, this->y + b.y);
}

Point Point::operator+(int b)
{
	return Point(this->x + b, this->y + b);
}

Point Point::operator-(Point b)
{
	return Point(this->x - b.x, this->y - b.y);
}

int Point::operator*(int b)
{
	return (x*y* b);
}

Point Point::operator*(Point b)
{
	return Point(this->x * b.x, this->y * b.y);
}

Point& Point::operator++()
{
	this->x++;
	this->y++;
	return *this;
}


