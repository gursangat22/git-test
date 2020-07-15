#include<iostream>
using namespace std;

class code
{
	int a,b;
	public:
		code(int i, int j); 	//parameterized constructor
		void display();
};
code:: code(int i, int j)		//constructor definition
{
   a=i;
	b=j;
}
void code::display()
{
	cout<<“a=“<<a<<“b=“<<b<<“\n”;
}

int  main()
{
code d(5,10); 		//implicit call to constructor
d.display();
code e::code(3,9);	  // code e=code(3,9);	//explicit call to constructor
e.display();
return  0;
}
