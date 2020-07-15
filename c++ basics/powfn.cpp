#include <iostream>
using namespace std;
int powfn(int ,int);
int main()
{
    int n,m,p;
  p=powfn(n,m);
    cout<<p;
   return 0;
}
int powfn(int a,int b)
{
    int c=1,i;
    //a=n,b=m
    cin>>a;
    cin>>b;
    for(i=0;i<b;i++)
    {
        c=a*c;
    }
    return c;
}

