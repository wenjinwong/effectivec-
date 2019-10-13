#include<iostream>
#include<string>

using namespace std;
class Widget {
	public:
		//
		Widget& operator=(const Widget& rhs)
		{
			name = rhs.name;
			return *this;
		}
		void show() { cout << name << endl;}

		string name;
		Widget(const string& n) : name(n) {}
};

int main()
{
	Widget w1("w1");
	Widget w2("w2");
	Widget w3("w3");

	w1 = w2 =  w3;
	w2.show();
	w1.show();
	Widget w4("w4");
	(w1 = w2) = w4;
	w1.show();

	int x, y, z;
	x = y = z = 15;
	x = (y = (z = 15));

	;
}
