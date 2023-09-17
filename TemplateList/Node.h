#pragma once
template <class T>

class Node
{
private:
	T* Obj; // para almacenar objetos
	Node<T>* Next; //puntero siguiente
public:
	Node(T*, Node<T>*); //constructor
	~Node();
	virtual void setObj(T *); //setear el objeto
	virtual T* getObj()const; //obtener el objeto

	virtual void setNext(Node<T> *); //setear el puntero siguiente
	virtual Node<T>* getNext();  //obtener el puntero siguiente
};

template <class T>
Node<T>::Node(T *obj, Node<T> *next):Obj(obj), Next(next) {}

template <class T>
void Node<T>::setObj(T *obj) 
{
	Obj = obj;
}

template <class T>
T *Node<T>::getObj()const 
{
	return Obj;
 }

template <class T>
void Node<T>::setNext(Node<T> *next) 
{
	Next = next;
}

template <class T>
Node<T> *Node<T>:: getNext() 
{
	return Next;
}

template <class T>
Node<T>::~Node(){}
