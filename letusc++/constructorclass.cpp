#include<iostream>
using namespace std;
class code
{
	int a,b;
	public:
		code()   
	   {
	    a=0;
	    b=0;
       }
		code (code &i); 		 //copy constructor	
		void display()
		 { 
		 cout<<a<<b<<endl;
		 }
		 ~code();  //destructor
};
code:: code(code &i)		//constructor definition
{
	a=i.a;
	b=i.b;
}
code::~code()   //ocd of destructor
{
	cout<<"bye bye";
}
int main()
{
	
code  c1, c2(c1);
cout<< "First object\n";
c1. display();
cout<< "Second object\n";
c2. display();
cout<< "Third object\n";
code c3=c2; 		//another way to call the copy constructor
c3.display();
code c4=c1;
c4.display();

return  0;
}



