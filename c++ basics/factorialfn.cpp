#include <iostream>
using namespace std;
int factori(int );
int main()
{
    int f,n;
    f=factori(n);
    cout<<f;
    return 0;
}
int factori(int a)
{
    int i,fac=1;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        fac=fac*i;
    }
    return fac;
}