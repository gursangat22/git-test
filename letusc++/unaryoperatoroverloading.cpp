// C++ program to show unary operator overloading without friend function
#include <iostream>
using namespace std;
class test
{
	int a;
	public:
		test()
		{
			a=9;
		}
		void operator++()
		{
			a++;                 //pre increment vich shi chalda eh code but not in post increment 
		}
		void operator++(int )   //post increment fn called in main fn then this fn will work having 1 arbitary argument to differentiate it from the pre increment operator
 		{
			++a;
		}
		void operator--()
		{
			a--;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
		}
};
int main()
{
	test t;
	++t;
	t.show();
    --t;
    t.show();
    t++;
    t.show();
    return 0;
}
