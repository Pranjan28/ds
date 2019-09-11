#include"node.cpp"
#include<iostream>
using namespace std;

template<class T>
class linkedlist
{
	private:
		node<T>*head;
		node<T>*tail;

	public:
		linkedlist():head(nullptr),tail(nullptr)
	{
	
		bool isfull()
		{ return false;
		}

		bool isempty()
		{return ((nullptr==head) && (nullptr==tail));
		}


		bool addatend(T ele)
		{  node<T> *temp= new node<T>;
			temp->setdata(ele);
			temp-> setnext(nullptr);

			if( isempty())
			{ head=tail=temp;

			}

			else
			{ tail->setnext(temp);
				temp->setnext(nullptr);
				tail=temp;

			}
		}


		bool addatstart(T ele)
		{ node<T> * temp=new node<T>;
			temp->setdata( ele);
			temp-> setnext(nullptr);

			if (isempty())
			{  head=tail=temp;
			}
			else
			{ temp->setnext(head);
				head=temp;
			}
		}



		T deleteatend()
		{ if (! isempty())
			{       T ele;
				ele=tail->getdata();
				node<T> * temp= tail;

				if(head==tail)  //if only 1 node is present 
				{  head=NULL;
					delete head;
					tail=NULL;
					delete tail;

					//count--
				}
				else
				{ 
					node<T>  * temp=head;
					while(temp->getnext()!=tail)
					{  temp=temp->getnext();}
					ele=tail->getdata();
					temp->setnext(NULL);
						delete tail;
					tail=temp;
				}
				return ele;


			}
		}



		void  display()
		{
			if(isempty())
			{
				cout<<"\nNo items to display"<<endl;
				return;
			}
			cout<<"\n Linked List Contents"<<endl;
			node<T>  *temp = NULL;
			temp= head;
			while(temp !=NULL)
			{
				cout<<temp->getdata()<<"---->";
				temp= temp->getnext();
			}
			cout<<"NULL";


		}

};






