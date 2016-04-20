#include<iostream>

using namespace std;

int main()
{
    int i;
    int *p=&i;
    i=3;
    std::cout<<*p<<std::endl;
    return 0;
}
