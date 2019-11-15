#ifndef WOLF_H
#define WOLF_H
#include "Predetor.h"

class Wolf:public Predetor
{
	char* Name;
	public:
		Wolf(){ Name ="Wolf"; };
		virtual void Print(){ cout<<Name<<endl;};
		virtual void Eat();
		virtual void Display();
};

#endif 