#include <iostream>
using namespace std;

class my
{
	int a,b;
	public:
		friend int sum(my z);  //friend fn declaration 
		int setdata(int x,int y)
		{
			a=x;
			b=y;
		}
	};
		
	int sum(my z)  //friend function definition
	{
		cout<<(z.a+z.b);
	}	
	int main()
	{
		my n;
		n.setdata(12,12);
		sum(n);
		return 0;
	}
