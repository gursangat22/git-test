// C++ program to show unary operator overloading without friend function
#include<iostream>
using namespace std;
class sample
{
	int m,n;
	public:
		void getdata(int a, int b);
		void display();
		void operator -();  //OO FuNction minus unary
};
void sample::getdata(int a, int b)  //OCD
{
	m=a;
	n=b;
}
void sample::display()
{
	cout<<"value of m is:"<<m<<endl;
	cout<<"value of n is:"<<n<<endl;
}
void sample::operator -()
{
	m= -m;
	n= -n;
}
int main()
{
	sample obj;
	obj.getdata(40,-20);
	cout<<"Values before operator overloading"<<endl;
	obj.display();
	-obj;
	cout<<"Values after operator overloading"<<endl;
	obj.display();
	return 0;
}

