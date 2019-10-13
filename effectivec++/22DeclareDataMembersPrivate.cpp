#include<iostream>
#include<string>

class AccessLevel{
	public:
		int getOnly() const { return readOnly; }
		void setReadAndWrite(int value) { readWrite = value; }
		...
	private:
		int noAccess;
		int readOnly;
};
//yi zhi xing

class SpeedDataCollection {
	//
	public:
		void addValue(int speed) ;
		double averageSoFar() const ;
		//
};

private or not

