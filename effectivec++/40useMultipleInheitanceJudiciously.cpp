#include<iostream>

class basic_ios{};
class ss: basic_ios{};
class basic_istream : virtual public basic_ios{};
class basic_ostream : virtual public basic_ios{};
class basic_iostream : public basic_ostream, public basic_istream {};

int main()
{
	std::cout << sizeof(basic_ios) << " " << sizeof(basic_istream)  << " " << sizeof(ss);
}
