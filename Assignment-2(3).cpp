/*Name: Parekh Vishal
Enrollment Number: 130280107064
Date: 06/05/2015*/



#include<iostream>
using namespace std;

/*Here class time contains a constructor which adds the time.*/

class time{

public:
    int hours,hours1;
    int minutes,minutes1;

time(int h ,int m,int h1,int m1)
{
    hours=h;
    minutes=m;
    hours1=h1;
    minutes1=m1;
    minutes=minutes1+minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+hours1+hours;

    /*Displaying the time after addition of two times.*/
    cout<<hours<<" Hours And ";
    cout<<minutes<<" Minutes";

}
};
int main()
{
    time T1(2,45,3,30);

    return 0;


}
