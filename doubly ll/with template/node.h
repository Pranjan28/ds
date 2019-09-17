#include<iostream>
using namespace std;
template <class T>
class Node
{
	private:
		Node* prev;
		Node* next;
		T data;
	public:
		Node();
	       
                void setPrev(Node* temp);
		void setNext(Node* temp);
		void setData(T ele);
		Node* getPrev();
		Node* getNext();
		T getData();
};
