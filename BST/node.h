using namespace std;

template <class T>
class Node
{
	private:
		T data;
		Node<T>* left;
		Node<T>* right;
	public:
		Node();
		void setData(T data);
		T getData();
		void setLeft(Node<T>*);
		Node<T>* getLeft();
		void setRight(Node<T>*);
		Node<T>* getRight();


};
