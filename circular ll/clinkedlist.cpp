#include"linkedlist.h"
#include<iostream>
using namespace std;

template<class T>

linkedlist<T>::linkedlist():head(NULL),tail(NULL),count(0)
{ 
}

	template<class T>
linkedlist<T>::~linkedlist()
{
	cout<<"destructor is called";
	node<T> *t=head;
	while(head!=NULL)
	{
		t=head;
		head=head->getnext();
		delete t;

	}}

	template<class T>
int linkedlist<T>::size()
{ return  count;
}

	template<class T>
bool linkedlist<T>::isempty()
{
	return(head==NULL && tail==NULL);
}


	template<class T>
bool linkedlist<T>::addatbegin(T ele)
{
	bool bSuccess=false;	
	node<T> *t=new node<T>;
	t->setdata(ele);

	if(isempty())
	{ 
		t->setnext(t);
		head=t;
		tail=t;
		count++;
		bSuccess=true;
	}
	else    

	{       tail->setnext(t);
		t->setnext(head);
		head=t;

		count++;

		bSuccess=true;
	}
	return bSuccess;
}

	template<class T>
bool linkedlist<T>::addatend(T ele)
{ 
	bool bSuccess=false;	
	node<T> *t=new node<T>;
	t->setdata(ele);

	if(isempty())
	{  
		t->setnext(NULL);
		head=t;
		tail=t;
		count++;
		bSuccess=true;
	}
	else
	{
		t->setnext(NULL);
		tail->setnext(t);
		tail=t;
		count++;
		bSuccess=true;
	}

	return bSuccess;
}
template <class T>

void linkedlist<T>::deletefrombegin()
{
	if(isempty())
	{
		cout<<"nothing to delete in the list"<<endl;
	}

	else
	{
		if(head==tail)
		{
			int ele=head->getdata();

			head=tail=NULL;
			delete head;
			count --;
		}

		else{
			int ele=head->getdata();
			node<T>* temp=head;

			head=head->getnext();
			// temp=temp->setnext(NULL);
			delete temp;
			count --;
		}

	}
}

	template<class T>
void linkedlist<T>::deletefromend()
{
	if(isempty())
	{
		cout<<"no ele to delete"<<endl;

	}
	else
	{	   
		if(head==tail)
		{
			int ele=head->getdata();
			head=NULL;
			tail=NULL;
			delete head;
			count --;
		}
		else
		{
			int ele=tail->getdata();
			node<T>* temp=head;
			while(temp->getnext()!=tail)
			{
				temp=temp->getnext();
			}
			temp->setnext(NULL);
			tail=temp;
			count --;



		}
	}
}
	template<class T>
void linkedlist<T>::display()
{

	if(isempty())
	{
		cout<<"\n No items to display"<<endl;
		return;
	}

	cout<<"\n linkedlist elements are:";
	node<T> *t=NULL;
	t=head;

	do
	{ 
		cout<<t->getdata()<<"\t";

		t=t->getnext();

	}while(t!=tail);
	cout<<tail->getdata()<<endl;

}




	template<class T>
void linkedlist<T>::reverse()
{

	if (isempty())
	{ 
		cout<<"no items to reverse:\n";
		return;
	}
	else

	{     node<T> *nhead=head;
		node<T> *temp=NULL;

		head=head->getnext();
		nhead->setnext(NULL);
		tail=nhead;

		while(head!=NULL)
		{ 
			temp=head;
			head=head->getnext();
			temp->setnext(nhead);
			nhead=temp;



		}
		head=nhead;





	}
}

        

	template<class T>
void linkedlist<T>::addatpos(int pos,T ele)
{

	cout<<"enter the ele";
	cin>>ele;

	cout<<"enter the position";
	cin>> pos;

	node<T> *p;
	node<T> *q;
	node<T> *temp=new node<T>;
	p=head;
	q=head->getnext();
	int no=0;


	while(no!=pos-2)
	{
		p=p->getnext();
		q=q->getnext();
		no++;
	}

	p->setnext(temp);
	temp->setnext(q);
	temp->setdata(ele);
	count++;




}


