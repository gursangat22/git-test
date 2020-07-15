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
		shorthand friend operator+=(shorthand &s,shorthand &g) //friend so binary andar 2 ha argument 
		{
			cout<<"Now Operator overloading works"<<endl;
			s.a=s.a+g.a;
			s.b=s.b+g.b;
			return s;      //because we have to return an object because outside is an object			
		 } 
		 void get()
		 {
		 	cout<<"a="<<a<<"b="<<b<<endl;
		 }
};
int main()
{
	shorthand p(1,3),q(2,4);
	p.get();
	q.get();
	q+=p;   //q.operator+=(p);
	q.get();
	return 0;	
}
