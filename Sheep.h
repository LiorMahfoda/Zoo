#ifndef SHEEP_H
#define SHEEP_H
#include "Cattle.h"

class Sheep:public Cattle
{
	char* Name;
	public:
		Sheep(){Name ="Sheep"; }; // C'tor
		virtual void Print() {cout<<Name<<endl;};
};

#endif 