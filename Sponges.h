#ifndef SPONGES_H
#define SPONGES_H
#include "Stationary.h"


class Sponges:public Stationary
{
	char* Name;
	public:
		Sponges(){Name ="Sponges";}; // C'tor
		virtual void Print(){ cout<<Name<<endl;};
		virtual void Eat();
};

#endif 