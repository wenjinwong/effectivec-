#include<iostream>
#include<string>

class C{
	public:
		explicit C(int x)
		{
			std::cout << "c()  " << x << std::endl;
		}
};

void dosomething(C c)
{
	std::cout << " dosomething()" << std::endl;
}

int main()
{
	dosomething(C(12));
	return 0;
}


