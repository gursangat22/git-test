#include<iostream>
using namespace std;

class purebase      // base class i.e is abstract 
{
	public:
	virtual void fun()=0;   //pure virtual function
};
	
class purederived:public purebase
{
	    public:
		int x;
		void fun()      //definition of pure virtual function
		{
			cin>>x;
		cout<<"x ki value "<<x<<endl;
		}
	};	
	
	int main()
	{
		purebase *pb;   //abstract class pointer object can be made
		purederived pd;
		pb=&pd;
		pb->fun();
		//OR____________
		
		purebase *pp=new purederived;
		pp->fun();
		delete pp;
		
		
		return 0;
		
	}
