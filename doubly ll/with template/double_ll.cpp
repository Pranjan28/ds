
#include"double_ll.h"


template<class T>
Dlinkedlist<T>::Dlinkedlist():head(NULL),tail(NULL),count(0){}

template<class T>
Dlinkedlist<T>::~Dlinkedlist()
{
	Node<T> * temp=nullptr;
	while(head!=NULL)
	{
	temp=head;
	head=head->getNext();
	delete temp;
	}

}

template<class T>
int Dlinkedlist<T>:: size()
{
cout<<"total elements in the linkedlist: "<<count<<endl;	
}
template<class T>
bool Dlinkedlist<T>:: isEmpty()
{
	return ((head==NULL) && (tail==NULL));
}

template<class T>
void Dlinkedlist<T>::addAtBegin(T ele)
{
     Node<T> *temp=new Node<T>;  //new node created
      temp->setData(ele);

      if(isEmpty())
{
head=temp;
tail=temp;
temp->setNext(NULL);
temp->setPrev(NULL);
count++;
}

else
{
temp->setNext(head);
head->setPrev(temp);
temp->setPrev(NULL);
head=temp;
count++;
}
}

template<class T>
void Dlinkedlist<T>::addAtEnd(T ele)
{

	Node<T>* temp=new Node<T>;
	temp->setData(ele);
if(isEmpty())
{

temp->setNext(NULL);
temp->setPrev(NULL);
tail=temp;
head=temp;
count++;
}

else
{
tail->setNext(temp);
temp->setNext(NULL);
temp->setPrev(tail);
tail=temp;
count++;
}

}


template<class T>
void Dlinkedlist<T>::display()
{     Node<T>* temp;
       temp=head;	
       
        while(temp!=NULL){
        
	cout<<temp->getData()<<"--> ";
	temp=temp->getNext();
	}
	cout<<"\n";
}

template<class T>
void Dlinkedlist<T>::insertAtPosition(T ele)
{
	int pos;
cout<<"enter the position"<<endl;
cin>>pos;

Node<T>* temp=new Node<T>;
temp->setData(ele);
Node<T>* p;
Node<T>* q;
p=head; //p at 1st node
q=head;
q=q->getNext();// q at 2nd node
int n=0;
while(n!=pos-2)//if u want to insert at 5th position,then it will run 3 times
{
	p=p->getNext(); // p reached at 4th node
	q=q->getNext(); // q reached at 5th node
	n++;
}

p->setNext(temp);
temp->setPrev(p);
temp->setNext(q);
q->setPrev(temp);
count++;

}

template<class T>
void Dlinkedlist<T>::delFromBegin()
{
T ele=head->getData();
Node<T>* temp=nullptr;
if(head==tail)
{
temp=head;
tail=NULL;
head=NULL;
delete temp;
count--;
}

else
{
temp=head;
head=head->getNext();
temp->setNext(NULL);
head->setPrev(NULL);
delete temp;
count--;
}

}

template<class T>
void Dlinkedlist<T>::delFromEnd()
{
Node<T>* temp=nullptr;
if(head==tail)
{
temp=head;
tail=NULL;
head=NULL;
delete temp;
count--;
}

else
{
temp=head;
while(temp->getNext()!=tail)
{
	temp=temp->getNext();
}

temp->setNext(NULL);
tail->setPrev(NULL);
tail=NULL;
delete tail;// node to which tail is pointing will get delete,not the pointer
tail=temp;
count--;

}

}






