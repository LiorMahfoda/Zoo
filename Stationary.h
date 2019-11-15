#ifndef STATIONARY_H
#define STATIONARY_H
#include "Animals.h"

class Stationary:public Animals
{
	public:
		Stationary(){ } ; // C'tor
		virtual void Eat() = 0;
		virtual void Display();
};

#endif 