//FACTORIAL
#include <iostream>
using namespace std;
int main()
{
    int i,n,f=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<f;
    return 0;
}