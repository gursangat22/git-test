#include<iostream>
#include<string>
using namespace std;

class m
{ 
	string a;
	public:
		m()
		{
			
		}
		void geta()
		{
			cin>>a;
		}
		m operator+(m t)   //return object and input object
		{
			m x;
			x.a=a+t.a;
			return x;
		}
		void show()
		{
		  cout<<"final a after adding two a's of different objects"<<a;
		}
};


int main()
{
	m t1,t2,t3;
	t1.geta();
	t2.geta();
	t3=t1+t2;
	t3.show();
	return 0;
}
