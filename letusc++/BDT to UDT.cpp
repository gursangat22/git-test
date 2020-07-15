#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
		public:
			complex() //default constructor hume bnana zaroori ha
			{
			} 
			complex(int k) //parametrized constructors
			{
				a=k;
				b=0; 
			}
			void setdata(int x,int y)
			{
				a=x;
				b=y;
			}
			void showdata()
			{
				cout<<"a="<<a<<endl<<"b="<<b<<endl;
			}
};
 int main()
 {
 	complex c1;
 	int x=5;
 	c1=x;  //c1.complex(x) matlab x integer input ikk complex naame de fun vich jarahi ha 
 	       // c1 object de through;
	 c1.showdata();   //without using setdata function we can input an integer in this object
 	return 0;
 }
