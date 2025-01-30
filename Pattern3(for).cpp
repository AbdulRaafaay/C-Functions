#include <iostream>
using namespace std;

/* Name : Abdul Rafay
   Roll No : 23i-2027
   Assignment 6 */

void pattern(void);

int main ()
{
	pattern();
	
return 0;
}

void pattern(void)
{
	int i, j, rows=7;
	for ( i=1; i<=rows; i++ )
	{
		for ( j=1; j<=rows-i; j++ )
		{
			cout << "  ";
		}
		for ( j=1; j<=i; j++ )
		{
			cout << " __ ";
		}
		cout << endl;
		for ( j=1; j<=rows-i; j++ )
		{
			cout << "  ";
		}
		for ( j=1; j<=i; j++ )
		{
			cout << "|__|";
		} 
		cout << endl;
	}
	cout << "\n\n\n";
	rows=5;
	for ( i=1; i<=rows; i++ )
	{
		cout << " __ ";
		for ( j=1; j<=i-1; j++ )
		{
			cout << "   ";
		}
		cout << " __"; 
		cout << endl;
		for ( j=0; j<=i; j++ )
		{
			cout << "|__|";
			for ( j=1; j<=i-1; j++ )
			{
				cout << "   ";
			}
			cout << "|__|";
			cout << endl;
		}
	}
}


