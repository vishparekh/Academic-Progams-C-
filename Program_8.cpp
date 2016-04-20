#include<iostream>
#include<iomanip>

using namespace std;

struct india{
    char city_name[10];
    double pop;
    double lit;
    double ill;
}A[5];
int main()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        cout<<"Enter Name:";
        cin>>A[i].city_name;
        cout<<"Enter Population:";
        cin>>A[i].pop;
        cout<<"Enter Literacy:";
        cin>>A[i].lit;
        A[i].ill=(A[i].lit/A[i].pop)*100;
        cout<<"Literacy Rate:"<<A[i].ill;
        cout<<"\n";

    }

    return 0;
}
