#pragma once
#include <math.h>
#include <string>

class Point
{
private:
	double x;
	double y;
public:
	void MoveX(double a) { x += a; };               //used          
	void MoveY(double a) { y += a; };                 //used       
	double LengthOO(){ return sqrt(x * x + y * y); };      //used   
	double LengthPP(Point l, Point r);            //used       
	void PolarCo();                          //used           
	bool Compare(Point l, Point r);          //used                

	void SetX(double a) { x = a; };          //used 
	void SetY(double a) { y = a; };          //used         
	double GetX()const { return x; } ;       //used                 
	double GetY()const { return y; };        //used                

	void Init(double a, double b) { x = a; y = b; };   //used       
	void Read();                                   //used           
	void Display();                               //used            
	const char* toString();                         //nused  
};

