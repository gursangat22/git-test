#include <iostream>
using namespace std;

class test
{
    int a,b;
public:
    void show()
    {
        a=3230;
        b=20;
        cout<<"object address=" <<this<<endl;
        //to access a and b also this is used
   cout<< "a="<<this->a<<endl;
   cout<<"b="<<this->b<<endl;
   
  }
};
int main()
{
    test t;
	test *p;  //object pointer 
	p=&t;    //  object pointer stores the address of object 
    p->show();
    return 0; 
}
