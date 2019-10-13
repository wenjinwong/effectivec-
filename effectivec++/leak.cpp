#include<iostream>
#include<cctype>
#include<ctime>
#include<string>
#include<unistd.h>
#include<vector>
#include<list>
#include<deque>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<numeric>
#include<functional>
#include<sstream>                                                      
#include<set>
#include<map>
#include<utility>
#include<unordered_map>
#include<unordered_set>
#include<memory>
#include<initializer_list>
#include<functional>
#include<bitset>
#include<tuple>
#include<random>
#include<cmath>

using namespace std;


class leak{
	public:
		double *p;
		leak()
		{
			p = new double[102400000];
			num++;
			cout << num << "constructer" << endl;
		}
		static unsigned num;
		~leak()
		{
			cout << num << "deleted without free pointer" << endl;
		}
};

unsigned leak::num = 0;

int main()
{
	while(1)
	{
		sleep(0.5);
		auto tmp = new leak;
		delete tmp;
	}
    return 0;
}

