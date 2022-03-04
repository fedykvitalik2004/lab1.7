#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Point.h"
#include "Triangle.h"

using namespace std;

int main()
{
	Triangle t;

	cout << "Case1" << endl;
	t.Read();
	t.Display();
	cout << "Square is " << t.Square() << endl;
	cout << "Perimeter=" << t.Perimtr() << endl;
	cout << "Side a=" << t.get_a() << endl;
	cout << "Side b=" << t.get_b()<<endl;
	cout << "Side c=" << t.get_c() << endl;
	cout << "Height(A) is " << t.Height1() << endl;
	cout << "Height(B) is " << t.Height2() << endl;
	cout << "Height(C) is " << t.Height3() << endl;
	cout << "Angle A=" << t.get_A() << endl;
	cout << "Angle B=" << t.get_B() << endl;
	cout << "Angle C=" << t.get_C() << endl << endl;

	Point *t1=new Point();
	double a;

	cout << "Case2" << endl;
	t1->Read();
	cout << "Change x: x=x+a, where a="; cin >> a;
	t1->MoveX(a);
	cout << "Change y: y=y+a, where a="; cin >> a;
	t1->MoveY(a);
	t1->Display();
	cout << "Distance from O(0, 0) to the point is " << t1->LengthOO() << endl;
	t1->PolarCo();
	t1->Display();
	cout << endl << endl;

	Point* t2 = new Point[1];

	cout << "Case3" << endl;
	t2[0].Read();
	cout << "Change x: x=x+a, where a="; cin >> a;
	t2[0].MoveX(a);
	cout << "Change y: y=y+a, where a="; cin >> a;
	t2[0].MoveY(a);
	t2[0].Display();
	cout << "Distance from O(0, 0) to the point is " << t2[0].LengthOO() << endl;
	t2[0].PolarCo();
	t2[0].Display();
	cout << endl << endl;

	Point t3[1];

	cout << "Case4" << endl;
	t3[0].Read();
	cout << "Change x: x=x+a, where a="; cin >> a;
	t3[0].MoveX(a);
	cout << "Change y: y=y+a, where a="; cin >> a;
	t3[0].MoveY(a);
	t3[0].Display();

	cin.get();
	return 0;
}
