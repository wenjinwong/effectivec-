#include<iostream>
#include<string>

class B{
	public:
		B() { std::cout << "B()" << std::endl; }
		void f() { std::cout << " B.f() " << std::endl;}
};

class D : public B {
	public:
		void f() { std::cout << "D.f()" << std::endl;}
};

int main() 
{
	D x;
	B* pb = &x;
	pb->f();
	D* pd = &x;
	pd->f();
}
