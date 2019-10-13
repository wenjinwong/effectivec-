#include<iostream>

void lock(Mutex* pm);
void unlock(Mutex* pm);

class Lock{
	public:
		explicit Lock(Mutex* pm) : mutexPtr(pm)
	{ lock(mutexPtr); }
	~Lock() { unlock(mutexPtr); }
	private:
	Mutex *mutexPtr;
};

class Lock{
	public:
		explicit Lock(Mutex* pm)
			 : mutexPtr(pm, unlock)
		{
			lock(mutexPtr.get());
		}
	private:
		std::shared_ptr<Mutex > mutexPte;
}

int main()
{
	Mutex m;
	...
	{
		Lock m1(&m);
		...
	}
	Lock m11(&m);
	Lock m12(m11);

}
