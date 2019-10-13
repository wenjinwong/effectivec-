#include<iostream>

class some{
	public:
		int size() { return 1;}
		bool operator!=(some s)
		{
			return 1;
		}
};

some some1;
template<class T>
void doProcessing(T &w)
{
	T some2;
	if(w.size() > 10 && w != some2) {
		T tmp(w);
		tmp.normalize();
		tmp.swap(w);
	}
};

int main()
{
	//doProcessing(some1);
}
