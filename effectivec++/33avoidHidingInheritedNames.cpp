class base {
	public:
		virtual void mf1() = 0;
		virtual void mf1(int) {}
		virtual void mf2() {}
		void mf3(){}
		void mf3(double) {}
};
class derived : private base {
	public:
		//using base::mf1; //when using privately derive, the base::func can be seen
		using base::mf3;
		virtual void mf1() {}
		virtual void mf1(int) { base::mf1(0); }
		void mf3();
		void mf4();
};


int main()
{
	derived d;
	d.mf1();
	d.mf1(2);
	d.mf3(3);
}
