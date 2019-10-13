#include<iostream>
#include<string>
#include<fstream>

void logCall(const std::string& funcName)
{
	std::ofstream out("data", std::ios::app);
	out << funcName << std::endl;	
}

class Date{
};
class Customer {
public:
	Customer(const Customer& rhs);
	Customer& operator=(const Customer& rhs);
	Customer(const std::string& n) : name(n) {};
private:
	Date date;
	std::string name;
};

Customer::Customer(const Customer& rhs) : name(rhs.name)
{
	logCall("Customer copy constructor");
}
Customer& Customer::operator=(const Customer& rhs)
{
	logCall("Customer copy assignment operator");
	name = rhs.name;
	return *this;
}

int main(int argc, char** argv)
{
	Customer cs("cs");
	Customer cs1("cs1");
	Customer cs2("cs2");
    cs1 = cs;
	cs2 = cs1;
}

