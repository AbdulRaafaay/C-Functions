#include <iostream>
using namespace std;

/* Name : Abdul Rafay
   Roll No : 23i-2027
   Assignment 6 */

bool MyIsAlpha(char);
bool MyIsDigit(char);
bool MyIsLower(char);
bool MyIsUpper(char);
char MyConvertUpper(char);
char MyConvertLower(char);
bool Myisxdigit(char);
bool Myisprint(char);
bool Myispunct(char);
bool Myisspace(char);

int main ()
{
	char a;
	cout << "\n\t:::    Test : MyIsAlpha    :::" << endl;
	cout << "\nEnter a character : ";
	cin >> a;
	cout << MyIsAlpha(a);
	cout << "\n\n";
	cout << "\n\t:::    Test : MyIsDigit   :::" << endl;
	cout << "\nEnter a character : ";
	cin >> a;
        cout << MyIsDigit(a);
        cout << "\n\n";
	cout << "\n\t:::    Test : MyIsLower   :::" << endl;
	cout << "\nEnter a lower case character : ";
	cin >> a;
	cout << MyIsLower(a);
	cout << "\n\n";
	cout << "\n\t:::    Test : MyIsUpper  :::" << endl;
	cout << "\nEnter an upper case character : ";
	cin >> a;
	cout << MyIsUpper(a);
	cout << "\n\n";
	cout << "\n\t:::    Test : MyConvertUpper  :::" << endl;
	cout << "\nEnter a lower case character : ";
	cin >> a;
	cout << MyConvertUpper(a);
	cout << "\n\t:::    Test : MyConvertLower  :::" << endl;
	cout << "\nEnter an upper case character : ";
	cin >> a;
	cout << MyConvertLower(a);
	cout << "\n\t:::    Test : Myisxdigit  :::" << endl;
	cout << "\nEnter a character : ";
	cin >> a;
	cout << Myisxdigit(a);
	cout << "\n\t:::    Test : Myisprint  :::" << endl;
	cout << "\nEnter a character : ";
	cin >> a;
	cout << Myisprint(a);
	cout << "\n\t:::    Test : Myispunct  :::" << endl;
	cout << "\nEnter a character : ";
	cin >> a;
	cout << Myispunct(a);
	cout << "\n\t:::    Test : Myisspace  :::" << endl;
	cout << "\nEnter a character : ";
	cin >> a;
	cout << Myisspace(a);

return 0;
}

bool MyIsAlpha(char a)
{
	if ( (a>=65 && a<=90) || (a>=97 && a<=122) )
	return 0;
	else
	return 1;
}
bool MyIsDigit(char a)
{
	if ( a>=48 && a<=57 )
	return 0;
	else
	return 1;
}
bool MyIsLower(char a)
{
	if ( a>=97 && a<=122 )
	return 0;
	else 
	return 1;
}
bool MyIsUpper(char a)
{
	if ( a>=65 && a<=90 )
	return 0;
	else 
	return 1;
}
char MyConvertUpper(char a)
{
	a = a-32;
	return a;
}
char MyConvertLower(char a)
{
	a = a+32;
	return a;
}
bool Myisxdigit(char a)
{
	if ( (a>=48 && a<=57) || (a>=97 && a<=102) || (a>=65 && a<=70) )
	return 0;
	else
	return 1;
}
bool Myisprint(char a)
{
	if (a>=32 && a<=127)
	return 0;
	else 
	return 1;
}
bool Myispunct(char a)
{
	if ( a==33 || a==34 || (a>=39 && a<=41) || (a>=44 && a<=47) || a==58 || a==59 || a==63 )
	return 0;
	else
	return 1;
}
bool Myisspace(char a)
{
	if ( a==32 )
	return 0;
	else 
	return 1;
}
