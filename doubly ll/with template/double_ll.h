#include"node.cpp"
template<class T>
class Dlinkedlist
{
	private:
		Node<T>* head;
		Node<T>* tail;
		int count;
	public:
		Dlinkedlist();
               ~Dlinkedlist();
		//Dlinkedlist(Node* head,Node* tail,int count);
                int size(); 
                bool isEmpty();
        		
                void addAtBegin(T ele);
                void addAtEnd(T ele);
		void display();
                void insertAtPosition(T ele);
                void delFromBegin(); 
                void delFromEnd();



};
