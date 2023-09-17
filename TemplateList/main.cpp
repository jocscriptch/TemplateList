#include <iostream>
#include "Cat.h"
#include "Person.h"
#include "Node.h"

int main() {

	Person* per = new Person("Juan", "Jimenez", "Ruiz");
	Cat* cat1 = new Cat("Angora", "Negro");
	Cat* cat2 = new Cat("Persa", "Blanco");

	//creando un nodo, enviandole un objeto gato
	Node<Cat> *no = new Node<Cat>(cat1, NULL); 
	Node<Cat> *no1 = new Node<Cat>(cat2, no);

	std::cout << *no1->getObj()<<endl;

	std::cout << *no1->getNext()->getObj()<<endl;

	delete per;
	delete cat1;
	delete cat2;
	
	EXIT_SUCCESS;
}