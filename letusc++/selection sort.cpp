#include<iostream>
using namespace std;

int main()
{
	int i;
	int n=7;   //passes ->6
	int min;
	int arr[]={21,8,7,0,6,5,4};
	
	for(int i=0;i<n-1;i++)
    {
       min=i;
       
	   for(int j=i+1;j<n;j++)
	   {
	    if(arr[j]<arr[min])
		{  
		   min=j;
		}
	}     	
	   if(i!=min)
	   {
	   	
	   	int temp;
	   	temp=arr[i];
	   	arr[i]=arr[min];
	   	arr[min]=temp;
	   	
	   	
	   }
	         	
	   }	
    for(int k=0;k<n;k++)
	{
	 	cout<<arr[k]<<" ";
	}	
     
	}	
	
	
	 
	 
	
