#ifndef MENU_H
#define MENU_H
#include "Zoo.h"
const int SIZE = 5;

class Menu
{
	Zoo zoo;
	public:

		Menu();
		void Print1();
		void Print2();
		void Create(); 
		void Build(int num,Animals* ptr);
};
#endif

