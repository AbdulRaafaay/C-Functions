#include <iostream>
using namespace std;

/* Name : Abdul Rafay
   Roll No : 23i-2027
   Assignment 6 */

void TIME(unsigned short&, unsigned short&, unsigned short&, unsigned short&);

int main ()
{
	unsigned short time, hours=0, minutes=0, seconds=0;
	cout << "\nEnter a 2 bytes long Time entry : ";
	cin >> time;
	TIME(time,hours,minutes,seconds);
	cout << "\n\nTIME IS : " << hours << " hrs " << minutes << " mins " << seconds << " secs"; 


return 0;
}

void TIME(unsigned short &time, unsigned short &hours, unsigned short &minutes, unsigned short  &seconds)
{
	hours = (time >> 11) & 31;
	minutes = ( (time << 6) >> 11) & 63;
	seconds = ( (time << 11) >> 11) & 31;
}
