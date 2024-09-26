#include <iostream>
using namespace std;

/* Name : Abdul Rafay
   Roll No : 23i-2027
   Assignment 6 */

void output(int &,int &,int &,int &,bool &);

int main ()
{
	int cur, a=0, b=0, c=0;
	bool choice=0;
	cout << "Enter the PKR : ";
	cin >> cur;
	output(cur,a,b,c,choice);
	if ( choice==1 )
	{
		cout << "\n\nIt is Possible!" << endl;
		cout << "\n   Notes :  Quantity";
		cout << "\n    6           " << a;
		cout << "\n    9           " << b;
		cout << "\n   20           " << c;
	}
	else
	{
		cout << "\n\n:::   NOT POSSIBLE   :::";
	}
	
return 0;
}

void output(int &cur,int &a,int &b,int &c,bool &choice)
{
	c=0;
	do
	{
		b=0;
		do
		{
			a=0;
			do
			{
				if ( (6*a) + (9*b) + (20*c) == cur )
				{
					choice=1;
					break;
				}
			a++;
			}
			while ( a<=cur/6 );
		if ( choice==1 )
			break;
			b++;
		}
		while ( b<=cur/9 );
	if ( choice==1 )
		break;
		c++;
	}
	while ( c<=cur/20 );
}
