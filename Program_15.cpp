#include <iostream>

using namespace std;

class test
{
    int a,b;
public:
    test(int c)
    {
        a=0;
        b=0;

    }
    test (int x,int y)
    {
        a=x;
        b=y;
    }

    test (test &z)
    {
        a=z.a;
        b=z.b;
    }
    test()
    {
        cout<<"\n Destructor Invoked";
    }

    void display()
    {
        cout<<"\na="<<a<<"\tb="<<b;

    }
};
int main()
{
    test t;
    test t1(1,2);
    test t2(t1);
    t.display();
    t1.display();
    t2.display();
    return 0;
}
