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
};