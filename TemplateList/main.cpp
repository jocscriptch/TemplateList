#include <iostream>
#include "Cat.h"
#include "Person.h"
#include "List.h"
int main() 
{
	List<Cat>* Lis = new List<Cat>;
	//Person* per = new Person("Juan", "Jimenez", "Ruiz");
	Cat* cat1 = new Cat("Angora", "Negro");
	Cat* cat2 = new Cat("Persa", "Blanco");
	Cat* cat3 = new Cat("Ragdoll", "Blanco");
	Cat* cat4 = new Cat("Siberiano", "Cafe");
	Cat* cat5 = new Cat("Siberiano", "Gris");

	Lis->addObj(cat1);
	Lis->addObj(cat2);
	Lis->addObj(cat3);
	Lis->addObj(cat4);
	Lis->addObj(cat5);
	
	Cat *C;
	ListIterator<Cat>* lt = Lis->getIterator();//recorrer la lista
	while (lt->moreElements()) //si hay elementos que los muestre
	{
		C = lt->getObj();
		std::cout << C->toString() << endl;
	}
	delete lt;
	EXIT_SUCCESS;
}