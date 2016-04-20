// manual_18.cpp : Defines the entry point for the console application.
//

#include<iostream>
using namespace std;

class shape
{
public:
	int length, width;
	shape(int a, int b)
	{
		length = a;
		width = b;
	}
	virtual float area() = 0;
};

class rec :public shape
{
public:
	rec(int a, int b) :shape(a,b)
	{}
	float area()
	{
		return length*width;
	}
};

class tri :public shape
{
public:
	tri(int a, int b) :shape(a, b)
	{}
	float area()
	{
		return float((length*width) / 2);
	}
};

int main()
{
	shape *s=NULL;
	rec r(3,4);
	tri t(5,6);
	s = &r;
	cout << "area of triangle:" << s->area() << endl;
	s = &t;
	cout << "area of rectangle:" << s->area() << endl;
	
	return 0;
}

