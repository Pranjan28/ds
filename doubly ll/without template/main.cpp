#include"double_ll.h"

int main()
{      Dlinkedlist dll;
	cout<<"enter the choice:"<<endl;
	cout<<"1.add at begin"<<endl;
	cout<<"2.add at end"<<endl;
	cout<<"3.display"<<endl;
	cout<<"4.insert at position"<<endl;
	cout<<"5.delete from begin"<<endl;
	cout<<"6.delete from end"<<endl;
	cout<<"7.size"<<endl;
	cout<<"8.exit"<<endl;
	
           int choice;
	do{
		cout<<"\nenter the choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1: int ele;
				cout<<"enter the element you want to add"<<endl;
                                cin>>ele;
				dll.addAtBegin(ele);
				break;

			case 2:
			       cout<<"enter the element u want to add:"<<endl;
			       cin>>ele;
			       dll.addAtEnd(ele);
			       break;
			case 3:
				dll.display();
				break;
			case 5: dll.delFromBegin();
				break;
			case 6:dll.delFromEnd();
			       break;
			case 4:cout<<"enter the element u want to add:"<<endl;
                               cin>>ele;
                           
			       dll.insertAtPosition(ele);
			       break;
			case 7:dll.size();
			       break;
			case 8:{}
			       break;
		}
	}while(choice!=8);
	return 0;

}
