#include<iostream>

class b{
	public:
		virtual void f() const {}
};
class d : public b{
	public:
		virtual void f() {}
};

int main()
{
	;
}
