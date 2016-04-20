// manual_18.cpp : Defines the entry point for the console application.
//

#include<iostream>
using namespace std;

class shape
{
public:
	virtual void area()
	{
		cout << "parent area" << endl;
	}
};

class rec :public shape
{
public:
	void area()
	{
		cout << "retangle area" << endl;
	}
};

class tri :public shape
{
public:
	void area()
	{
		cout << "tri area" << endl;
	}
};

int main()
{
	shape a;
	shape *s = &a;
	rec r;
	tri t;
	s->area();
	s = &r;
	s->area();
	s = &t;
	s->area();
	return 0;
}

