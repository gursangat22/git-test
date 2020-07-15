#include<iostream>
using namespace std;

class m
{
	int a[3];
	public:
		m()
		{
			
		}
		m(int i,int j,int k)
		{
			a[0]=i;
			a[1]=j;
			a[2]=k;
		}
	
		int operator [](int x)   //return object and input object
		{
			return a[x];
		}
};


int main()
{
	m t(1,332,3);
	cout<<t[2];   //BINARY OPERATOR
	return 0;
}
