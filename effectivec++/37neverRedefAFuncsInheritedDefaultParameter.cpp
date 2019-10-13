#include<iostream>

class Shape{
	public:
		enum ShapeColor {red, green, blue};
		virtual void draw(ShapeColor color = red) const = 0;
};

class Rectangle : public Shape {
	public:
		virtual void draw(ShapeColor color = green) const {}
};

class Circle : public Shape{
	public :
		virtual void draw(ShapeColor color = blue) const { std::cout << color << std::endl; }
};

class Squre : public Shape {
	public:
		void f(ShapeColor color = green) 
		{
			dof(color);
		}
	private:
		void dof(ShapeColor color) const {};
};

int main()
{
	Rectangle rt;
	rt.draw();
	Circle ci;
	//ci.draw();
	Shape *pc = &ci;
	pc->draw();

}
