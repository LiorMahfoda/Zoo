#ifndef VEGAN_H
#define VEGAN_H
#include "Mobile.h"

class Vegan:public Mobile
{

	public:
		Vegan(){ }; // C'tor
		virtual void Eat();
		virtual void Display();
		virtual void Active() = 0 ;
};

#endif 