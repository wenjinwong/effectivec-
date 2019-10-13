#include<iostream>
#include<string>
#include<vector>
/*
class test{
	public:
		 typedef std::string name;
		 int val;
};


template<typename C>
void print2nd(const C& container)
{
	C::const_iterator* x;
}
*/
using namespace std;
int main()
{
	
	/*typename test::name* s;*/
	vector<int> vec{1,23,3,4};
	vector<int>::iterator iter = vec.begin();
	typename iterator_traits<iter>::value_type temp(*iter);
}

