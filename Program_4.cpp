#include <iostream>
#include <iomanip>

using namespace std;

class student
{
    int rn;
    char name[10];
    int sub[5];
    int total;
    int per;

public:
    void getdata();
    void display();
};

void student :: getdata()
{

    int i;
    cout<<"Enter Roll No of Student:";
    cin>>rn;

    cout<<"Enter Name of Student: ";
    cin>>name;
    total=0;

    for(i=0;i<5;i++)
    {
        cout<<"Enter Marks of Sub "<<i+1;
        cin>>sub[i];
        total=total+sub[i];
    }
    per=total/5;
}
void student :: display()
{
    cout<<"\n "<<setw(5)<<rn;
    cout<<setw(5)<<name;

    for(int i=0;i<5;i++)
        cout<<setw(5)<<sub[i];

    cout<<setw(5)<<total;
    cout<<setw(5)<<per;
}
int main()
{
    student s[10];
    int n,i;
    cout<<"Enter No. of Student";
    cin>>n;

    for(i=0;i<n;i++)
    {
        s[i].getdata();
    }
    cout<<"\n"<<setw(5)<<"Roll NO";
    cout<<setw(5)<<"NAME";
    cout<<setw(5)<<"SUB1";
    cout<<setw(5)<<"SUB2";
    cout<<setw(5)<<"SUB3";
    cout<<setw(5)<<"SUB4";
    cout<<setw(5)<<"SUB5";
    cout<<setw(5)<<"Total";
    cout<<setw(5)<<"Per";

    for(i=0;i<n;i++)
    {
        s[i].display();
    }
    return 0;
}
