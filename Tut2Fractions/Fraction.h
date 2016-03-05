class Fraction{
private:
	int num;
	int denom;
public:
	Fraction(int, int);

	Fraction getNumDenom();			//Declaration of all methods
	void setNumDenom(int, int);
	Fraction add(Fraction);
	Fraction subtract(Fraction);
	Fraction multiply(Fraction);
	Fraction divide(Fraction);
	void print();
	int hcf(int, int);
};