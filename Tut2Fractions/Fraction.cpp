#include <iostream>
#include <stdio.h>

using namespace std;


class Fraction{
private:
	int num;
	int denom;
public:
	Fraction(int,int);
	
	Fraction getNumDenom();
	void setNumDenom(int, int);
	Fraction add(Fraction);
	Fraction subtract(Fraction);
	Fraction multiply(Fraction);
	Fraction divide(Fraction);
	void print();
	int hcf(int,int);
};

Fraction::Fraction(int n, int d){
	num = n;
	denom = d;
}

Fraction Fraction::getNumDenom(){
	return Fraction(num,denom);
}

void Fraction::setNumDenom(int a, int b){
	num = a;
	denom = b;
}


Fraction Fraction::add(Fraction x){
	num = (num*x.denom) + (x.num * denom);
	denom = denom * x.denom;
	return Fraction(num,denom);
}

Fraction Fraction::subtract(Fraction x){
	num = (num*x.denom) - (x.num * denom);
	denom = denom * x.denom;
	return Fraction(num, denom);
}

Fraction Fraction::multiply(Fraction x){
	num = num*x.num;
	denom = denom * x.denom;
	return Fraction(num, denom);
}
Fraction Fraction::divide(Fraction x){
	num = num * x.denom;
	denom = denom * x.num;
	return Fraction(num, denom);
}

int Fraction::hcf(int x, int y) {
	if (y == 0)
		return x;
	else return
		hcf(y, x % y);
}

void Fraction::print()
{
	cout << (num / hcf(num, denom)) << "/" << (denom / hcf(num, denom));
}