#include<iostream>
using namespace std;

class over
{
	private:
		int a,b;
	public:
		over():a(10),b(20){}
		over(int a,int b):a(a),b(b)
	{
	
	}

		bool operator==(over &o2)
		{
			return ((a==o2.a)&&(b==o2.b));	
		}

		void Display()
		{
			cout<<"\nA="<<a<<"\tB="<<b<<endl;
		}
		friend ostream& operator<<(ostream& out,const over& o)
		{
			out<<"\nA="<<o.a<<"\tB="<<o.b<<endl;
			return out;
		}	

              friend  istream& operator>>(istream& in,over& i  )
	      {
		      in>>i.a;
		      in>>i.b;
		      return in;
	      }


};

int main()
{
//	over o1;
	over o1(11,12);
	over o2(21,12);
	cin>>o1;
	cout<<o1;
	o1.Display();
	o2.Display();
	if(o1==o2)
	{
		cout<<"same input"<<endl;

	}
	else
		cout<<"different output"<<endl;

	return 0;

}
