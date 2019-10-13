#include<iostream>
#include<string>

/*

class Widget{
	public:
		static void* operator new(std::size_t size, std::ostream& logStream) throw(std::bad_alloc);
		static void operator delete(void* pMemory) throw();
		static void operator delete(void* pMemory, std::ostream& logStream) throw();
};
*/

class nothrow{};

class standard{
	public:
		static void* operator new(std::size_t size, const std::nothrow_t& nt) throw(std::bad_alloc)
		{ return ::operator new(size, nt); }
};

int main()
{
//	Widget* pw = new (std::cerr) Widget;
//	delete pw;
//	double* p = new () double(9);
	auto p = new (std::nothrow) standard;
}
