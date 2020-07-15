#include <iostream>
using namespace std;
class complex {
    int x,y;
public:
    int inputfn(int real,int img)
    {
        x=real;
        y=img;
    }
    complex sum(complex,complex );
    
    void show(complex);
};
complex complex::sum (complex a,complex b)    //fn definition; returning object
{
    complex z;
    z.x=a.x+b.x;
    z.y=a.y+b.y;
    return (z);
}
   void complex::show(complex c)   //fn definition
   {
       cout<<c.x<<"+ i"<<c.y<<endl;
   }
   int main()
   { 
       complex A,B,C;
       A.inputfn(3,4);
       B.inputfn(2,3);
       C.sum(A,B);
       //C=A+B;
       A.show(A);
       B.show(B);
       C.show(C);
     return 0;  
   }