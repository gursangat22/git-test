#include<iostream>
using namespace std;
class base
{
	int a;
	public:
	   base()
		{
			a=10;
		}
	  virtual void display()
		{
			cout<<"a="<<a;
		}
};
class derived: public base
{
	int b;
public:
	derived()
	{
		b=20;
	}
    void display()   //this is virtual function which helps in printing derived class display() function
		{
			cout<<"b="<<b;
		}
};
int main()
{
	base *ptr,b;    //base ptr    it is not pure virtual thts why object of base class is possible
	ptr=&b;           // base pointer contains address of base class object
	ptr->display();
	
	derived d;       //when derived object is formed base class and derived class constructors are automaticlly called
	ptr=&d;                  // base pointer contains address of derived class object
	ptr->display();    //pointer creates address of derived class 
	return 0;
}

