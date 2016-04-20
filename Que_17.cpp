#include<iostream>
#include<conio.h>
using namespace sample
{
        int a=1;
        void output(int n)
	{
		cout<<"N:"<<n<<endl;
	} 
}
int main()
{
    sample::output(5);
    cout<<sample::x<<endl;
    
    return 0;
}