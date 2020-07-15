#include<iostream>
using namespace std;

const int MAX=100;
template <class T>
class stack
{
	public:
		T st[MAX]; //array 
		int top;
	stack()
	{
		top=-1; 
	}
	void push(T var)
	{
		st[++top]=var;  //var=st[0] te phela variable store hoega
	}                  // phele == hoga fer initialize hogi value var ko
	T pop()
	{
		return st[top--];
	}
};

int main()
{
	stack <int> s;
	s.push(123);  //0
	s.push(1376);  //1
	s.push(7832);   //2
	s.push(873);    //3
	cout<<"1st value to be taken out"<<s.pop()<<endl;
	cout<<"2nd value to be taken out"<<s.pop()<<endl;
	cout<<"3rd value to be taken out"<<s.pop()<<endl;
	cout<<"4th value to be taken out"<<s.pop()<<endl;
	return 0;
}
