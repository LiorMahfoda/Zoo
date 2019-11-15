#ifndef CORALS_H
#define CORALS_H
#include "Stationary.h"

class Corals:public Stationary
{
	char* Name;
	public:
		Corals(){ Name = "Corals";}; // C'tor
		virtual void Eat();
		virtual void Print(){cout<<Name<<endl;};
};

#endif 