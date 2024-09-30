#include "Point.h"
#include <iostream>
using namespace std;

template <class T>
void PrintSum(T a, T b)
{
	cout << a + b;
}

int main()
{
	Point a(1, 2);
	Point b(3, 4);

	Point rez = a + b;
	rez.Print();
	Point rez1 = a.operator + (b);
	rez1.Print();
	Point rez2 = a - b;
	rez2.Print();
	Point rez3 = a * b;
	rez3.Print();
	int rez4 = a * 2;
	cout << rez4;

	//Point rez = a + b;
	//Point rez1 = a + 3;

	//PrintSum(3, 5);

	a.Print();
	Point rez3 = ++a + 10;
}