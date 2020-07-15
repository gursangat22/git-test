#include <iostream>
using namespace std;

class my
{
    int a,b;
public:
    friend int  sum(my);   //fn declaration //OCD 
    void setab(int i,int j);
};
void my::setab(int i,int j)
{
    a=i;
    b=j;
}
 int sum(my x)   //fn definition  input always object //OCD
{
    cout<<(x.a+x.b);  //friend accessing private member variables 
}
  int main()
  {
      my n;
      n.setab(2,3);
      sum(n);  //friend fn ki calling(fn call)
      return 0;
  }
