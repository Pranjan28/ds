#include"BST.cpp"
#include<iostream>
using namespace std;

int main()
{
	BST<int> obj;
	int choice;
	do
	{	
		cout<<endl<<"1.Insert element"<<endl;
		cout<<"2.Preorder"<<endl;
		cout<<"9.Exit"<<endl;
		cout<<"enter choice: "<<endl;
		cin>>choice;
		cin.get();

		switch(choice)
		{
			case 1:
				int ele;
				cout<<"enter element"<<endl;
				cin>>ele;
				try
				{
					obj.insert(ele);
				}
				catch(runtime_error re)
				{
					cout<<endl<<re.what()<<endl;
				}
				break;

			case 2:
				BST<int>::preorder(obj.getRootNode()); // calling static function on class name
				break;

			case 9: cout<<endl<<"EXITING";
				break;

			default: cout<<endl<<"Please enter a valid choice";

		}
	}while(choice!=9);
	return 0;
}
