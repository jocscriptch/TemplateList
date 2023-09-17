#pragma once
#include "ListIterator.h"
template <class T>
class List
{
private:
	Node<T> *firstNode;
public:
	List();
	~List();
	bool addObj(T*);
	ListIterator<T>* getIterator();
};

template <class T>
List<T>::List() 
{
	firstNode = nullptr;
}

template <class T>
bool List<T>::addObj(T* obj) 
{
	firstNode = new Node<T>(obj, firstNode);
	return true;
}

template <class T>
ListIterator<T>* List<T>::getIterator() 
{
	return new ListIterator<T>(firstNode);
}

template <class T>
List<T>::~List() //liberar memoria
{ 
	Node<T>* f = firstNode;
	Node<T>* aux;

	while (f != nullptr)
	{
		aux = f->getNext();
		delete f;
		f = aux;
	}
	firstNode = nullptr;
}