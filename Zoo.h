/* Assignment: 5
Campus:  Beer Sheva
Author: Lior Mahfoda , ID: 302782230 
Date: 07/05/2014 */

#ifndef ZOO_H
#define ZOO_H

#include <typeinfo>
#include "Animals.h"
#include "Buffalo.h"
#include "Cattle.h"
#include "Corals.h"
#include "Cow.h"
#include "Horse.h"
#include "Horses.h"
#include "Lion.h"
#include "Mobile.h"
#include "Predetor.h"
#include "Shark.h"
#include "Sheep.h"
#include "Sponges.h"
#include "Stationary.h"
#include "Vegan.h"
#include "Wolf.h"
#include "Zebra.h"
const int MAXSIZE = 200;

typedef enum KindOfAnimal
{ CORALS = 1,SPONGES = 2,LION = 3,SHARK = 4,WOLF = 5,ZEBRA = 6,HORSE = 7,COW = 8,SHEEP = 9,BUFFALO = 10};

class Zoo
{
	Animals* AllAnimals[MAXSIZE]; // all animals in the zoo [0-199]
	Mobile* MobileAnimals[MAXSIZE/2]; // all mobile animals [0-99]
	Lion* Lions[MAXSIZE/2]; // all lions, up to 100

	int CountTotal; // counter for all animals: 0-200
	int CountMobile; // counter for mobile animals - up to 100
	int CountLions; // counterfor all lions
	

	public:
		Animals** GetAll(){ return AllAnimals;};
		Mobile** GetMobile(){return MobileAnimals;};
		Lion** GetLions(){return Lions;};

		Zoo(); // C'tor		
		~Zoo(); // D'tor	
		void AddAnimal(Animals*); // Use of RTTI. Add a new animal to the zoo
		void EatAllZoo() const; // Method feeds the whole zoo according to each animal
		void DisplayAllZoo()const; // Method will display performance of each animal 
		void ActivationZoo()const; // Activate all mobile animals - each animal according to her ability
		void HuntingLions()const; // Activate all lions in the zoo to hunts
		void Exit(); // exit the program and realeses all allocations
		
};



#endif 