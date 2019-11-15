#include "Zoo.h"

Zoo::Zoo()
{
		CountMobile = 0; CountTotal = 0; CountLions = 0;
	for (int i=0; i<MAXSIZE; i++)
		AllAnimals[i] = NULL;
	for (int i=0; i<MAXSIZE/2; i++)
	{
		MobileAnimals[i] = NULL;
		Lions[i] = NULL;
	} // end for
	
}

Zoo::~Zoo()
{
	for (int i=0; i<MAXSIZE; i++)
		delete[] AllAnimals[i];
}

void Zoo::AddAnimal(Animals * Brute)
{
	AllAnimals[CountTotal] = Brute; // enter new animal
	Mobile* HelperMobile =  dynamic_cast<Mobile*>(Brute); // check if animal is mobile
	if (HelperMobile)
	{
		MobileAnimals[CountMobile] = HelperMobile; // insert mobile animal
		Lion* HelperLion = dynamic_cast<Lion*>(HelperMobile);// check if animal is a lion
		if (HelperLion)
		{
			Lions[CountLions] = HelperLion ;
			CountLions++; // advance lions by 1
		} //end if
		CountMobile++; // advance mobiles by 1
	} // end if
	CountTotal++; // advance  by 1
}

void Zoo::EatAllZoo() const
{
	for (int i = 0; i< MAXSIZE; i++)
		AllAnimals[i]->Eat();	
}

void Zoo::DisplayAllZoo() const
{
	for (int i = 0; i< MAXSIZE; i++)
		MobileAnimals[i]->Display();
}

void Zoo::ActivationZoo() const
{
	 for (int i = 0; i< MAXSIZE; i++)
	 {
		 Lions[i]->Print();
		 Lions[i]->Active();
	 }
	
}

void Zoo::HuntingLions() const
{
	for (int i = 0; i< MAXSIZE/2; i++)
		Lions[i]->Hunt();
}

void Zoo::Exit()
{
	exit(1);
}


