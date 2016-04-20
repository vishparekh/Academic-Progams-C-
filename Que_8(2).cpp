#include<iostream>
using namespace std;
void recursion(int)
void recursion(int num)
{
    cout<<num<<endl;
    if(num>=10)
        return;
    else
    {
    recursion(num+1);
    }
}
int main()
{
	recursion(1);
	return 0;
}