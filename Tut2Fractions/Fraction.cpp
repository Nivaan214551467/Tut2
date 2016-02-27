#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

}


class Fraction{
private:
	int num;
	int denom;
public:
	Fraction(int,int);
	
	int add(Fraction);
};

Fraction::Fraction(int n = 1, int d = 1){
	num = n;
	denom = d;
}

int Fraction::add(Fraction x){
	num = num*x.denom;
}