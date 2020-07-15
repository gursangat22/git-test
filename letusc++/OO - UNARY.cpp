// UNARY OPERATOR OVERLOADING WITHOUT FRIEND
#include<iostream>
using namespace std;

class minu
{
	int a;
	public:
		minu() //default constructor
		{
		}
		void minufn(int x)    
		{
			a=x;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
		}
		minu operator-()
		{
			minu y;
			y.a=-a;     //also if without output object we can write (a=-a) that will also do the work
			return y;
		}
		
		
};

       int main()
       {
       	minu i,i2;
       	i.minufn(5 );
       	i2=-i;   //i2=i.operator--();
       	i2.show();
        // if alone -i then no need of this unary operator function only a=-a will satisfy
       	return 0;
	   }
