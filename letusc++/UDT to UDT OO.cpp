#include<iostream>
using namespace std;
 //forward declaration
class product
  {
  	private:
  		int m,n;
  		public:
  			void setdata(int x,int y)
  			{
  				m=x;
  				n=y;
			  }
			  int getm()
			  {
			  	return m;
			  }
			  int getn()
			  {
			  	return n;
			  }
  };
class item
{
	private:
		int a,b;
		public:
			item()
			{
				
			}
			void showdata()
			{
			 cout<<"a="<<a<<endl<<"b="<<b<<endl;
			}
			item(product p) //parametrized constructor input as an object
		        // product type argument receiver
			{
				a=p.getm();  //assigning a and b values of m and n 
				b=p.getn();   //m and n are private and cant be accessed in different class
			}            //so thats why different function is used to return m and n value in product class from functions that are public in product class     
};
  
  int main()
  {
  	item i;
  	product p;
  	p.setdata(2,3);
  	i=p; //class to class type
  	i.showdata(); 
  	return 0;
  }
  
