#include "Triangle.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

void Triangle::Display()
{
	cout << "The coordinates of the first point: x1=" << GetX1() <<" and y1="<<GetY1()<< endl;
	cout << "The coordinates of the second point: x2=" << GetX2() << " and y2=" << GetY2() << endl;
	cout << "The coordinates of the third point: x3=" << GetX3() << " and y3=" << GetY3() << endl;
}

double Triangle::Square()
{
	double a = P1.LengthPP(P1, P2);                   //Phormula Herona
	double b = P2.LengthPP(P2, P3);
	double c = P3.LengthPP(P3, P1);

	double p = (a + b + c) / 2;
	double square = sqrt(p * (p - a) * (p - b) * (p - c));
	return square;
}

double Triangle::Perimtr()
{
	double a = P1.LengthPP(P1, P2);
	double b = P2.LengthPP(P2, P3);
	double c = P3.LengthPP(P3, P1);

	double perimtr= (a + b + c) / 3;
	return perimtr;
}

double Triangle::Height1()
{
	double a = P2.LengthPP(P1, P2);
	double b = Square();
	double height2 = 2 * b / a;
	return height2;
}

double Triangle::Height2()
{
	double a = P1.LengthPP(P2, P3);
	double b = Square();
	double height1 = 2 * b / a;
	return height1;
}

double Triangle::Height3()
{
	double a = P2.LengthPP(P3, P1);
	double b = Square();
	double height2 = 2 * b / a;
	return height2;
}

double Triangle::get_C()
{
	double a = get_a();
	double b = get_b();
	double a1 = P1.GetX() - P2.GetX();
	double a2 = P1.GetY() - P2.GetY();
	double b1 = P3.GetX() - P2.GetX();
	double b2 = P3.GetY() - P2.GetY();
	double multiplication = a1 * b1 + a2 * b2;
	double cosa = multiplication / (a * b);

	return acos(cosa);
}

double Triangle::get_A()
{
	double b = get_b();
	double c = get_c();
	double b1 = P2.GetX() - P3.GetX();
	double b2 = P2.GetY() - P3.GetY();
	double c1 = P1.GetX() - P3.GetX();
	double c2 = P1.GetY() - P3.GetY();
	double multiplication = b1 * c1 + b2 * c2;
	double cosb = multiplication / (b * c);

	return acos(cosb);
}

double Triangle::get_B()
{
	double a = get_a();
	double c = get_c();
	double a1 = P2.GetX() - P1.GetX();
	double a2 = P2.GetY() - P1.GetY();
	double c1 = P3.GetX() - P1.GetX();
	double c2 = P3.GetY() - P1.GetY();
	double multiplication = a1 * c1 + a2 * c2;
	double cosc = multiplication / (a * c);

	return acos(cosc);
}

bool Triangle::Init(double a, double b,double c, double d, double e,double f)
{
	SetX1(a);
	SetY1(b);
	SetX2(c);
	SetY2(d);
	if (!P1.Compare(P1, P2))
	{
		SetX3(e);
		SetY3(f);
		if (P2.Compare(P1, P3) || P3.Compare(P2, P3))
			return false;
		return true;
	}
	else
		return false;
}

void Triangle::Read()
{
	double a, b, c, d, e, f;
	int i = 0;
	do {
		if (i > 0)
			cout << "Wrong argument to Init" << endl;
		cout << "x1="; cin >> a;
		cout << "y1="; cin >> b;
		cout << "x2="; cin >> c;
		cout << "y2="; cin >> d;
		cout << "x3="; cin >> e;
		cout << "y3="; cin >> f;
		i += 1;
	} while (!Init(a, b, c, d, e, f));
}

const char* Triangle::toString()
{
	stringstream sout;

	sout<< "x1=" << P1.GetX() << " and y1=" << P1.GetY() <<"; " 
	    <<"x2=" << P2.GetX() << " and y2=" << P2.GetY() <<"; " 
	    <<"x3=" << P3.GetX() << " and y3=" << P3.GetY() << endl;

	return sout.str().c_str();
}
