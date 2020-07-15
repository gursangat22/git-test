#include <iostream>
using namespace std;
 
 class base
 {
     protected:
     int b;
 	public:
 		base()
 		{
 			cout<<"i am base"<<endl;
		 }
		 base(int y)
		 {
		     b=y;
		 }
 };
 class derived:public base
 {  
     int a;
     public:
     derived()
     {
         cout<<"jj"<<endl;
     }
 	derived(int x,int y):base(y)  //parametrized constructor in derived class 
 	{
 	    a=x;
 		
	 }
	 void show()
	 {
	     cout<<"i am derived->"<<a<<" b=="<<b<<endl;
	 }
 };
 int main()
 {
     derived d1;
 	derived d(1,4);
 	d.show();
 	return 0;
 }
 	
