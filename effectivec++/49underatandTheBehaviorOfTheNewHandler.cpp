#include<iostream>
#include<new>
/*
namespace std{
	typedef void(*new_handler)();
	new_handler set_new_handler(new_handler p) throw();
}
*/
/*
void outOfMem()
{
	std::cerr << "Unable to satisy request for memory\n";
	std::abort();
}

class widget{
	public:
		static std::new_handler set_new_handler(std::new_hander p) throw();
		static void operator new(std::size_t size) throw(std::bad_allow);
	private:
		static std::new_handler currentHandler;
};

std::new_handler widget::currentHander = 0;

std::new_handler widget::set_new_handler(std::new_handler p) throw()
{
	std::new_handler oldHandler = currentHandler;
	currentHandler = p;
	return oldHandler;
}

class new_handler_holder{
	public:
		explicit new_handler_holder(std::new_handler nh) : handler(nh) {}
		~new_handler_holder() { std::set_new_hanler(handler);}
	private:
		std::new_handler handler;
		new_handlerholder(const newhandlerholder&);
		new_handlerholder& operator=(const newhandlerholder&);
};

void widget::operator new(std::size_t size) throw(std::bad_alloc)
{
	new_handle_holder h(std::std::new_handler(currentHandler));
	return ::operator new(size);
}

*/

template<class T>
class support{
	public:
		void f();
};

template<class T>
void support<T>::f() {
	std::cout << "f()" << std::endl;
}

class wid:public support<wid>{
	public:
		int val;
};
int main()
{
	wid* pw = new (std::nothrow) wid;
//	std::set_new_handler(outOfMem);
	int *pb = new int[10000000000000L];
}
 
