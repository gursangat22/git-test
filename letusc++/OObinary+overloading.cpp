#include<iostream>
using namespace std;
class sample
{
	float a,b;
	public:
		sample()
		{}
		sample(float m, float n) //parametrized constructor
		{
			a=m;
			b=n;
		}
		sample operator +(sample); //OCD
		void display()
		{
			cout<<"value of a="<<a<<endl;
			cout<<"value of b="<<b<<endl;
		}
};
sample sample::operator +(sample c)  //i can create -minus only by changing the operator
{                                   // in binary we have to input and output object 
	sample temp;
	temp.a=a+c.a;
	temp.b=b+c.b;
	return temp;
}

int main()
{
	sample  x(1.5, 7.25),y(5.25, 2.15),z;
	z=x+y; //adding two user defined fn will give us user defined function
	cout<<"First object";
	x.display();
	cout<<"Second object";
	y.display();
	cout<<"Sum of object";
	z.display();
	return 0;
}

