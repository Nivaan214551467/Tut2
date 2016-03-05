#include "Fraction.h"
#include <iostream>

using namespace std;

int main()
{
	Fraction frac1(1,1);	//creates a Fraction object
	Fraction frac2(1,1);	//creates another Fraction object
	Fraction temp(1,1);		//creates a temp Fraction object to store results

	int x, y;				//used to assign values to the fraction

	cout << "Enter the numerator for Fraction 1 :";
	cin >> x;				//gets numerator for Fraction 1
	cout << "Enter the denominator for Fraction 1 :";
	cin >> y;				//gets denominator for Fraction 1

	frac1.setNumDenom(x, y);	//sets values to the object

	cout << "Enter the numerator for Fraction 2 :";
	cin >> x;				//gets numerator for Fraction 2
	cout << "Enter the denominator for Fraction 2 :";
	cin >> y;				//gets denominator for Fraction 2

	frac2.setNumDenom(x, y);	//sets values to the object

	cout << "" << endl;
	cout << "Addition : ";
	temp = frac1.operator+(frac2);		//adds frac1 and frac2 and stores in temp
	temp.print();

	cout << "Subtraction : ";
	temp = frac1.operator-(frac2);		//subtracts frac1 and frac2 and stores in temp
	temp.print();
	
	cout << "Multiplication : ";
	temp = frac1.operator*(frac2);		//multiplies frac1 and frac2 and stores in temp
	temp.print();
	
	cout << "Division : ";
	temp = frac1.operator/(frac2);		//divides frac1 and frac2 and stores in temp
	temp.print();


}