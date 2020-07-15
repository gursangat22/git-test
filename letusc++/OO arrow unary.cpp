#include <iostream>
using namespace std;
class arrow
{
	int a;
	public:
		arrow()
	{
		
	}
		arrow(int i)
		{
			a=i;
		}
	
	arrow* operator->()    //we are returning a class pointer  
	{   cout<<"Now Operator overloading"<<endl;
		return this;   //jo object call kraha ha ussi ka this pointer return krege(active calling object ka address return horha)
	}			
	void get()
	{
		cout<<"a="<<a<<endl;
	}
};
int main()
{
	arrow aw(22);
    aw.get();
    aw->get();  
	//basically iska matlab objpointer->get() ha  //aw object se call krahu hu so this uska chalega ans this returns the current address of object that is stored in obhect pointer jo ke return horeha 
    
    return 0;
}
