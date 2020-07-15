//SPY NUMBER PROGRAMME
#include <iostream>
using namespace std;
class digit
{
    int d;
    public :
    int fn(int dig)  //fn definition
    {
        d=dig;
    }
    int sum();//fn declaration 
    int product(); //fn declaration
};
 int digit::sum()    /fn definition
 {   int n;
     int summ=0;
     while(d>0)
     {  n=d%10;
        summ=summ+n;
       d=d/10;
       return summ;
     }
 }
 int digit::product()   //fn definition
 {
     int m;
     int p=1;
     while(d>0)
     {   m=m%10;
         p=p*m;
         d=d/10;
         return p;
     }
 }
 int main()
 {
     digit x;
     x.fn(1124);
     x.sum();
     cout<<x.sum()<<endl;
     x.product();
     cout<<x.product()<<endl;
     if(p==summ)
     {
       cout<<"the given number is spy number"<<endl; 
     }
     else
     {
           cout<<"the given number is not a spy number"<<endl; 
     }
     return 0;
 }