#include <iostream>


using namespace std;

class student
{
    int rollno;
    char name[20];

    public:
            void getdata();
            void display();

};

void student :: getdata()
{
    cout<<"Enter Roll No: ";
    cin>>rollno;
    cout<<"Enter Name: ";
    cin>>name;

}

void student :: display()
{
    cout<<"\n Roll No \t Name:";
    cout<<"\n "<<rollno<<"\t      "<<name;

}

int main()
{
    student s;
    s.getdata();
    s.display();
    return 0;
}
