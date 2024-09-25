#include <iostream>
#include <cmath>
using namespace std;

/* Name : Abdul Rafay
   Roll No : 23i-2027
   Assignment 6 */


double Rectangle(double, double);
double Triangle(double, double);
double Circle(double);
double Cylinder(double, double);
double Sphere(double);


int main ()
{
	int choice;
	double x, y, area_rec, area_tri, area_cir, area_cyl, area_sph;
	cout << ":::    AREA CALCULATOR    :::" << endl;
	do{
	cout << "\n1. RECTANGLE" << endl; 
	cout << "2. TRIANGLE" << endl; 
	cout << "3. CIRCLE" << endl; 
	cout << "4. CYLINDER" << endl; 
	cout << "5. SPHERE" << endl;
	cout << "\nWhose Area do you want to find? : ";
	cin >> choice;
		if (choice==1)
		{
			cout << "\nEnter the length : ";
			cin >> x;
			cout << "Enter the width : ";
			cin >> y;
			area_rec = Rectangle( x, y );
			cout << "\nThe Area Of Rectangle is: " << area_rec;
		}
		else if (choice==2)
		{
			cout << "\nEnter the base : ";
			cin >> x;
			cout << "Enter the height : ";
			cin >> y;
			area_tri = Triangle(x,y);
			cout << "\nThe Area Of Triangle is: " << area_tri;
		}
		else if (choice==3)
		{
			cout << "\nEnter the radius : ";
			cin >> x;
			area_cir = Circle(x);
			cout << "\nThe Area Of Circle is: " << area_cir;
		}
		else if (choice==4)
		{
			cout << "\nEnter the radius : ";
			cin >> x;
			cout << "Enter the height : ";
			cin >> y;
			area_cyl = Cylinder(x,y);
			cout << "\nThe Area Of Cylinder is: " << area_cyl;
		}
		else if (choice==5)
		{
			cout << "\nEnter the radius : ";
			cin >> x;
			area_sph = Sphere(x);
			cout << "\nThe Area Of Sphere is: " << area_sph;
		}
		else
		{
			cout << "\n\t\t:::   INVALID INPUT   :::";
		}
	}while ( choice>5 );
		
return 0;
}

double Rectangle( double length, double width )
{
	double area = length*width;
	return area;
}	
double Triangle( double base, double height )
{
	double area = ( base * height )/2;
	return area;
}	
double Circle( double radius )
{
	double area = 3.14 * (pow(radius,2));
	return area;
}
double Cylinder( double radius, double height )
{
	double area = ( 2*3.14*radius*height ) + ( 2*3.14*(pow(radius,2)));
	return area;
}
double Sphere( double radius )
{
	double area = 4*3.14*(pow(radius,2));
	return area;
}		
