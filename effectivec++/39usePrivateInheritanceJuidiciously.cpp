#include<iostream>
#include<string>

class person{};
class student: private person{}; //it means d is realized by b, not derive it's interface
void eat(const person& p) {};
void study(const student& s) {};

class Timer{
	public:
		explicit Timer(int tickFrequency);
		virtual void onTick() const;
};
	
class widget : private Timer{
	private:
		virtual void onTick() const ;
};

class widget {
	private:
		class widgettimer : public timer{
			public:
				virtual void onTick() const ;
		};
		widgettimer timer;
};

int main()
{
	person p;
	student s;
	eat(p);
	eat(s);
}
