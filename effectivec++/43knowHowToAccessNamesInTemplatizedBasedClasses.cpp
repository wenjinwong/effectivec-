#include<iostream>
#include<string>

class companyZ{
	public:
		void senencrypted(const std::string& msg) {}
};

typedef std::string MsgInfo;
template<typename T>
class base{
	public:
		void sendClear(const MsgInfo& info) {}
		void sendSecret(const MsgInfo& info) {}
};

template<>
class base<companyZ>
{
public:
	void sendSecret(const MsgInfo& info)
	{}
};
	
template<typename T>
class derived: public base<T> {
	public:
		using base<T>::sendClear;
		void sendClearMsg(const MsgInfo& info) 
		{
			//do something
			//base<T>::sendClear(info);
			//this->sendClear(info);
			sendClear(info);
			//loging
		}
};

int main()
{
	;
}
