#include<iostream>
using namespace std;

template<class T>
class node
{
 private:
       node* next;
	T data;
 public:
	node();
	void setdata(T ele);
	T getdata();
	void setnext(node* temp);
        node* getnext();

	



};	
