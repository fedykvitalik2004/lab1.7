#pragma once
#include "Point.h"
#include <string>
class Triangle
{
private:
	Point P1;
	Point P2;
	Point P3;
public:
	void Display();            //used
	double Square();           //used
	double Perimtr();       //used        

	void SetX1(double a) { P1.SetX(a); }            //used all
	void SetY1(double a) { P1.SetY(a); }
	void SetX2(double a) { P2.SetX(a); }
	void SetY2(double a) { P2.SetY(a); }
	void SetX3(double a) { P3.SetX(a); }
	void SetY3(double a) { P3.SetY(a); }

	double GetX1() { return P1.GetX(); };     //used all
	double GetY1() { return P1.GetY(); };
	double GetX2() { return P2.GetX(); }
	double GetY2() { return P2.GetY(); };
	double GetX3() { return P3.GetX(); };
	double GetY3() { return P3.GetY(); };

	double Height1();          //used
	double Height2();            //used
	double Height3();           //used

	double get_a() { return P1.LengthPP(P1, P2); };           //довжина сторони          used
	double get_b() { return P2.LengthPP(P2, P3); };           //used
	double get_c() { return P3.LengthPP(P3, P1); };            //used

	double get_A();   //в радіанах  used
	double get_B();     //used
	double get_C();        //used

	void Read();                                 //used
	bool Init(double a, double b,double c,double d,double e ,double f);            //used
	const char* toString();                       //nused
};

