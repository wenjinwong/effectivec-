#include<iostream>

class top{
};
class bottom : public top{
};
class middle : public top{};

template<typename T>
class smartptr{
	public:
		explicit smartptr(T* realptr) {}
		template<typename U>
		smartptr(const smartptr<T>& other) {}// heldprt(other.get()) {}
		
		smartptr(const smartptr* other) {} //
		T* get() const { return heldptr;}
	private:
		T* heldptr;
};

int main()
{
	//smartptr<top> pt1 = smartptr<middle> (new middle);
}
