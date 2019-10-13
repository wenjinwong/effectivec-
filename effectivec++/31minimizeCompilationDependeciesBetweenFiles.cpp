#include<iostream>
#include<string>

class po;

class PersonImplementation {
	public:
	void say() { std::cout << name << std::endl; }
	PersonImplementation(const std::string &n) : name(n) {}
private:
	std::string name;
};
//#include"impl"
class Person{
public:
	Person(const std::string& name) : pImpl(new PersonImplementation(name)) {}
	void say() const { pImpl->say(); }
private:
	PersonImplementation *pImpl;
};

class RealPerson : public Person {
public:
	RealPerson(const std::string& name, const Date...;
	virtual ~RealPerson();
private:
	std::string theName;
	///
	};

	
std::shared_ptr<Person> Person::create(const std::string& name, const Date& brithday, const Address& addr)
{
	return std::shared_ptr<Person>(new ReadPerson(name, brithday, addr));
	}

class test{
public:
	int val;
	void f();
};
void fpo(test t)
{
	t.f();
}
int main()
{

	po* p;
}

class po{
	public:
		int val;
};
