class Lock{
pulbic:
	Lock();
	~Lock();
private:
	Mutex* mutex;
};

class PrettyMenu {
	public:
		void changeBackgroud(std::istream& imgSrc);
	
	private:
		Mutex mutex;
		Image&* bgImage;
		int imageChanges;
};

void PrettyMenu::changeBackgrouble(std::istream& imgSrc)
{
	lock(&mutex);
	delete bgImage;
	++imageChange;
	bgImage = new Image(imgSrc);
	unlock(&mutex);
	//Lock(&mutex); ....\

}

