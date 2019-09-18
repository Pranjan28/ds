#include"BST.h"

#include<iostream>
using namespace std;


	template<class T>
BST<T>::BST():root(NULL)
{}

	template<class T>
BST<T>::~BST()
{

}

	template<class T>
Node<T>* BST<T>::getRootNode()
{
	return root;

}

	template<class T>
void BST<T>:: insert(T ele)
{
	Node<T>* temp=new Node<T>; //create new node to be inserted
	temp->setData(ele);
	temp->setLeft(NULL);
	temp->setRight(NULL);
	if(root==NULL)   // if tree is empty
	{
		root=temp;
	}
	else            // if tree is non empty
	{
		Node<T>* current= root;
		while(current!=NULL)  
		{		
			if(ele==current->getData()) //if duplicate value inserted
			{
				throw runtime_error("duplicate values");
			}
			if(ele < current->getData()) //insert at left
			{
				if(current->getLeft()==NULL)
				{
					current->setLeft(temp);
					return;
				}
				else
				{
					current=current->getLeft();
				}
			}
			else     // insert at right
			{
				if(current->getRight()==NULL)
				{
					current->setRight(temp);
					return;
				}
				else
				{
					current=current->getRight();
				}
			}
		}
	}
}

	template<class T>
void BST<T>::preorder(Node<T>* temp) 
{
	if(temp!=NULL)
	{
		cout<<temp->getData()<<" "<<endl;
		preorder(temp->getLeft()); // recursive fuction will run till leftmost node(argument)
		preorder(temp->getRight());// right
	}
}


	template<class T>
void BST<T>::inorder(Node<T>* temp)
{
	if(temp!=NULL)
	{

		inorder(temp->getLeft()); 
		cout<<(temp->getData())<<" "<<endl;
		inorder(temp->getRight());	 
	}	 
}


	template<class T>
void BST<T>::postorder(Node<T>* temp)
{
	if(temp!=NULL)
	{

		postorder(temp->getLeft());
		postorder(temp->getRight());
		cout<<(temp->getData())<<" "<<endl;
	}}


	template<class T>
void BST<T>::Delete(Node<T>* temp)
{
	if (temp != NULL) 
	{
		Delete(temp->getLeft());
		Delete(temp->getRight());
	}
	delete temp;
}

	template<class T>
void BST<T>::findMax(Node<T>* temp)
{
	while(temp->getRight()!=NULL)
	{
		temp=temp->getRight();
		BST<T>::countRight++;

	}
	cout<<(temp->getData())<<" "<<endl;
	cout<<countRight<<" "<<endl;
}

	template<class T>
void BST<T>::findMin(Node<T>* temp)
{
	while(temp->getLeft()!=NULL)
	{
		temp=temp->getLeft();
		countLeft++;
	}
	cout<<(temp->getData())<<" "<<endl;
	cout<<countLeft<<" "<<endl;
}
template<class T>
int BST<T>::countRight=0;
template<class T>
int BST<T>::countLeft=0;

	template<class T>
void BST<T>::heightOfTree()
{
	if(countRight>countLeft)
		cout<<"height= "<<(countRight+1)<<endl;
	else
		cout<<"height= "<<(countLeft+1)<<endl;
}


	template<class T>
bool BST<T>::search(T val)
{     Node<T>* temp=root;
	while(temp!=NULL)
	{
		if(temp->getData()==val)
		{
			return true;
		}

		else if(val<temp->getData())
		{
			temp=temp->getLeft();
		}

		else 
		{
			temp=temp->getRight();
		}
	}

	return false;
}




