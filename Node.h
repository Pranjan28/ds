#include<iostream>
using namespace std;
template <class T>
class Node
{
	private:
		T data;
		Node* next;
	public:
	      T Get_Data()
	      {
		      return data;
	      }	      
		
	      void Set_data(T ele)
	      {
	           	     data=ele; 
	      }

	      T Get_Next()
	      {
		      return next;
	      }

void Set_Next(Node* temp)
	      {
		      next=temp;
	      }
};
