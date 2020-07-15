#include <iostream>
#include <cstring>
using namespace std;
class test
{
	public:
		char st[100];
		void get()
		{ 
		cout<<"Enter string"<<endl;
			cin>>st;
		}
    	void read()
    	{
    		cout<<"string="<<st<<endl;
		}
		 
test operator +(test t) //return type object t3 hi ha so class name is used  
{                      // ethe 1 explicit argument necessary ha inn binary
	test t3;
	strcpy(t3.st,st);
	strcat(t3.st," ");
	strcat(t3.st,t.st);
	return t3; //return object ha 
} 
};
int main()
{
	test t1,t2,t3;
	t1.get();
	t2.get();
	t3=t1+t2;  // also t1.add(t2); retrun v ikk object ch jareha(t3) so class name in return type
	t3.read();
	return 0;
}
