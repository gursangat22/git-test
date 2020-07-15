#include <iostream>
using namespace std;
class shorthand
{
	int a,b;
	public:
		shorthand(int x,int y)
		{
			a=x;
			b=y;
		}
		shorthand()
		{
			
		}
		shorthand operator+=(shorthand s) //binary andar ek ha argument 
		{
			cout<<"Now Operator overloading works"<<endl;
			a=a+s.a;
			b=b+s.b;
			
		 } 
		 void get()
		 {
		 	cout<<"a="<<a<<"b="<<b<<endl;
		 }
};
int main()
{
	shorthand p(1,2),q(2,3);
	p.get();
	q+=p;   //q.operator+=(p);
	q.get();
	return 0;	
}
