#include<iostream>

int main(int argc, char **argv)
{
	char name[] = "Darla";
	char c = name[10];
	std::cout << c << std::endl;
	int *m;
	int *p = 0;
	std::cout <<m <<  "p: " << p ;
	int i = 8;
	int *pi;
	pi = &i;
	std::cout << pi;
//	std::cout << *p;
	return 0;
}
