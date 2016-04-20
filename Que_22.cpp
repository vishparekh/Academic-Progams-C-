#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=7,b=7,c,d;
    register int r; 
    
    r=1;
    c=r+1;
    d=r+b+a+c;
    cout<<"Value of D is:"<<d<<endl;
    return 0;
}