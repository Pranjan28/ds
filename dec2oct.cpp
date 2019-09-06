#include<iostream>
#include<stdexcept>
#define SIZE 100
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
	int dec;
	cout << "Enter decimal number : " ;
	cin >> dec;

	stack stk;

	int rem,p=0;
	while(dec!=0){
	rem=dec%8;
	stk.push(rem);
	dec=dec/8;
	p++;
        	
	}
        
	cout<<"equvalent octal number : ";
	for(int i=0;i<p;i++)
	{
		cout<<stk.pop();
	}
	cout << endl;

}
