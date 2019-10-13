class bird{
	public:
};
class flybird : public bird {
	public:
		void fly {}
};
class penguin : public flybird{
	public:
};

class Penguin : public bird {
	void fly() { error("attempt to make a penguin fly"); }
};

//complie time avoid error



