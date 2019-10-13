#include<iostream>

class empty{
	enum color {red, green, blue};
};

class com{
	private:
		empty e;
		int x;
};

class de : private empty{
		int val;
};

int main() 
{
	std::cout << sizeof(empty) << sizeof(de) << sizeof(com);
}
