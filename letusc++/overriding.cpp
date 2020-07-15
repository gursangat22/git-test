#include <iostream>
using namespace std;

class Base {
public: 

void disp()
{
cout<<"Base"<<endl; }
};

class Derived:public Base
{
   public: 
   void disp()
   {
   cout<<"Derived"<<endl;
   }
};
int main() {
Derived d; 
d.disp();   // it will automatically call derived function
d.Base::disp(); //to call base function
return 0;
}
