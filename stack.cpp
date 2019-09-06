#include<iostream>
#include<stdexcept>
#define SIZE 5
using namespace std;

class Stack{
	int top;
	int arr[SIZE];

	public :

	Stack():top(-1){}

	bool IsFull(){
		return (top == SIZE -1);
	}

	bool IsEmpty(){
		return (top == -1);
	}

	int Peep(){
		if (IsEmpty()){
			throw runtime_error("UNNNDDER Flow");
		}
		return arr[top];
	}

	void Push(int el){
		if (IsFull()){
			throw runtime_error("OOVVER Flow" );
		}
		top++;
		arr[top] = el;
	}
	int Pop(){
		if(IsEmpty()){
			throw runtime_error("UUUUNNder Flow");
		}
		int el = arr[top];
		top--;
		return el;
	}
};


int main(){
		Stack stk;
		try {
			stk.Push(1);
			stk.Push(2);
			stk.Push(3);
			stk.Push(4);
			stk.Push(5);
			stk.Push(6);
			stk.Push(7);
			stk.Push(8);
			stk.Push(9);
		}
		catch(runtime_error e) {
			cout << "\n" << e.what() << endl;
		}

		try{
			cout << stk.Pop() << endl;
			cout << stk.Pop() << endl;
			cout << stk.Pop() << endl;
			cout << stk.Pop() << endl;
			cout << stk.Pop() << endl;
			cout << stk.Pop() << endl;
			cout << stk.Pop() << endl;
			cout << stk.Pop() << endl;
			cout << stk.Pop() << endl;
			cout << stk.Pop() << endl;
			cout << stk.Pop() << endl;
			}
			catch(runtime_error e){
			cout << e.what() << endl;
		}
	
}
