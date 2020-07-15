#include <iostream>
using namespace std;
char arrayfn(char arr[],int );
int main()
{
    int n,m;
    arrayfn (arr,m);
    return 0;
}
char arrayfn(char arr[],int i)
{
    int k,j,n,i;
    cin>>n;
    cin>>i;
    cin>>j;
    for(i=0;i<n;i++)
    {cin>>arr[i];}
    for(k=0;k<n;k++)
    {
        if(arr[j]>=65&&arr[j]<=90)
            cout<<arr[j]; 
    }
}