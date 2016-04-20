#include<iostream>
using namespace std;

class test{
    int a,b;
public:
    void getdata()
    {
        cout<<"Enter a & b:";
        cin>>a>>b;
    }
    int max()
    {
        if(a>b)
            return a;
        else
            return b;
    }
    void display()
    {
        cout<<"\n Max:"<<max();
    }
};
int main()
{
    test t;
    t.getdata();
    t.display();
    return 0;
}
