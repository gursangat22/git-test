#include <iostream>
using namespace std;
  class test2;  //foward declaration
  class test1
  {
      int a;
public:
      void geta(int i)
  {  
       a=i;
  }
  friend void big(test1,test2);  //non-member fn
  };
  class test2
  {
      int b;
      public:
      void getb(int j)
      {
         b=j;
      }
      friend void big(test1,test2);  //non-member fn
  };
  void big(test1 t1,test2 t2)
  {
      if(t1.a>t2.b)
      {
          cout<<"object of class 1 is greater then class 2";
      }
      else if(t2.b>t1.a)
      {
          cout<<"object of class 2 is greater  then object  of class 1";
      }    
  }
  int main()
  {
      test1 x;
      test2 y;
      x.geta(100);
      y.getb(4);
      big(x,y);
      return 0;
  }
  
