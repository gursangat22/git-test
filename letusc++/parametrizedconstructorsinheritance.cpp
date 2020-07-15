#include <iostream>
using namespace std;
 
   class base
   {
   	protected:
   		int a;
   		public:
   			base(int x)   //parametrized constructors of base class
   			{
   				a=x;
			   }
   };
   class derived:public base
   {
   	protected:
   		int b;
   		public:
   			derived(int x,int y):base(x)    //parametrized constructors in derived class contaaining indirectly base class parametrized constructor
   			{
   				b=y;
			   }
			   void show()
			   {
			   	cout<<"a="<<a<<endl<<"b="<<b<<endl;
			   }
			   
   };
   int main()
   {
   	derived d(10,100);
   	derived s=derived(20,200);
   	d.show();
   	s.show();
   	return 0;
   	
   }
   
   
