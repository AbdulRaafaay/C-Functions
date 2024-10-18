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
	int i,j,rows=1,rows1=6;
	char a=65;
	for ( i=1; i<=rows; i++ )
	{
		for ( j=1; j<=6; j++,a++ )
		{
			cout << a;
		}
		for ( j=1,a=69; j<=5; j++,a-- )
		{
			cout << a;
		}
			
	}
	cout << endl;
	for ( i=1; i<=rows1; i++ )
	{
		for ( j=1,a=65; j<=rows1-i; j++,a++ )
		{
			cout << a;
		}
		for ( j=1; j<=i; j++ )
		{
			cout << " ";
		}
		for ( j=2; j<=i; j++ )
		{
			cout << " ";
		}
		for ( j=1,a=70-i; j<=rows1-i; j++,a-- )
		{
			cout << a;
		} 
	cout << endl;
		
	}
}
