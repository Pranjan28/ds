#include"node.h"
#include<iostream>

template<class T>
Node<T>::Node(){}

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

template<class T>
void Node<T>::setLeft(Node<T>* temp)
{
	left=temp;
}

template<class T>
Node<T>* Node<T>::getLeft()
{
	return left;
}

template<class T>
void Node<T>::setRight(Node<T>* temp)
{
	right=temp;
}


template<class T>
Node<T>* Node<T>::getRight()
{
	return right;
}

