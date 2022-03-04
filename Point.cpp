#include "Point.h"
#include <math.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

double Point::LengthPP(Point l, Point r)
{
	double a = l.x - r.x;
	double b = l.y - r.y;
	return sqrt(a * a + b * b);
}

void Point::PolarCo()
{
	const double PI = 3.141592;
	double a = LengthOO();

	if (x > 0)
	{
		if (y >= 0)
			y = atan(y / x);
		else
			y = atan(y / x) + 2 * PI;
	}
	else
	{
		if (x < 0)
			y = atan(y / x) + PI;
		else
		{
			if (y > 0)
				y = PI / 2;
			else
				y = 3 * PI / 2;
		}
	}
	x = a;
}

bool Point::Compare(Point l, Point r)
{
	if (l.x == r.x && l.y == r.y)
		return true;
	else
		return false;
}

void Point::Read()
{
	double a, b;

	cout << "Input values" << endl;
	cout << "x="; cin >> a;
	cout << "y="; cin >> b;

	Init(a, b);
}

void Point::Display()
{
	cout << "Values:" << endl;
	cout << " x=" << x << endl;
	cout << " y=" << y << endl;
}

const char* Point::toString()
{
	stringstream sout;

	sout << "x=" << x << " and y=" << y;

	return sout.str().c_str();
}






