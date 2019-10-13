#include<iostream>
#include<string>

class Transaction {
public:
	Transaction();
	virtual void logTransaction() const { std::cout << "virtual log " << std::endl;}
	//
};

Transaction::Transaction()
{
	//
	logTransaction();
};

class BuyTransaction: public Transaction {
public:
	virtual void logTransaction() const{std::cout << "buy" <<std::endl;}
	//
};

class SellTransaction: public Transaction {
public:
	SellTransaction() { logTransaction();}
	virtual void logTransaction() const{std::cout << "sell" << std::endl;}
	//
};
	
int main()
{

	SellTransaction ts;

}
