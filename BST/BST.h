#include"node.cpp"

template<class T>
class BST
{
	private:
		Node<T>* root;
		static int countLeft;
	       static int countRight;

	public:
		BST();
		~BST();
		void insert(T ele);
		
		static void preorder(Node<T>* temp);
                static void inorder(Node<T>* temp);
		static void postorder(Node<T>* temp);
		
		static void Delete(Node<T>* temp);
		
		static void findMax(Node<T>* temp);
		static void findMin(Node<T>* temp);
                
		Node<T>* getRootNode();
	
		bool search(T val);
		static void heightOfTree();



		
		
                                    




};
