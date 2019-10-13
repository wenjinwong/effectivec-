#include<iostream>
//perfer consts , enums, and inlines to #defines.
#include<string>
#define ASPECT_RATTO int *
//ASPECT_RATTO may not regsiter in symbol table 


class GamePlayer{
private:
	static const int NumTurns = 5; // declaration
	int scores[NumTurns];
};

class anthorGamePlayer{
	private:
		static const int NumTurns;
	//array bound is not an integer constant before ‘]’ token
//   int scores[NumTurns];
		//complier may not allow in class assign a static number
		
		enum { Num = 5};//the enum hack   enumerated type can be userd as ints
		//enum hack some part its behavier look like define, not conat . eg: get a const's address is legal , but for
		//enum it is illegal, the same as define
		int score[Num];
		int scores[5];
};
const int anthorGamePlayer::NumTurns = 5;
// some complier dont support the behavier that static declare assignment
const int GamePlayer::NumTurns;
#define CALL_WITH_MAX(a, b) ((a) > (b) ? (a) : (b))

template<typename T>
inline void callWithMax(const T& a, const T& b)
{
	if(a > b ? a : b);
}

int main()
{
	int a = 5;
	int b = 0;
	std::cout <<CALL_WITH_MAX(++a, b);
	ASPECT_RATTO ar;
	int i = 10;
	ar = &i;
	char c = 'a';
	//ar = &c; // cannot convert ‘char*’ to ‘int*’ in assignment
//  ar = &c;
#undef ASPECT_RATTO
	const double aar = 1.653;

	const char* const authorName = "scott meyers";
	const std::string an = " scott meyers";

	const double *p = &aar;
	return 0;
}

//FOR var , you'd better use const obj or enums to replace defines

//For macros like function , use inline function to replace define macro
