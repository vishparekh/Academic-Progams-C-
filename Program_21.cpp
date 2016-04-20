// manual_21.cpp : Defines the entry point for the console application.
//

#include<iostream>
using namespace std;

template<class T>
T mini(T a[],int n)
{
	T mi = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < mi)
			mi = a[i];
	}
	return mi;
}


int main()
{
	int a[10],n,mi;
	cout << "How many values you want to enter:";
	cin >> n;
	cout << "Enter " << n << "Values:";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	mi = mini(a,n);
	cout << "Minimum:" << mi << endl;
	return 0;
}

