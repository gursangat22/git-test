#include <iostream>
 using namespace std;
 class a
 {
   protected:
   int a;
   public:
   void getdata(int x)
   {
   	a=x;}
   	void seta();	
 };
 class b:public a
 {
 	private:
 		int b;
 		public:
 			void setdata(int c)
 			{
 				b=c;
		    }
 				void set();
 };
 void a::seta()
 {
 	cout<<a<<endl;
 }
  void b::set()
  {
  	cout<<b<<endl;
  }
  int main()
  {
  	b t;
  	t.getdata(3);  
	  t.setdata(4);
	  t.set();
	  t.seta();
	  return 0;	
  }
  
  
