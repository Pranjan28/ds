#include"BST.cpp"
#include<iostream>
using namespace std;
	 
int main()
{
	
	BST<int> obj;
	cout<<"1.Insert element"<<endl;
	cout<<"2.Preorder"<<endl;
	cout<<"3.Inorder"<<endl;
	cout<<"4.Postorder"<<endl;
	cout<<"5.delete"<<endl;
	cout<<"6.find Max"<<endl;
	cout<<"7.find Min"<<endl;
	cout<<"8.height of tree"<<endl;
	cout<<"10.search"<<endl;
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
		        case 3:
				BST<int>::inorder(obj.getRootNode());
				break;
			case 4:

				BST<int>::postorder(obj.getRootNode());
				break;
			case 5:
				BST<int>::Delete(obj.getRootNode());
				break;

			case 6:BST<int>::findMax(obj.getRootNode());
			       break;
                         
			case 7:BST<int>::findMin(obj.getRootNode());
			       break;
			case 8:BST<int>::heightOfTree();
			       break;

			case 10:int val;
				cout<<"enter the element to search"<<endl;
				cin>>val;
			      bool result=obj.search(val);
			      cout<<"result= "<<result<<endl;
			       break;
                        //default:cout<<"invalid choice"<<endl;

		}
	}while(choice!=9);
	return 0;
}
