#include<iostream>
#include<cctype>
#include<string>

using namespace std;

/*
class PhoneNumber {};
class ABEntry {
public:
	ABEntry(const std::string& name, const std::string& address, const std::list<PhoneNumber>& phone);
private:
	std::string theName;
	std::string theAddress;
	std::list>PhoneNumber> thePhones;
	int numTimesConsulted;
};

ABEntry::ABEntry(const std::string &name, const std::string& address, const std::list<PhoneNumber>& phones)
{
	theName = name;
	theAdress = address;
	thePhones = phones;
	numTimesConsulted = 0;
}
*/

int &fs(int p)
{
	static int f = p;
	return f;
}

int main()
{
	std::cout << fs(8);
	fs(5) = 6;
	string s = " asffa";
	s[5] = 's';
	char *text = "a C STYLE";
	cout << *text << endl;
	cout << s << endl;
    return 0;
}
