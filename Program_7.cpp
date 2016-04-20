#include<iostream>
using namespace std;

inline int minimum(int a , int b)
{
    return (a<b)?a:b;
}
int main()
{
    cout<<minimum(10,20);
    return 0;
}
