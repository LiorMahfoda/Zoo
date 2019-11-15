#ifndef BUFFALO_H
#define BUFFALO_H
#include "Cattle.h"

class Buffalo:public Cattle
{
	char* Name;

	public:
		Buffalo(){ Name = "Buffalo";}; // C'tor
		void Print(){cout<<"Buffalo"<<endl;};
};



#endif