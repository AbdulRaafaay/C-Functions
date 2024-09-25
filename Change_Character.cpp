#include <iostream>
using namespace std;

/* Name : Abdul Rafay
   Roll No : 23i-2027
   Assignment 6 */

void Change(char,int,char&,char&);

int main ()
{
	char a,next=0,prev=0;
	int num;
	cout<<"\nEnter Character = ";
	cin>>a;
	cout<<"Enter a number = ";
	cin>>num;
	Change(a,num,next,prev);
	cout<< endl << num <<"th next value is : "<< next <<endl;
	cout<< num <<"th backward value is : "<< prev <<endl;

return 0;
}

void Change(char a,int num,char &next,char &prev)
{
	 next = a + num;
	 prev = a - num;	
}

