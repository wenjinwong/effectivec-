#include<iostream>

#include<string>

class test{
	public:
		std::string data = "012345";
		char& operator[](int pos) { std::cout << " non" << std::endl;return data[pos]; }
		char& operator[](int pos)const { std::cout << "const" << std::endl; return data[pos];}
};

int mian()
{
	test t;
	t[1] = '2';
	const test ct ;
	ct[2] = '4';
	std::cout << ct[2] << std::endl;
}
