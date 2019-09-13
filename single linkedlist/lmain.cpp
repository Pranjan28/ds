#include"linkedlist.cpp"
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

linkedlist<int> link1;	
int choice;

cout<<"MENU"<<endl;
cout<<"1.add at begin\n 2.add at end \n 3.display\n 4.delete from start\n5.delete from end\n6. size\n9.exit "<<endl;
do{
cout<<"enter choice:"<<endl;
cin>>choice;

switch(choice)
{
	case 1:{
		int ele;
	 cout<<"enter element"<<endl;
	 cin>>ele;	 
		if(link1.addatbegin(ele))
                   cout<<"insertion succeded"<<endl;
		else
			cout<<"failed"<<endl;
	       } break;
	case 2:{
		int ele;
	 cout<<"enter element"<<endl;
	 cin>>ele;	 
		if(link1.addatend(ele))
                   cout<<"insertion succeded"<<endl;
		else
			cout<<"failed"<<endl;
	       } break;
	       
	case 3:link1.display();
	       break;
case 4:
              
                link1.deletefrombegin();
                    break;
case 5: link1.deletefromend();
break;	

case 6: cout<<"size=\n"<<link1.size();
      break; 

}}while(choice!=0);


	return 0;
}
