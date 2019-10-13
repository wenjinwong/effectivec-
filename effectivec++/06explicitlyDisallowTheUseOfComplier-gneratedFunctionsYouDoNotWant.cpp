#include<iostream>
#include<string>


class Uncopyable{
	protected:
		Uncopyable() {}
		~Uncopyable() {}
	private:
		Uncopyable(const Uncopyable&);
		Uncopyable& operator=(const Uncopyable&);
};

class HomeForSale : private Uncopyable{
public:
	//

private:
//	HomeForSale(const HomeForSale&) {};
//	HomeForSale& operator=(const HomeForSale&);
};

int main()
{
	HomeForSale hfs, hfs1;
	hfs1 = hfs;
}

