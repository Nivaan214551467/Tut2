#include <iostream>

using namespace std;
class Fraction{

	
private:
	int num;
	int denom;

public:
	Fraction(int, int);
		
	Fraction getNumDenom();			//Declaration of all methods
	void setNumDenom(int, int);
	Fraction operator+(Fraction);
	Fraction operator-(Fraction);
	Fraction operator*(Fraction);
	Fraction operator/(Fraction);
	void print();
	int hcf(int, int);

	friend istream &operator>> (istream &read, Fraction &frac);
	friend ostream &operator<< (ostream &write, Fraction &frac);

};

static int gcd(int x, int y) {			//Finds the Highest Common Factor between the Numerator and Denominator so simplification can be done
	if (y == 0)
		return x;
	else return
		gcd(y, x % y);
}

static istream &operator>> (istream &read, Fraction &frac){
	int numerator = 0;
	int denominator = 1;

	read >> numerator;
	read >> denominator;
	frac.setNumDenom(numerator, denominator);
	return read;
};

static ostream &operator<< (ostream &write, Fraction &frac)
{
	int tmp = gcd(frac.num, frac.denom);
	if (frac.num == 0){
		write << "0" << endl;
		return write;
	}
	else{
		write << (frac.num / tmp) << "/" << (frac.denom / tmp) << endl;
		return write;
	}
};

