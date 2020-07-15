#include <iostream>
using namespace std;
class binary
{
	int a;
	public:
	    binary()
	    {
	        
	    }
		binary(int a) //parametrized constructor
		{
		   this->a=a;
		   
		}
	   void display()
          {
          	cout<<"a="<<a<<endl;
		  }
		  
		  binary operator+(binary &b)  // for single operand   also(binary operator+(binary b);)
		  {
		  	binary b2;
		  	b2.a=a+b.a; 
		  	return b2;
		  }
		 
};
int main()
{
	     binary b10(10),b13(18),b14;
	     b14=b10+b13;   // both sides object so output has to be object
	     b10.display();
	     b13.display();
	     cout<<"After applying overloading";
	     b14.display();
	     return 0;
}
