#include<iostream>
#include<vector>
//const tell complier this varible can not be changed 
#include<cstring>
void f1(const int *p) {}
void f2(int const *p) {}

class pointer {
	public:
		char *text;
		pointer(char* t) : text(t) { std::cout << *text << std::endl;}
		char& operator[](std::size_t pos) { return text[pos];}
	    char& operator[] (std::size_t pos) const { std::cout << " want to change a const " << std::endl; text[pos] =
			'a'; return text[pos];}
};

class ccn{
	public:
		std::string name;
		ccn(const std::string &name) : name(name) {}
		char& operator[](std::size_t pos) { return name[pos];}
		const char& operator[](std::size_t pos) const { const_cast<ccn&>(*this)[pos];}
};

class Rational {
	public:
	friend const Rational& operator*(const Rational& lhs, const Rational& rhs) { std::cout << " * " << std::endl;}
};
//not allow if(a * b = c) 's kind of terrible situation 

class TextBook {
	public:
		const char& operator[](std::size_t position) const 
		{
			//f(position);
			return text[position];
		}
		char& operator[](std::size_t position)
		{
			return text[position];
		}
		void f(int i) { text[i] = 'f';}
	private:
		std::string text = "adsfasfas";
};

/*
class CTextBlock {
	public:
		char& operator[](std::size_t position) const{ return pText[position]; } // bitwise cosnt
		char* pText;
		CTextBlock( char* s)
		{
			strcpy(s, pText);
		}
		~CTextBlock()
		{
			std::cout << *pText ;
		}
};
*/

/*
class change{
	public:
		change(char *s)
		{
			strcpy(text, s);
			std::cout << *text << std::endl;
		}

		char& operator[](std::size_t i) const { return text[i];}
		char text;
		void show() { std::cout << *text << std::endl; }
};

*/
/*
class TB{
	public :
		const char& operator[](std::size_t p) const {
		return text[p];
		}
		char& operator[](std::size_t p) 
		{
			return const_cast<char&>(static_cast<const TB&>(*this)[p]);
		}
};

*/

class test{
	public:
		char& operator[](std::size_t p) const
		{ return text[p]; }
		char* text;
		test(char *c)
		{
			strcpy(text, c);
			std::cout << *text << std::endl;
		}
};
int main()
{
	//test T("test");
	
	//std::cout << *ty << std::endl;
//	change c("hello");


//	char *pc = &c[0];
	//*pc = 'J';
	//c.show();
	//const CTextBlock cctb("hello");
	//char *pc = &cctb[0];
	//*pc = 'J';
	//cctb.~CTextBlock();
	//TextBook tb;
	//tb[2] = 'c';
	//const TextBook ctb;
	//std::cout << ctb[3] << std::endl;
	//ctb[2] = 'a';
	//Rational a, b, c;
//	(a * b) = c;

	//std::vector<int> vec;
	//const std::vector<int>::iterator iter = vec.begin();
	//*iter = 10;
	//++iter;
	//std::vector<int>::const_iterator cIter = vec.begin();
	//*cIter = 10;
//	++cIter;

	ccn cc("012345");
	std::cout << cc[2] << std::endl;
	cc[2] = '2';
	const ccn ccc("012345");
//	ccc[2] = 'g';
	char m[10];
    strcpy(m, "01234");

	std::cout << ccc[2] << std::endl;
	
	std::cout << "pointer: m : " << m[2] << std::endl;

	pointer pp(m);
	std::cout << pp[2] << std::endl; 
	char *thief;
	const pointer cp(m);

	std::cout << cp[3];
	thief = &cp[2];
	cp[0] = 'a';
	cp[2] = '5';
	std::cout << cp[2] << std::endl;
	*thief = '8';
	std::cout << cp[2] << std::endl;
	return 0;
}
