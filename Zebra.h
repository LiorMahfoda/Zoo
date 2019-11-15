#ifndef ZEBRA_H
#define ZEBRA_H
#include "Horses.h"

class Zebra:public Horses
{
	char* Name;
	public:
		Zebra(){ Name = "Zebra"; }; //C'tor
		virtual void Print() {cout<<Name<<endl;}; 
};


#endif 