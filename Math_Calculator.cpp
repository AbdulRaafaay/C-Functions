#include <iostream>
using namespace std;

/* Name : Abdul Rafay
   Roll No : 23i-2027
   Assignment 6 */

int sum(int,int);
float sum(float,float);
double sum(double,double);

int sub(int,int);
float sub(float,float);
double sub(double,double);

int prod(int,int);
float prod(float,float);
double prod(double,double);

int division(int,int);
float division(float,float);
double division(double,double);

int power(int,int);
float power(float,float);
double power(double,double);


int main ()
{
	int operation,choice;
	cout << "\t\t:::    MATH CALCULATOR    :::" << endl;
	do{
	cout << "\n1. Addition" << endl;
	cout << "2. Difference" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Power" << endl;
	cout << "\nWhich Operation would you like to perform? ";
	cin >> operation;
	if ( operation==1 )
	{
		do{
		
			cout << "\n1. Integer" << endl;
			cout << "2. Float" << endl;
			cout << "3. Double" << endl;
			cout << "\nWhich DATA TYPE would you like? ";
			cin >> choice;
			if ( choice==1 )
			{
				int num1,num2,result;
				cout << "\nEnter the First number : ";
				cin >> num1;
				cout << "Enter the Second number : ";
				cin >> num2;
				result = sum(num1,num2);
				cout << "\n\nThe SUM of the given numbers = " << result;
			}	
			else if ( choice==2 )
			{
				float num1,num2,result;
				cout << "\nEnter the First number : ";
				cin >> num1;
				cout << "Enter the Second number : ";
				cin >> num2;
				result = sum(num1,num2);
				cout << "\n\nThe SUM of the given numbers = " << result;
			}
			else if ( choice==3 )
			{
				double num1,num2,result;
				cout << "\nEnter the First number : ";
				cin >> num1;
				cout << "Enter the Second number : ";
				cin >> num2;
				result = sum(num1,num2);
				cout << "\n\nThe SUM of the given numbers = " << result;
			}
			else
			{
				cout << "\n\t\t:::    INVALID INPUT    :::" << endl;
			}
		}while (choice>3 || choice<1);
		
	}
		
	else if ( operation==2 )
	{
		do{
		
			cout << "\n1. Integer" << endl;
			cout << "2. Float" << endl;
			cout << "3. Double" << endl;
			cout << "\nWhich DATA TYPE would you like? ";
			cin >> choice;
			if ( choice==1 )
			{
				int num1,num2,result;
				cout << "\nEnter the First number : ";
				cin >> num1;
				cout << "Enter the Second number : ";
				cin >> num2;
				result = sub(num1,num2);
				cout << "\n\nThe DIFFERENCE of the given numbers = " << result;
			}	
			else if ( choice==2 )
			{
				float num1,num2,result;
				cout << "\nEnter the First number : ";
				cin >> num1;
				cout << "Enter the Second number : ";
				cin >> num2;
				result = sub(num1,num2);
				cout << "\n\nThe DIFFERENCE of the given numbers = " << result;
			}
			else if ( choice==3 )
			{
				double num1,num2,result;
				cout << "\nEnter the First number : ";
				cin >> num1;
				cout << "Enter the Second number : ";
				cin >> num2;
				result = sub(num1,num2);
				cout << "\n\nThe DIFFERENCE of the given numbers = " << result;
			}
			else
			{
				cout << "\n\t\t:::    INVALID INPUT    :::" << endl;
			}
		}while (choice>3 || choice<1);
		
	}
	else if ( operation==3 )
	{
		do{
		
			cout << "\n1. Integer" << endl;
			cout << "2. Float" << endl;
			cout << "3. Double" << endl;
			cout << "\nWhich DATA TYPE would you like? ";
			cin >> choice;
			if ( choice==1 )
			{
				int num1,num2,result;
				cout << "\nEnter the First number : ";
				cin >> num1;
				cout << "Enter the Second number : ";
				cin >> num2;
				result = prod(num1,num2);
				cout << "\n\nThe PRODUCT of the given numbers = " << result;
			}	
			else if ( choice==2 )
			{
				float num1,num2,result;
				cout << "\nEnter the First number : ";
				cin >> num1;
				cout << "Enter the Second number : ";
				cin >> num2;
				result = prod(num1,num2);
				cout << "\n\nThe PRODUCT of the given numbers = " << result;
			}
			else if ( choice==3 )
			{
				double num1,num2,result;
				cout << "\nEnter the First number : ";
				cin >> num1;
				cout << "Enter the Second number : ";
				cin >> num2;
				result = prod(num1,num2);
				cout << "\n\nThe PRODUCT of the given numbers = " << result;
			}
			else
			{
				cout << "\n\t\t:::    INVALID INPUT    :::" << endl;
			}
		}while (choice>3 || choice<1);
		
	}
	else if ( operation==4 )
	{
		do{
		
			cout << "\n1. Integer" << endl;
			cout << "2. Float" << endl;
			cout << "3. Double" << endl;
			cout << "\nWhich DATA TYPE would you like? ";
			cin >> choice;
			if ( choice==1 )
			{
				int num1,num2,result;
				cout << "\nEnter the First number : ";
				cin >> num1;
				cout << "Enter the Second number : ";
				cin >> num2;
				if ( num2!=0 )
				{
					result = division(num1,num2);
					cout << "\n\nThe DIVISION of the given numbers = " << result;
				}
				else
				{
					cout << "\n\t\t:::    INVALID INPUT    :::" << endl;
				}	
					
			}	
			else if ( choice==2 )
			{
				float num1,num2,result;
				cout << "\nEnter the First number : ";
				cin >> num1;
				cout << "Enter the Second number : ";
				cin >> num2;
				if ( num2!=0 )
				{
					result = division(num1,num2);
					cout << "\n\nThe DIVISION of the given numbers = " << result;
				}
				else
				{
					cout << "\n\t\t:::    INVALID INPUT    :::" << endl;
				}	
			}
			else if ( choice==3 )
			{
				double num1,num2,result;
				cout << "\nEnter the First number : ";
				cin >> num1;
				cout << "Enter the Second number : ";
				cin >> num2;
				if ( num2!=0 )
				{
					result = division(num1,num2);
					cout << "\n\nThe DIVISION of the given numbers = " << result;
				}
				else
				{
					cout << "\n\t\t:::    INVALID INPUT    :::" << endl;
				}	
			}
			else
			{
				cout << "\n\t\t:::    INVALID INPUT    :::" << endl;
			}
		}while (choice>3 || choice<1);
		
	}
	else if ( operation==5 )
	{
		do{
		
			cout << "\n1. Integer" << endl;
			cout << "2. Float" << endl;
			cout << "3. Double" << endl;
			cout << "\nWhich DATA TYPE would you like? ";
			cin >> choice;
			if ( choice==1 )
			{
				int num1,num2,result;
				cout << "\nEnter the Number : ";
				cin >> num1;
				cout << "Enter the Power : ";
				cin >> num2;
				result = power(num1,num2);
				cout << "\n\nThe RESULT = " << result;
			}	
			else if ( choice==2 )
			{
				float num1,num2,result;
				cout << "\nEnter the Number : ";
				cin >> num1;
				cout << "Enter the Power : ";
				cin >> num2;
				result = power(num1,num2);
				cout << "\n\nThe RESULT = " << result;
			}
			else if ( choice==3 )
			{
				double num1,num2,result;
				cout << "\nEnter the Number : ";
				cin >> num1;
				cout << "Enter the Power : ";
				cin >> num2;
				result = power(num1,num2);
				cout << "\n\nThe RESULT = " << result;
			}
			else
			{
				cout << "\n\t\t:::    INVALID INPUT    :::" << endl;
			}
		}while (choice>3 || choice<1);
		
	}
	else
	{
		cout << "\n\t\t:::    INVALID INPUT    :::" << endl;
	}
	}while(operation<1 || operation>5);
		
			
			
	


return 0;
}

int sum(int num1, int num2)
{
	return num1+num2;
}
float sum(float num1, float num2)
{
	return num1+num2;
}
double sum(double num1, double num2)
{
	return num1+num2;
}

int sub(int num1, int num2)
{
	return num1-num2;
}
float sub(float num1, float num2)
{
	return num1-num2;
}
double sub(double num1, double num2)
{
	return num1-num2;
}

int prod(int num1, int num2)
{
	return num1*num2;
}
float prod(float num1, float num2)
{
	return num1*num2;
}
double prod(double num1, double num2)
{
	return num1*num2;
}

int division(int num1, int num2)
{
	return num1/num2;
}
float division(float num1, float num2)
{
	return num1/num2;
}
double division(double num1, double num2)
{
	return num1/num2;
}

int power(int num1, int num2)
{
	int power=1;
	for ( int i=1; i<=num2; i++)
		power = power*num1;
	return power;
}
float power(float num1, float num2)
{
	float power=1;
	for ( int i=1; i<=num2; i++)
		power = power*num1;
	return power;
}
double power(double num1, double num2)
{
	double power=1;
	for ( int i=1; i<=num2; i++)
		power = power*num1;
	return power;
}
