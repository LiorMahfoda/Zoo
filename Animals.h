#ifndef ANIMALS_H
#define ANIMALS_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <assert.h>
#include <string>


class Animals
{
	// Private //	

	public:
		Animals(){}; // C'tor
		virtual void Eat() = 0;
		virtual void Display() = 0;
};


#endif 

