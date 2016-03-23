#include <iostream>
#include "Fraction.h"

using namespace std;


Fraction::Fraction(int n, int d){			//Constructor
	num = n;
	denom = d;
}

Fraction Fraction::getNumDenom(){			//Returns a Fraction when called
	return Fraction(num,denom);
}

void Fraction::setNumDenom(int x, int y){	//Sets the fraction to the values given
	num = x;
	denom = y;
}


Fraction Fraction::operator+(Fraction x){			//Adds the Fraction to another given Fraction
	return Fraction(((num*x.denom) + (x.num * denom)), (denom * x.denom));
}

Fraction Fraction::operator-(Fraction x){	//Subtracts a given fration from this fraction
	return Fraction(((num*x.denom) - (x.num * denom)), (denom * x.denom));
}

Fraction Fraction::operator*(Fraction x){	//Multiplies two fractions
	return Fraction((num*x.num), (denom * x.denom));
}
Fraction Fraction::operator/(Fraction x){		//Divides two frations
	return Fraction((num * x.denom), (denom * x.num));
}
	
int Fraction::hcf(int x, int y) {			//Finds the Highest Common Factor between the Numerator and Denominator so simplification can be done
	if (y == 0)
		return x;
	else return
		hcf(y, x % y);
}

void Fraction::print(){						//prints the fraction in simplest form
	if (num == 0)
		cout << "0" << endl;
	else if ((denom / hcf(num, denom)) == 1)
		cout << num << endl;
	else
	    cout << (num / hcf(num, denom)) << "/" << (denom / hcf(num, denom))<<endl;
}

