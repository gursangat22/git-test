#include <iostream>
using namespace std;
class pointer
{
    int a;
public:
    pointer(int b)
    {
        a=b;
    }
    void fn()
    {
        cout<<a<<"\n";
    }
};
int main()
{
    pointer x(34);
    pointer c[3]={44,66,88};
    pointer *s;
    pointer *y;
    y=&x;
    y->fn();
    s=c;
    int i;
    for(i=0;i<3;i++)
    {
         s->fn();
        s++; //points to next object
    }
    return 0;
}