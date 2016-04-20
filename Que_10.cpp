#include<iostream>                                  
using namespace std;
class Sample
{
    public:
        int b;
        void initialize()
        {
            x=1;
        }
}s;
int main()
{
    s.input();
    cout<<sizeof(s)<<endl;
    cout<<sizeof(s.b)<<endl;
    cout<<sizeof void s.initialize()<<endl;
    return 0;
}