#include<iostream>
#include<stdexcept>
#define SIZE 4
using namespace std;

class stack{

int top;
int arr[SIZE];

	public:

stack():top(-1){}

bool Is_Full()

{
   	return(top==SIZE-1);
}

bool Is_Empty()
{

return(top==-1);
}

int peep()
{
	if(Is_Empty()){
		throw runtime_error("underflow ");	}
        return arr[top];    
}              


int pop()
{
	if(Is_Empty()){
		throw runtime_error("underflow ");	}
        
       int ele=arr[top];
      top=top-1;
      return ele;      
}              

void push(int ele)
{
    if(Is_Full())
    {
	    throw runtime_error("overflow  ");
    }	    
   
    top=top+1;
    arr[top]=ele;


}


};


int main()
{
	int choice;
	stack st;
	int i=0;
do
{
	cout<<"enter the choice:"<<endl;
cout<<"1.push\t2.pop\t3.peep\t4.exit"<<endl;
cin>>choice;

switch(choice)
{  
            case 1:
		    
		cout << "Enter value to push : " << endl;
		int op;
		cin >> op;
		try {
			st.push(op);}
		catch (runtime_error e){cout << e.what() << endl;}
	       break;
	case 2:
	       try
	       {
	       cout << st.pop() << endl;}
               catch(runtime_error e){cout<<e.what();}
	       break;
	case 3:
	       try{
	       cout << st.peep() << endl;}
	       catch (runtime_error e){cout << e.what() << endl;}
	       break;

	 case 4 : return 0;
	default:cout<<"enter valid choice"<<endl;
	

	}}while(1);

	return 0;
}


