#include<iostream>
using namespace std;

class test{
	public:
		test() { cout << "test default" << endl; }
		test(test&& t) { cout << "copy" << endl;}
		test(const test &t) { cout << "test copy " << endl;}
};

class bb{
	public:
		test tt;
		bb() { cout << "bb default" << endl;}
		bb(test&& t) { tt = t; cout << "bb assign" << endl; }
};

int main()
{
	bb b;
	cout << "bb b" << endl;
	test t;
	cout << "test t" << endl;

	bb g(t);
	cout << "bb g(t) " << endl;
}
