#pragma once
#include "Node.h"
template <class T>
class ListIterator
{
private:
	Node<T> *Cursor; //recorre la lista
public:
	ListIterator(Node<T>*);
	bool moreElements(); //para verificar si hay mas elementos en la lista
	T* getObj();
};

template <class T>
ListIterator<T>::ListIterator(Node<T>* obj) 
{
	Cursor = obj;
}

template <class T>
bool ListIterator<T>::moreElements() 
{
	return(Cursor != nullptr); //retorna true si hay nodos en la lista
}

template <class T>
T* ListIterator<T>::getObj() 
{
	T* e;
	if (moreElements()) {
		e = Cursor->getObj();
		Cursor = Cursor->getNext();
		return e;
	}
	return nullptr; //nulo si no hay nodos
}

