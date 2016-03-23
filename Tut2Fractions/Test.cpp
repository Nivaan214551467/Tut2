#include "Fraction.h"
#include <iostream>

using namespace std;

int main()
{
	
	Fraction frac1(1,1);	//creates a Fraction object
	Fraction frac2(1,1);	//creates another Fraction object
	Fraction temp(1,1);		//creates a temp Fraction object to store results

	
	cout << "Enter the numerator followed by the denominator for Fraction 1 :";
	cin >> frac1;				//overloads the >> operator to insert values into frac1
	
	cout << "Enter the numerator followed by the denominator for Fraction 2 :";
	cin >> frac2;				//overloads the >> operator to insert values into frac2
	
	cout << "" << endl;
	cout << "Addition : ";
	cout << (frac1 + frac2);	//uses operator overloading to add (+) the fractions and to display them (<<)

	cout << "Subtraction : ";
	cout << (frac1 - frac2);	//uses operator overloading to subtract (-) the fractions and to display them (<<)

	cout << "Multiplication : ";
	cout << (frac1 * frac2);	//uses operator overloading to multiply (*) the fractions and to display them (<<)
	
	cout << "Division : ";
	cout << (frac1 / frac2);	//uses operator overloading to divide (/) the fractions and to display them (<<)
}


