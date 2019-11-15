#ifndef SHARK_H
#define SHARK_H
#include "Predetor.h"

class Shark:public Predetor
{
	char* Name;
	public:
		Shark(){ Name= "Shark";};
		virtual void Print(){cout<<Name<<endl;};
		virtual void Eat();
		virtual void Display();
};

#endif 