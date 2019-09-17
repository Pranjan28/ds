#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<int> myList={11,22,33,44};
	//Iterating through for loop
	for(auto p:myList)
		cout<<"\t"<<p;
		cout<<endl;

	//Iterating through iterator
	vector<int>::iterator it;
	for(it=myList.begin();it!=myList.end();it++)
		cout<<"\t"<<*it;
	
	return 0;
}
