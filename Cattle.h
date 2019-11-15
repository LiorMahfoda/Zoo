#ifndef CATTLE_H
#define CATTLE_H
#include "Vegan.h"

class Cattle: public Vegan
{

	public:
		Cattle(){ ;}; // C'tor
		virtual void Active();
};

#endif 