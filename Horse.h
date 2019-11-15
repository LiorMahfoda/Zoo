#ifndef HORSE_H
#define HORSE_H
#include "Horses.h"

class Horse:public Horses
{
	char* Name;
	public:
		Horse(){ Name = "Horse";}; //C'tor
		virtual void Print(){cout<<Name<<endl;};
};

#endif 