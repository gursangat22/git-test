#include<iostream>
using namespace std;
class frndbin
{
	int a,b;
	public:
		frndbin()
		{
			
		}
		frndbin(int a,int b)
		{
		    this->a=a;
		    this->b=b;
		}
      friend frndbin operator+(frndbin ,frndbin ); //OCD i.e friend so normally defined
		 void display()
		 {
		 	cout<<"a="<<a<<endl<<"b="<<b<<endl;
		}		
};

   frndbin operator+(frndbin b1,frndbin b2)
   {
   	   frndbin bump;
   	   bump.a=b1.a+b2.a;
       bump.b=b1.b+b2.b;
	   return bump; 	 
}
  int main()
  {
  	frndbin b3(12,23),b4(12,34),b5;
  	b5=b3+b4; // b3.add(b4)==b3.a+b4.a
  	b4.display();
  	b3.display();
  	cout<<"sum of overloading is"<<endl;
  	b5.display();
  	return 0;
  }
