#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	static int i=1;
	int i=0;
	if(i<11)
	{
		cout<<i++;
		main();
	}
	return 0;
}