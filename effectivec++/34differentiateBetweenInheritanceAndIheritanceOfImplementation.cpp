#include<iostream>
#include<string>
class Shape{
	public:
		virtual void draw() const = 0;
		virtual void error(const std::string& msg) {}
		int objectID() const {}
};

void Shape::draw() const { std::cout << "shape" << std::endl; }
class Rectangle : public Shape {
	public:
		virtual void draw() const { std::cout << "Rectangle" << std::endl;};
};
class Ellipse : public Shape {};

typedef std::string airport;
class airplane{
	public:
		virtual void fly(const airport& destination) = 0;
	protected:
		void defaultfly(const airport& destination) {}
};

class airplane1{
	public:
		virtual void fly(const airport& dest) = 0;
};
void airplane1::fly(const airport& dest)
{
	std::cout << "air1" << std::endl;	
}


class modlea: public airplane {
	public:
		virtual void fly(const airport& destination)
		{ defaultfly(destination); }
};
class modlec: public airplane {
	public:
		virtual void fly(const airport& destination)
		{ }
};

class modelb : public airplane1{
	public:
		virtual void fly(const airport& dest)
		{ airplane1::fly(dest);}
};

int main()
{
	modelb b;
	b.fly(airport("b"));
	modlea a;
	a.fly(airport("a"));
	modlec c;
	c.fly(airport("c"));
	//Shape s;
//	s.draw();
	Rectangle r;
	r.draw();
	r.Shape::draw();
}
