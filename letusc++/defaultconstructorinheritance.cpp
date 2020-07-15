#include <iostream>
using namespace std;
 
 class base
 {
 	public:
 		base()
 		{
 			cout<<"i am base"<<endl;
		 }
 };
 class derived:public base
 {   public:
 	derived()
 	{
 		cout<<"i am derived";
	 }
 };
 int main()
 {
 	derived d;    //base class contructor will be called
 	return 0;
 }
                                                       
// ALS0_________________________________________________________________________________________________________________
 	/* #include <iostream>
using namespace std;
 
 class base
 {
 	public:
 		base()
 		{
 			cout<<"i am base"<<endl;
		 }
 };
 class derived:public base
 
 {   protected:
     int a;
     public:
 	derived(int x)
 	{
 	    a=x;
 		cout<<"i am derived->"<<a<<endl;
	 }
 };
 int main()
 {
 	derived d(1);
 	return 0;
 }
 	*/
