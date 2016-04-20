#include<iostream>
using namespace std;

class time{
    int hours;
    int minutes;
public:
    void getline(int h,int m)
    {
        hours=h;
        minutes=m;

    }
    void putline()
    {
        cout<<hours<<"Hours And";
        cout<<minutes<<"Minutes";
    }
    void sum(time,time);

};
void time::sum(time t1,time t2)
{
    minutes=t1.minutes+t2.minutes;
    hour=minutes/60;
    minutes=minutes%60;
     hours=hours+t1.hours+t2.hours;

}
int main()
{
    time T1,T2,T3;
    T1.getline(2,45);
    T2.getline(3,30);
    T3.sum(T1,T2);

    cout<<"T1:";
    T1.putline();
    cout<<"T2:";
    T2.putline();
    cout<<"T3:";
    T3.putline();

    return 0;


}
