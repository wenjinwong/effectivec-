#include<iostream>
#include<string>

class refc{
	public:
		const int ci;
		const std::string& rs;
		refc(const int c, const std::string& s) : ci(c), rs(s) {
			std::cout << "construct" << rs << std::endl;
		}
};

int main()
{
	
	refc rc(6,std::string("01234"));
	refc rc1(4, std::string("012345"));
	refc rr = rc;
	rr = rc1;
}
