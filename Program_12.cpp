#include<iostream>
using namespace std;

class test{
    int a,b;
public:
    void getdata()
    {
        cout<<"\nEnter a&b:";
        cin>>a>>b;
    }
    void display()
    {
        cout<<"\n"<<a<<"\t"<<b;
    }
    test sum(test &x)
    {
        test z;
        z.a=a+x.a;
        z.b=b+x.b;

        return z;
    }
};
int main()
{
    test t1,t2,t3;
    t1.getdata();
    t2.getdata();

    cout<<"\n A:"<<"\t"<<"B:\n";
    t1.display();
    t2.display();

    cout<<"\n";

    t3=t1.sum(t2);
    t3.display();

    return 0;
}
