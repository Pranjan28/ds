#include"Node.cpp"
#include<iostream>
using namespace std;

template <class T>
class LinkedList
{
	private:
		Node<T> *head;
		Node<T> *tail;
	public:
		LinkedList():head(nullptr),tail(nullptr)
	        {}

		bool IsEmpty()
		{
		   return(head==nullptr && tail==nullptr)	
		}

		bool AddAtEnd(T ele)
                    {
                    Node<T> *temp=new Node<T>;//creating new node
		    temp->Set_Data(ele);//set data in new node
		    temp->Set_Next(nullptr);//set address of next node in new node
                    
		    if(IsEmpty())
		    {
			    head=tail=temp;
		    }

		    else
		    {
	             tail->Set_Next(temp);//set address of new node in the tail node(link created)
		     tail=temp; // new tail is at temp 
                     		     
		    } 
		    }

};
