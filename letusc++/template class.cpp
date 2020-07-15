#include <iostream>
using namespace std;

 template <class  t>
 class Test
 {
 	t a,b;  //its data depends upon us that we want to set in template
    public:
	void get()
	{
		cin>>a>>b;
	}
    t sum();   //OCD
 };
   
    template <class t>
     
     t Test<t>::sum()  //RULE- for outside class definition
     {
     	return a+b;
	 }
	 int main()
	 {
	 	Test<int> t1;   //8 bytes  allocated for both int and float
	 	Test<float> t2;
	 	 cout<<"enter the values"<<endl;
		 t1.get();
	 	t2.get();
	 	cout<<"integer sum="<<t1.sum()<<endl;
	 	cout<<"float sum="<<t2.sum();
	 	return 0;
	 }
