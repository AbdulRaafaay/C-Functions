#include <iostream>
using namespace std;

/* Name : Abdul Rafay
   Roll No : 23i-2027
   Assignment 6 */

void Amount(int&,int&,int&,int&,int&,int&,int&,int&);

int main ()
{
	int amount, note1=0, note2=0, note3=0, note4=0, note5=0, note6=0, note7=0;
	cout<<"\nEnter the amount in Takas = ";
	cin>>amount;
	Amount(amount,note1,note2,note3,note4,note5,note6,note7);
	 cout<<"\nCurrency Note:  Number "<<endl;
	 cout<<"     650       :     "<<note1<<endl;
	 cout<<"     330       :     "<<note2<<endl;
         cout<<"     110       :     "<<note3<<endl;
	 cout<<"     60        :     "<<note4<<endl;
	 cout<<"     10        :     "<<note5<<endl;
	 cout<<"     5         :     "<<note6<<endl;
	 cout<<"     1         :     "<<note7<<endl;
	
return 0;
}

void Amount(int &amount,int &note1,int &note2,int &note3,int &note4,int &note5,int &note6,int &note7)
{
      note1 = amount/650;
      note2 = (amount%650)/330;
      note3 = (amount%650%330)/110;
      note4 = (amount%650%330%110)/60;
      note5 = (amount%650%330%110%60)/10;
      note6 = (amount%650%330%110%60%10)/5;
      note7 = (amount%650%330%110%60%5)/1;
       
}
