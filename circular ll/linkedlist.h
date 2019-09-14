#include"node.cpp"

template<class T>

class linkedlist
{ 
 private:
	node<T> *head;
	node<T> *tail;
	 int count;
 public:
	 linkedlist();
       ~linkedlist();
       int size();
       bool isempty();
      

      bool addatbegin(T ele);
      bool addatend(T ele);

      void display();
	 void deletefrombegin();
	 void deletefromend();
     void reverse();
	void addatpos(int pos, T ele);
};
