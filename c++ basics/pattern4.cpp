#include <iostream>
using namespace std;
int main()
{
    int i,j,n,m;
    cin>>n;
     cin>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
    }
     cout<<"\n";
    } 

    for(i=1;i<=m;i++)
    {
        for(j=m;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}