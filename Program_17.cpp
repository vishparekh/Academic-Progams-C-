// manual_17.cpp : Defines the entry point for the console application.
//

#include<iostream>
using namespace std;

class college
{
protected:
	char cn[20],ca[20];
};
class student : public college
{
	char name[20];
	int m1, m2, m3;
public:
	student()
	{
		cout << "Enter name:";
		cin >> name;
		cout << "Enter college name:";
		cin >> cn;
		cout << "Enter college Area:";
		cin >> ca;
		cout << "Enter marks of three subject:";
		cin >> m1 >> m2 >> m3;
	}
	void display()
	{
		float m;
		m =(float) (m1 + m2 + m3) / 3;
		cout << "Name:" << name << endl;
		cout << "College:" << cn << endl;
		cout << "Address:" << ca << endl;
		cout << "Avg marks:" << m << endl;
	}
};

int main()
{
	student s;
	s.display();
	return 0;
}

