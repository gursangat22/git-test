#include<iostream>
using namespace std;

class myy
{
	 int a,b;
	 public:
	 	void get(int i,int j)
	 	{
	 		a=i;
	 		b=j;
    	}
	  void sum(myy m)
	  {
	  	cout<<m.a+m.b;
	  }
};

   int main()
   {
   	myy n,w;
   	n.get(9,3);
    w.sum(n);
   }
