#include <iostream>
using namespace std;

/* Name : Abdul Rafay
   Roll No : 23i-2027
   Assignment 6 */

int Sum(int,int);
int Sub(int,int);
int Prod(int,int);
float division(float,float);
int Rem(int,int);

int main ()
{
	int num1, num2, sum, sub, prod, div, rem;
	char operation;
	cout << "\n:::   MATH CALCULATOR   :::" << endl;
	cout << "\n\nEnter the first number : ";
	cin >> num1;
	cout << "Enter the second number : ";
	cin >> num2;
	cout << "\nEnter \'+\' for ADDITION";
	cout << "\nEnter \'-\' for SUBTRACTION";
	cout << "\nEnter \'*\' for MULTIPLICATION";
	cout << "\nEnter \'/\' for DIVISION";
	cout << "\nEnter \'%\' for REMAINDER" << endl;
	cout << "\n\nPlease enter the OPERATION : ";
	cin >> operation;
	
	switch ( operation )
	{
		case '+':
			 sum = Sum(num1,num2);
			 cout << "\nThe Sum of given numbers = " << sum;
		break;
		
		case '-':
			 sub = Sub(num1,num2);
			 cout << "\nThe Subtraction of given numbers = " << sub;
		break;
			
		case '*':
			 prod = Prod(num1,num2);
			 cout << "\nThe Product of given numbers = " << prod;
		break;
			
		case '/':
			 switch ( num2 )
			 {
			 	case 0:
			 		cout << "\n:::   ERROR   :::" << endl;	
			 	break;
			 	default:
			 		div = division(num1,num2);
			 		cout << "\nThe Divison of given numbers = " << div;
			 }
		break;
			
		case '%':
			 switch ( num2 )
			 {
			 	case 0:
			 		cout << "\n:::   ERROR   :::" << endl;
			 	default:
			 		rem = Rem(num1,num2);
			 		cout << "\nThe Remainder of given numbers = " << rem;
			 }
		break;
		
		default:
			 cout << "\n:::   ERROR   :::" << endl;
			 cout << ":::   INVALID INPUT   :::";
	}


return 0;
}

int Sum(int num1,int num2)
{
	int sum=num1+num2;
	return sum;
}

int Sub(int num1,int num2)
{
	int sub=num1-num2;
	return sub;
}

int Prod(int num1,int num2)
{
	int prod=num1*num2;
	return prod;
}

float division(float num1,float num2)
{
	float div=num1/num2;
	return div;
}

int Rem(int num1,int num2)
{
	int rem=num1/num2;
	return rem;
}
