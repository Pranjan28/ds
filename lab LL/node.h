template <class T>
class node
{
	T data;
	node *next;
	public:
	node();
	void setdata(T data);
	T getdata();
	void setnext(node* temp);
	node* getnext();
};

