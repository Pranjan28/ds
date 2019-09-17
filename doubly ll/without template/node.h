#include<iostream>
using namespace std;

class Node
{
	private:
		Node* prev;
		Node* next;
		int data;
	public:
		Node();
	       
                void setPrev(Node* temp);
		void setNext(Node* temp);
		void setData(int ele);
		Node* getPrev();
		Node* getNext();
		int getData();
};
