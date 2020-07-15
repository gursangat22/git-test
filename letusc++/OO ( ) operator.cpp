#include <iostream>
using namespace std;
class parenthesis
{
	int a,b;
	public:
		parenthesis(int x,int y)
		{
			a=x;
			b=y;
		}
		parenthesis()
		{
			a=0;
			b=0;
		}
 		parenthesis operator()(int p,int q)
		 {
		 	cout<<"Now Operator Overloading will work"<<endl;
		 	a=p;
		 	b=q;
		 }		
		 void get()
		 {
		 	cout<<"a="<<a<<"b="<<b<<endl;
		 }
};
   	int main()
   	{
   		parenthesis p;
   		p.get();
   		parenthesis o(10,20);
   		o.get();
   		parenthesis l;
   		l(90,89); // overloading call //it is done when we overload and not directly give values to object 
		l.get();
		   return 0; 
	   }
