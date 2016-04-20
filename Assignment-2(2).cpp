/*Name: Parekh Vishal
Enrollment Number: 130280107064
Date: 06/05/2015*/

#include<iostream>
#include<ctime>

using namespace std;

/* time_t and tm is structure which represents the date and time */
/* Class time contains the constructor A which shows the current time of system according to UTC and system format*/
class A
{
public:
	A(time_t timer)
	{

		time(&timer);  /* get current time; same as: timer = time(NULL)  */


        /* convert timer to string form */
        char* date = ctime(&timer);
        cout << "The local date and time is: " << date << endl;
        /* convert timer to tm struct for UTC*/
        tm *gmt = gmtime(&timer);
        /* This returns a pointer to the time in the form of a tm structure.*/
        date = asctime(gmt);
        cout << "The UTC date and time is:"<< date << endl;
	}
};

int main()
{
    /* current date/time based on current system . */
	time_t timer=NULL;
	A a(timer);

	return 0;
}
