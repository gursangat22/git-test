#include<iostream>
using namespace std;
class bdt
{
	int a,b;
	public:
		void setdata(int x,int y)
		{
			a=x;
			b=y;
		}
		void showdata()
		{
			cout<<"a="<<a<<"b="<<b<<endl;
		}
		operator int() //int because we want int as output
		{              //casting operator
			return (a+b);
		}
};
int main()
{
	bdt c;
	c.setdata(2,3);
    c.showdata();
    int x;
    x=c;   //x=c.operator int();
    cout<<x;
    return 0;
}
