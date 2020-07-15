#include <iostream>
using namespace std;

class TwoValues
 {
  int a;
  int b;
public:
  TwoValues(int i, int j)    //constructor 
  { 
  a = i; b = j;
  }
  friend class Min;    //Min class is friend class of TwoValues and can access private members of this class 
};

class Min 
{
  public:
  int min(TwoValues x);  //OCD function
};

int Min::min(TwoValues x)
{
  cout<<(x.a<x.b)?x.a:x.b;    //x object can access .a and .b values of previous class
}

int main()
{
  TwoValues ob(99,20);
  Min m;
  m.min(ob);

  return 0;
}




