#include"BST.cpp"
#include<iostream>
using namespace std;

int main()
{
	BST<int> obj;
	cout<<"1.Insert element"<<endl;
	cout<<"2.Preorder"<<endl;
	cout<<"9.Exit"<<endl;
	int choice;
	do
	{	

		cout<<"enter choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				int ele;
				cout<<"enter element"<<endl;
				cin>>ele;
				obj.insert(ele);
				break;
			case 2:
				BST<int>::preorder(obj.getRootNode()); // calling static function on class name
				break;
			


		}
	}while(choice!=9);
	return 0;
}
