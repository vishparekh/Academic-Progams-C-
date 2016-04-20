#include <iostream>

using namespace std;

int add(int &x,int &y);

void sub(int x,int y);

void mul(int &x,int &y);

void div(int x,int y);

void evenodd(int &x);

int main()
{


    int ch,a,b;

    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;

    cout<<"5.To Check Given No. is Even or Odd"<<endl;

    cout<<"Enter Your Choice";

    cin>>ch;

    switch(ch)
    {
    case 1:
        cout<<"Enter a&b:";
        cin>>a>>b;
        cout<<"Sum="<<add(a,b);
        break;

    case 2:
        cout<<"Enter a&b=";
        cin>>a>>b;
        sub(a,b);
        break;

    case 3:
        cout<<"Enter a&b=";
        cin>>a>>b;

        mul(a,b);
        break;

    case 4:
        cout<<"Enter a&b:";
        cin>>a>>b;
        div(a,b);
        break;

    case 5:
        cout<<"Enter a=";
        cin>>a;

        evenodd(a);
        break;

    default:
        cout<<"Invalid Entity:";

    }
    return 0;
}

int add(int &x,int &y)
{
    int z;
    z=x+y;

    return z;

}

void sub(int x,int y)
{
    int z=x-y;
    cout<<"Substract="<<z;

}

void mul(int &x,int &y)
{
    int z=x*y;
    cout<<"Mul="<<z;
}


void div(int x,int y)
{
    float z;
    z=(float)x/y;
    cout<<"Division="<<z;

}

void evenodd(int &x)
{
    if(x%2==0)
    {
        cout<<"Given Number is Even: ";
    }
    else
    {
        cout<<"Given Number is ODD:";
    }
}
