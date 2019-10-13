#include<iostream>
#include<string>

class Widget{
	public:
		Widget& operator=(const Widget& rhs)
		{
			/*
			if(this == &rhs) return *this;
			delete pb;
			pb = new int(*rhs.pb);
			std::cout << *pb << std::endl;
			return *this;
			*/
			/*
			int *pOrig = pb;
			pb = new int(*rhs.pb);
			delete pOrig;
			return *this;
			*/
			
		}
		Widget& operator=(Widget rhs)
		{
			swap(rhs);
			return *this;
			/*
			   &RHS
			   tmp(rhs)
			   swap(tmp);
			   return *this;
			   */
		}
		int *pb;
		Widget(int i) : pb(new int(i)) {}
		
};


int main()
{
	Widget w(10);
	w = w;
}
