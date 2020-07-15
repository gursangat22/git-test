#include <iostream>
using namespace std;
class x
{
    int a,b;
public:
    int v(int h,int m)
    {
        a=h;
        b=m;
    }
    friend int fun(x l);    //fn declaration //ICD
}; 
          int fun(x l)    //normal friend fn definition OCD
        {
        float z=(l.a+l.b)/2;
        return z;
        }
    int main()
    {
        x y;
        y.v(7,3);
        cout<<"mean value ="<<fun(y)<<endl;
        return 0;  
    }
