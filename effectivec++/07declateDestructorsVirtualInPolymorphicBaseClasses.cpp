#include<iostream>
#include<string>

class TimeKeeper{
public:
	TimeKeeper(){}
	virtual ~TimeKeeper(){std::cout << " Timer" << std::endl;}
	//
};

//class AtomicClock : public TimeKeeper{
	//
//};
class WaterClock : public TimeKeeper{
	public:
		~WaterClock() { std::cout << " water clock " << std::endl;};
};
//class WristWatck: public TimeKeeper{};


TimeKeeper* getTimeKeeper() { TimeKeeper* tk = new WaterClock(); return tk;}


class Point{
	public:
		Point(int xCoord, int yCoord) {};
		~Point(){}
	private:
		int x, y;
};

class P final
{
};

class AWOV{
	public:
		virtual ~AWOV() = 0;
};
AWOV::~AWOV() {}
class Derived : public AWOV {
};
int main()
{
	Derived dd;
	Point p(4, 5);

	TimeKeeper* tk = getTimeKeeper();
	delete tk;
	return 0;
}
