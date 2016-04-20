// manual_22.cpp : Defines the entry point for the console application.
//

#include<iostream>
using namespace std;

int divi(int a, int b)
{
		if (b == 0)
			throw "divided by 0\n";
		return a / b;	
}

int main()
{
	int a, b;
	cin >> a >> b;
	try
	{
		cout << divi(a, b);
	}
	catch (char *msg)
	{
		cout << msg;
	}
}
