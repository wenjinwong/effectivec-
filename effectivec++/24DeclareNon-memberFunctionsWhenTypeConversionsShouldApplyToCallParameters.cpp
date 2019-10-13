#include<iostream>
#include<string>


class Rational {
	public:
		Rational(int numerator = 0, int denominator = 1) : up(numerator), down(denominator) { } 
		int numerator() const { return up; }
		int denominator() const { return down; }
		//illegal void operator* (Rational& lhs, Rational& rhs) { }
	private:
		int up, down;
};

int main()
{
	Rational r(5);
	2 * r;
}
