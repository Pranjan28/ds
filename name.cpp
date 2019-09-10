#include<iostream>
#include<string>
using namespace std;

class name
{
	private:
        string pname;

	public:
        name():pname("abc")
	  {}
       virtual void accept()=0;
        
       virtual  void display()=0;
       
       void set()
       {
	       cin>>pname;
       }

       string get()
       {
	       return pname;
       }
};


class person:public name
{
	private:
		string city;
		
	public:
		person():city("xyz"){}

		void accept()
		{       cout<<"enter name"<<endl;
			//cin>>pname;
			name::set();
			cout<<"enter city"<<endl;
			cin>>city;
			
		}

		void display()
		{            
		      cout<<"name: "<<name::get()<<endl;
			cout<<"city: "<<city<<endl;
			
		}
};
int main()
{
       /*name *pb;	
       person p;
       pb=&p;
       pb->accept();
       pb->display();*/
      
       person p;
       p.accept();
       p.display();

	return 0;
}
