#include<iostream>
using namespace std;
class binary
{ 
      int a,b;
  public:
  	binary()
  	{
	  }
binary(int a,int b) //parametrized constructor
		{
		   this->a=a;
		   this->b=b;
		}
		void displayminus()
		  {
		  	cout<<"a="<<a<<endl<<"b="<<b<<endl;
		  }
binary operator-(binary temp) //for two operands
		  {
		  	cout<<"Now Operator Overloading works"<<endl; 
		  	binary minus;
		  	minus.a=a-temp.a;  	 //output object hona chaida ta krke minus return krawge
		    minus.b=b-temp.b;
		    return minus;
		  }
	};
		int main()
 {
		  binary b7(10,19),b8(20,90),b9;
		  
	      b8.displayminus();
	      b7.displayminus();
	      b9=b8-b7;   //b8.minusfn(b7); b9.a=b8.a-b7.a(type of b9 in return object)
	      cout<<"After applying - operator"<<endl;
	      b9.displayminus();
	      return 0;
	 }
