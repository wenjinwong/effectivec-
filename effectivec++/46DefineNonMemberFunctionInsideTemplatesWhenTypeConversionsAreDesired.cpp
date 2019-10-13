#include<iostream>


template<class T>
const Rational<T> doMultiply(const Rational<T>& lhs, const Rational<T> &rhs)
{}
template<class T>
class Rational{
	public:
		Rational(const T& numberator = 0, const t& denominator = 1) 
		{}
		friend const Rational operator* (const Rational &lhs, const Rational &rhs) {
		return Rational(lhs.numeratorL() * rhs.numrator(), lhs.denomonator() * rhs.denominator());
//doMultiply(lhs,rhs);
		
		}
		const T numerator() const {}
		const T denominator() const {}
};


template<class T>
const Rational<T> operator* (const Rational<T>& lhs, const Rational<T>& rhs)
{
	//template tuidao bing bu jiang yingshi zhuanhuan na ru kao lv
}

int main()
{
	;
}
