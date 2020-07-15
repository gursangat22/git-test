#include <iostream>
using namespace std;
class test2;  //forward declaration
class test1
{
	int a;
	public:
		void geta()
		{
		cout<<"enter a";
		cin>>a;
	}
    friend void operator >(test1,test2);
};
class test2
{
	int b;
	public:
		void getb()
		{
			cout<<"enter b";
			cin>>b;
		}
    friend void operator >(test1,test2);
};
 void operator>(test1 t1,test2 t2)     //binary always because here two classes are being compared so friend fn is used
                                       // ethe 2 explicit argument dene compulsary ha 
{
	t1.a>t2.b?cout<<"class 1  is greater then class 2":cout<<"class 2 is greater then class 1";
}
     int main()
     {
     	test1 g;
     	test2 h;
     	g.geta();
     	h.getb();
     	g>h;
     	return 0;
	 }

