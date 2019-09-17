#include"node.h"
template<class T>
Node<T>::Node(){}

template<class T>
void Node<T>::setPrev(Node<T>* temp)
{
	prev=temp;
}


template<class T>
void Node<T>::setNext(Node<T>* temp)
{
	next=temp;
}


template<class T>
Node<T>* Node<T>::getPrev()
{
	return prev;
}


template<class T>
Node<T>* Node<T>::getNext()
{
	return next;
}

template<class T>
void Node<T>::setData(T ele)
{
	data=ele;
}

template<class T>
T Node<T>::getData()
{
	return data;
}


