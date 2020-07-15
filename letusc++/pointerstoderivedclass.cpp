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
	void display()
		{
			cout<<"b="<<b;
		}
};
int main()
{
	base *ptr,b;    //base ptr object 
	ptr=&b;           // base pointer contains address of base class object
	ptr->display();
	
	derived *derptr,d;       //when derived object is formed base class and derived class constructors are automaticlly called
	ptr=&d;                  // base pointer contains address of derived class object
	ptr->display();    //pointer creates address of derived class 
	 //OR_________
	 
	 base *ptrr=new derived;        //sara derived da new maal base de pointer object kol chala gya ha 
	 ptrr->display();
	 delete ptrr;
		
	return 0;
}

