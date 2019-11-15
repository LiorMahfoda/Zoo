#ifndef COW_H
#define COW_H
#include "Cattle.h"

class Cow:public Cattle
{
	char* Name;

	public:
		Cow(){ Name = "Cow";}; // C'tor
		virtual void Print(){cout<<Name<<endl;};
};

#endif 
