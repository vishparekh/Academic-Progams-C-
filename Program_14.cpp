#include<iostream>
using namespace std;


class DB;
class DM
{
	double dit;
public:
	void getdata()
	{
		cout << "Enter distance in Meter:";
		cin >> dit;
	}
	DM friend operator +(DM &,DB &);
	void show()
	{
		cout << "Value:" << dit;
	}
};


class DB
{



private:
    	double dit;
public:
	DB()
	{
		cout << "Enter distance in Feet:";
		cin >> dit;
	}
	DM friend operator +(DM &,DB &);
};


DM operator +(DM &x, DB &y)
{
	DM z;
	z.dit = x.dit + (y.dit * 0.3048);
	return z;
}

int main()
{
	DM d1,d3;
	d1.getdata();
	DB d2;
	d3 = d1 + d2;
	d3.show();
	return 0;
}

