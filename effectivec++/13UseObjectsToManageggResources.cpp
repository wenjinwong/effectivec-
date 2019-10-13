#include<iostream>
#include<string>
#include<utility>
#include<unordered_map>
#include<unordered_set>
#include<memory>

class Investment {
	//
	public:
	std::string name = "investment";
	void show() { std::cout << "show" << std::endl;}
};

Investment* createInvestment() 
{
	return new Investment();
}

void f()
{
	//Investment* pInv = createInvestment();
	//
//	delete pInv;
	std::auto_ptr<Investment> pInv(createInvestment());
	std::auto_ptr<Investment> pInv1 = pInv;
//	std::cout << pInv << std::endl;
	pInv1->show();
	std::cout << pInv->name << std::endl;
}
int main()
{
	std::auto_ptr<std::string> aps(new std::string[10]);
	//std::tr1::shared_ptr<int> spi(new int[1024]);

	f();
}
