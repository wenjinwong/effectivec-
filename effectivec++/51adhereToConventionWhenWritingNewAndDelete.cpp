#include<iostream>

class Base{
	public:
		static void* operator new(std::size_t size) throw(std::bad_alloc);
		static void operator delete(void* rawMemory, std::size_t size) throw();
};

void Base::operator delete(void* rawMemory, std::size_t size) throw()
{
	if(rawMemory == o) return;
	if(size != sizeof(Base))
	{
		::operator delete(rawMemory);
		return;
	}
	//return back all memory
	return;
}


int main()
{
	void* p = (void*)malloc(sizeof(double));
	double* d = new (p) double(2.2);
	std::cout << *d << std::endl;
	void* pc = operator new(0);
	new(pc) char('v');
	std::cout << pc << std::endl;
}
