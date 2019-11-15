#include "Menu.h"

Menu::Menu()
{
	Animals* ptr = NULL; int num = 0;
		for (int i=0; i<SIZE ;i++)
		{
			cout<<"Select an animal to insert"<<endl<<endl;
			Print1(); // prints options
			cin>>num; 
			cout<<endl;
			Build(num,ptr);
		}
}

void Menu::Print1()
{
	cout<<"For Coral press 1"<<endl;
	cout<<"For Sponge press 2"<<endl;
	cout<<"For Lion press 3"<<endl;
	cout<<"For Shark press 4"<<endl;
	cout<<"For Wolf press 5"<<endl;
	cout<<"For Zebra press 6"<<endl;
	cout<<"For Horse press 7"<<endl;
	cout<<"For Cow press 8"<<endl;
	cout<<"For Sheep press 9"<<endl;
	cout<<"For Buffalo press 10"<<endl;
}

void Menu::Print2()
{
		cout<<"What would you like to do next?"<<endl<<endl;
		cout<<"For enter a new animal press 1"<<endl;
		cout<<"For feed all animals press 2"<<endl;
		cout<<"For display of all animals press 3"<<endl;
		cout<<"For activation of all mobile animals press 4"<<endl;
		cout<<"For lions special act press 5"<<endl;
		cout<<"For exit press 6"<<endl;
}

void Menu::Create()
{
	Animals* ptr = NULL;
		Print2(); //prints options
		char choice = '0';
		cin>>choice;
		cout<<endl;
		while (choice > 0 && choice<= SIZE+1)
		{
			switch (choice)
			{
			case '1':
				Print1(); // prints options
				cin>>choice;
				Build(choice,ptr);
				break;

			case '2':
				zoo.EatAllZoo();
				break;

			case '3':
				zoo.DisplayAllZoo();
				break;

			case '4':
				zoo.ActivationZoo();
				break;

			case '5':
				zoo.HuntingLions();
				break;

			case '6':
				zoo.Exit();
				break;
		
		}// end switch case

			Print2(); // prints options
			cin>>choice;

		} // end while
}

void Menu::Build(int choice,Animals* ptr)
{
	switch (choice) {
		
		case LION:
			ptr = new Lion;

		case CORALS:
			ptr = new Corals;
			break;
	
		case SPONGES:
			ptr = new Sponges;
			break;

			case SHARK:
			ptr = new Shark;
			break;
		
		case WOLF:
			ptr = new Wolf;
			break;
		
		case ZEBRA:
			ptr = new Zebra;
			break;

		case HORSE:
			ptr = new Horse;
			break;

		case COW:
			ptr = new Cow;
			break;

		case SHEEP:
			ptr = new Sheep;
			break;
	
		case BUFFALO:
			ptr = new Buffalo;
			break;

		} // end switch

	zoo.AddAnimal(ptr); // uses method from zoo.h to insert a new animal	
}
