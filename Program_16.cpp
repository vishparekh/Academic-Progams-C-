#include <iostream>

using namespace std;

class test
{
    int a;
    static int count;

public:
    void getdata()
    {
        cout<<"\nEnter a=";
        cin>>a;
        count++;
    }
    static void getcount()
    {
        cout<<"\nCount="<<count;
    }
};
int test :: count;

int main()
{
    test t1,t3;

    t1.getdata();

    test :: getcount();

    t3.getdata();

    test :: getcount();

    return 0;
}
