#include<iostream>
#include<string>

class Rational{
	public:
		Rational(int numerator = 0, int denominator = 1);

	private:
		friend const Rational operator*(const Rational &lhs, const Rational& rhs);
};
const Rational& operator*(const Rational& lhs, const Rational& rhs)
{
	Rational result(lhs.n * rhs.n, lhs.d * rhs.d);
	return result;
}
const Rational& operator*(const Rational& lhs, const Rational& rhs)
{
	Rational* result = new Rational(lhs.n * rhs.n, lhs.d * rhs.d);
	return result;
	//static Rational result;
	//result = 
	//mult thread danger
	
}

if((a *b) = (c * d)) //always true
if(operator ==(operator*(a, b), operator*(c, d))) ///

int main()
{
	Rational w, x, y, z;
	w = x * y * z;
	//not delete "result"(hidden)


}
