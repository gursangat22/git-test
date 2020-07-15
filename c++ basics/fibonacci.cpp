//FIBONACCI
#include <iostream>
using namespace std;
int main()
{
    int i,n,a=0,b=1,c;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(i=3;i<=n;i++)  //third term to 6th term tk chla rhe ha baki pheli 2 ta p
    {
        c=a+b;
        cout<<c<<" ";
      a=b;
      b=c;      
    }
    return 0;
}