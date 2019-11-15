#ifndef LION_H
#define LION_H
#include "Predetor.h"

class Lion:public Predetor
{
	char* Name;
	public:
		Lion(){ Name = "Lion";}; 
		virtual void Print(){cout<<Name<<endl;};
		virtual void Eat();
		virtual void Display();
		void Hunt();
		

};

#endif 