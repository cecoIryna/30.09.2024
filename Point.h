#pragma once
class Point
{
	int x;
	int y;
public:
	Point() = default;
	Point(int a, int b);
	void Init(int a, int b);
	void Print();
	Point Sum(Point b) const;

	Point operator + (Point b);
	Point operator + (int b);

	Point operator - (Point b);
	int operator*(int b);
	Point operator*(Point b);
	Point& operator++();
};

