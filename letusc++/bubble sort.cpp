#include<iostream>
using namespace std;

int main()
{
	
	int round,i;
	int arr[]={1,5,2,8,3,7,9};
	int n=7;
	for(round=1;round<=n-1;round++)
	{
		for(i=0;i<=n-1-round;i++)
		{
			if(arr[i]>arr[i+1])
			{
				 int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
			}
		}
	}
	 for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
    
	
	
	
	
	
}
