#include"node.h"
class Dlinkedlist
{
	private:
		Node* head;
		Node* tail;
		int count;
	public:
		Dlinkedlist();
               ~Dlinkedlist();
		//Dlinkedlist(Node* head,Node* tail,int count);
                int size(); 
                bool isEmpty();
        		
                void addAtBegin(int ele);
                void addAtEnd(int ele);
		void display();
                void insertAtPosition(int ele);
                void delFromBegin(); 
                void delFromEnd();



};
