
#include"double_ll.h"


//Dlinkedlist::Dlinkedlist(){}
Dlinkedlist::Dlinkedlist():head(NULL),tail(NULL),count(0){}

Dlinkedlist::~Dlinkedlist()
{
	Node * temp=nullptr;
	while(head!=NULL)
	{
	temp=head;
	head=head->getNext();
	delete temp;
	}

}

int Dlinkedlist:: size()
{
cout<<"total elements in the linkedlist: "<<count<<endl;	
}
bool Dlinkedlist:: isEmpty()
{
	return ((head==NULL) && (tail==NULL));
}

void Dlinkedlist::addAtBegin(int ele)
{
     Node *temp=new Node;  //new node created
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

void Dlinkedlist::addAtEnd(int ele)
{

	Node* temp=new Node;
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


void Dlinkedlist::display()
{     Node* temp;
       temp=head;	
       
        while(temp!=NULL){
        
	cout<<temp->getData()<<"--> ";
	temp=temp->getNext();
	}
	cout<<"\n";
}

void Dlinkedlist::insertAtPosition(int ele)
{
	int pos;
cout<<"enter the position"<<endl;
cin>>pos;

Node* temp=new Node;
temp->setData(ele);
Node* p;
Node* q;
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

void Dlinkedlist::delFromBegin()
{
int ele=head->getData();
Node* temp=nullptr;
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

void Dlinkedlist::delFromEnd()
{
Node* temp=nullptr;
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






