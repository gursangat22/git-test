#include<iostream>
using namespace std;

int main()
{
    int a[]={1,8,3,2,7};
    
    int i,j;
    int n=5;
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            int temp;
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    }
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
    
    
}
