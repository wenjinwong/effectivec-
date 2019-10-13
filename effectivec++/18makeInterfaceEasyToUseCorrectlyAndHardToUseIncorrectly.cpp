#include<iostream>
#include<string>
class mouth {
	public:
		static Month Jan() { return MOnth(1); }
		static Month Feb() { return Month(2); }
		//
	private:
		explicit mouth(int m) : val(m) {}
}

std::shared_ptr<Investment> pInv(static_cast<Investment* > (0), getRideOfInvestment);


/*
struct Day {
	explicit Day(int d) : val(d) {}
	int val;
};

struct Month {
	explicit Month(int m) : val(m) {}
	int val;
};

struct Year {
	explicit Year(int y) : val(y) {}
	int val;
};


class Month
class Date{
	public:
		int year, month, day;
	//	Date(int y, int m, int d) : year(y), mouth(m), day(d) { }
		Date(const Month& m, const Day& d, const Year& y) : year(y.val), month(m.val), day(d.val) {}
};
*/
int main(int argc, char **argv)
{
	Date d(Month(3), Day(3), Year(1999));
}
