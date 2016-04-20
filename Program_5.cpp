#include <iostream>

using namespace std;


class vec
{
    float a[10];
    int i;

public:
    void create()
    {
        for(i=0;i<10;i++)
        {
            cout<<"Enter No:";
            cin>>a[i];
        }
    }
    void mul()
    {
        int x;
        cout<<"Enter No. You Want to Multiply:";
        cin>>x;

        for(i=0;i<10;i++)
        {

            cout<<x*a[i];
            }

    }

    void modify()
    {
        int l,y;
        cout<<"\n Which Place You Want to Enter?";

        cin>>l;
        cout<<"\n Which no u want to Enter on That Location=";

        cin>>y;

        for(i=0;i<10;i++)
        {
            a[l-1]=y;
            cout<<"\n"<<a[i];
        }
    }

    void display()
    {
        for(i=0;i<10;i++)
        {
            cout<<a[i];

            if(i!=9)
                cout<<",";

        }
    }
};

int main()
{
    int ch;
    vec v;
    do
    {
        cout<<"1. Create"<<endl;
        cout<<"2. Multiply"<<endl;
        cout<<"3. Modify"<<endl;

        cout<<"Enter Yout Choice";

        cin>>ch;

        switch(ch)
        {
        case 1:
            v.create();
            break;

        case 2:
            v.mul();
            break;

        case 3:
            v.modify();
            break;

        case 4:
            v.display();
            break;

            default: cout<<"Invalid";

        }
    }while(ch!=4);
    return 0;
}
