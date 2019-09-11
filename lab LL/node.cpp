#include"node.h"


template <class T>
node<T>::node()
{

}

template <class T>
void node<T>:: setdata(T data)
{ data=data;
}

template <class T>
T node<T>::getdata()
{ return data;
}

template <class T>
void node<T>::setnext(node<T>* temp)
{ next=temp;
}

template <class T>
node<T>* node<T>::getnext()   //node
{return next;
}


