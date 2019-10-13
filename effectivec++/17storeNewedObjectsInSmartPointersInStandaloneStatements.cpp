#include<iostream>
#include<string>


int priority();
void processWidget(std::shared_ptr<Widget> pw, int priority);

processWidget(std::shared_ptr<Widget>(new Widget), priority());
//widget priority shared_ptr  if step 2 throw excption, leak memory

shared_ptr<widgget> pw(new widget);
processWidget(pw, priority());

int main() 
{
	
