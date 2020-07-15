#include <iostream>
using namespace std;

int main()
{
	int a,b;
	try
	{
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	if(b==0)
	{
		throw 0;
	}
	cout<<"Division of two numbers is a/b is="<<a/b<<endl;	 
	}
	catch(int x)      //only 1 throw so no need of if here 
     {
                    	// if(x==0)
     	cout<<"DIVISION NOT POSSIBLE"<<endl;
     	
	 }
    return 0;
}
