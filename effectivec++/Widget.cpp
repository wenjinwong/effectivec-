#include<iostream>

class Widget{
public:
	Widget(){}
	Widget(const Widget& rhs){}
	//Widget& operator=(const Widget& rhs){}
};

int main()
{
	Widget w1; //default constructor
	Widget w2(w1); //copy construct 
	w1 = w2; //copy assignment
}
