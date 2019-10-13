#include<iostream>
#include<string>
#include<stdexcept>

using namespace std;

class Widget{
	public:
	~Widget() {//
		if(1)
			throw out_of_range("running");
	}

};

class DBC{
	public:
		void close()
		{
			db.close();
			closed = true;
		}

		~DBC()
		{
			try{
				db.close();
			}
			catch(exception &e)
			{
				std::cout << "catched" << std::endl;
				std::abort();
			}
		}
}

int main()
{
	Widget *w = new Widget();

	Widget *w1 = new Widget();

	Widget *w2 = new Widget();

	delete w;
	delete w1;
	delete w2;

	std::cout << " delete " << std::endl;

}
