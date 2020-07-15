#include <iostream>
using namespace std;
int main()
{
    int a[10],i,n,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    { cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\n";
        sum=sum+a[i];
    }
    cout<<"sum ="<<sum;
    return 0;
} 