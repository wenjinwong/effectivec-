#include<iostream>
#include<string>
#include<memory>

int main()
{
	std::string* stringArray = new std::string[10]{"aaf", "asfd", "sa","sdaf", "fsafew", "sawer", "ewrerw3", "safe3r"};
	delete [] stringArray;
	std::string *ps = new std::string("sss");
	delete  ps;

	typedef std::string addressLine[4];
	std::string *pal = new addressLine;
	//delete pal;
	delete [] pal;

}
