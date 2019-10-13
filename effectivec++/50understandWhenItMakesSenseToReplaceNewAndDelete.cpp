#include<iostream>
#include<new>
static const int signature = 0xDEADBEEF;

/*
class Widget {
	public:
	//	static void out_of_memory();
		static std::new_handler set_new_handler(std::new_handler p) throw();
		static void* operator new(std::size_t size); //throw(std::bad_alloc);
	private:
		static std::new_handler currentHandler;
};

//void Widget::
void out_of_memory() { std::cerr << "out of memory! abort." ; }

std::new_handler Widget::currentHandler = 0;

std::new_handler Widget::set_new_handler(std::new_handler p) throw()
{
	std::new_handler oldHandler = std::set_new_handler(p);
	return oldHandler;
}

void* Widget::operator new(std::size_t size) //throw()
{
	auto oldH = set_new_handler(out_of_memory);
	auto pn = operator new(size);
	set_new_handler(oldH);
	return pn;
}

*/
/*
class test{
	public:
		static void out();
		static std::new_handler set_new_handler(std::new_handler p);
		void* operator new(std::size_t size)
		{
			std::set_new_handler([]() {std::cerr << "out"; std::abort();});
			return ::operator new(size);
		}
	private:
		double d,d1;
};
std::new_handler test::set_new_handler(std::new_handler p)
{
	return std::set_new_handler(p);
}
		

void test::out() { std::cerr<<"out"<<std::endl;}
int main(){
	//std::set_new_handler([]() { std::cerr<<"out";});
	test *t = new test[343242342343324234];

}
*/


class NewHandlerHolder {
	public:
		explicit NewHandlerHolder(std::new_handler nh) : handler(nh) {}
		~NewHandlerHolder()
		{ std::set_new_handler(handler); }
	private:
		std::new_handler handler;
		NewHandlerHolder(const NewHandlerHolder&);
		NewHandlerHolder& operator=(const NewHandlerHolder&);
};


class Widget{
	public:
		static std::new_handler set_new_handler(std::new_handler handler);
		void* operator new(std::size_t size)// throw(std::bad_alloc)
		{
			NewHandlerHolder h(std::set_new_handler(currentHandler));
			return ::operator new(size);
		}
	private:
		static std::new_handler currentHandler;
};
std::new_handler Widget::currentHandler = 0;
std::new_handler Widget::set_new_handler(std::new_handler handler) { currentHandler = handler; return handler;}

void outOfMem() { std::cerr << " out of mem" << std::endl; std::abort(); }

int main()
{
	Widget::set_new_handler(outOfMem);
	Widget *w1 = new Widget[1000000000000];
}
