#include<iostream>
#include<string>

class address{};
class phonenumber{};
class person{
	public:
		//
	private:
		std::string name;
		address a;
		phonenumber num;
};
//has a

template<class T>
class Set{
	public:
		bool member(const T& item) const;
		void insert(const T& item);
		void remove(const T& item);
		std::size_t size() const;
	private:
		std::list<T> rep;
};

template<class T>
bool Set::member(const T& item) const 
{
	return find(rep.begin(), rep.end(), item) != rep.end();
}

void Set::insert(const T& item) {if(!member(iter)) rep.push_back(item);}
void Set::remove(const T& item) { auto iter = find(rep.begin(), rep.end(), item); if(it != rep.end()) rep.erase(iter);
	}






int main()
{
	;
}
