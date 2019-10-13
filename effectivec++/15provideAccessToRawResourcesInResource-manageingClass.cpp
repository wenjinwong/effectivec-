#include<iostream>
#include<string>
#include<memory>

FontHandle getFont();

void releaseFont(FOntHandle fh);
class Font {
	public:
		explicit Font(FontHandle fh) : f(fh) {}
		~Font() { releaseFont(f); }
		operator FontHandle() const { return f;}
	private:
		FontHandle f;
};


Font f(getFont() );
int newFontSize;
changeFontSize(f.get(), newFontsize);


using namespace std;
int main()
{
	
	int i = 4;
	shared_ptr<int> si(&i);
	
	int *pi = si.get();

	std::cout << *si;

	
}
