#include<iostream>
#include<string>

/*
class test{
	private:
		int val;
	public:
		int& get() const { return val; }
};
*/ 
//if const member function cast a reference, the ref is stored out of *this , then the caller can change it;
int main()
{
	test t;
	t.get() = 5;
}
