#include <iostream>
#include <cmath>
using namespace std;

/* Name : Abdul Rafay
   Roll No : 23i-2027
   Assignment 6 */

void Result(double ,double ,double,double&,double&,double& );

int main ()
{
	double loan, rate, numofpay, payment=0, amount=0, interest=0;
	cout<<"\nLoan Amount           = $ ";
	cin>> loan; 
	cout<<"Monthly Interest Rate = % ";
	cin>> rate; 
	cout<<"Number of payments    = ";
	cin>> numofpay;
	Result(loan,rate,numofpay,payment,amount,interest);	
	cout<<"\nMonthly payment       = $ "<< payment <<endl;
	cout<<"Amount Paid Back      = $ "<< amount <<endl;
	cout<<"Interest Paid         = $ "<< interest <<endl;
	
return 0;
}

void Result(double loan, double rate, double numofpay,double &payment,double &amount,double &interest)
{
	rate = rate/100;
double  sum = 1 + rate;
double  power = pow(sum,numofpay);
	payment = (rate * power * loan)/(power - 1);
	amount = payment * numofpay;
	interest = amount - loan;

}
