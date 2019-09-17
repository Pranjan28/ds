#include"node.h"

Node::Node(){}

void Node::setPrev(Node* temp)
{
	prev=temp;
}


void Node::setNext(Node* temp)
{
	next=temp;
}


Node* Node::getPrev()
{
	return prev;
}


Node* Node::getNext()
{
	return next;
}

void Node::setData(int ele)
{
	data=ele;
}

int Node::getData()
{
	return data;
}


