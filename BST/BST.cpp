#include"BST.h"

#include<iostream>
using namespace std;


template<class T>
BST<T>::BST(){}

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
         while(temp!=NULL)
	 {
		 cout<<temp->getData()<<" "<<endl;
		 preorder(temp->getLeft()); // recursive fuction will run till leftmost node(argument)
		 preorder(temp->getRight());// right
	 }
        }


/*	template<class T>
		static void BST<T>::inorder(Node<T>* temp);

	template<class T>
		static void BST<T>::postorder(Node<T>* temp);

	template<class T>
		static void BST<T>::delete(Node<T>* temp);

	template<class T>
		static void BST<T>::findMax(Node<T>* temp);

	template<class T>
		static void BST<T>::findMin(Node<T>* temp);

	template<class T>
		Node<T>* BST<T>::getRootNode();

	template<class T>
		bool BST<T>::search(T val);

	template<class T>
		static void BST<T>::heightOfTree(Node<T>* temp);

*/







