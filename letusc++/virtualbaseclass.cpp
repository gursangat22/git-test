//HYBRID INHERITANCE
#include <iostream>
using namespace std;

class A
{
public:
  void show(){
  cout<<"hello gursangat singh"<<endl;
  }
};
class B : public virtual A
{                                   // any one of the copied show function will be inherited and dispalyaed 
};                                     
class C :public virtual A          
{
};
class D:public B,public C
{
};
int main()
{
    D d;
    d.show();         //here as both classes are virtual so no ambiguity
    return 0;
}
