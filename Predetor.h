#ifndef PREDETOR_H
#define PREDETOR_H
#include "Mobile.h"

class Predetor:public  Mobile
{

	public:
		Predetor(){ }; // C'tor
		void Eat() = 0;
		void Display() = 0;
		virtual void Active();

};

#endif