/*
#include <bits/stdc++.h> 
using namespace std; 
  
int increment(int x) {  return (x+1); } 
  
int main() 
{ 
    int arr[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    // Apply increment to all elements of 
    // arr[] and store the modified elements 
    // back in arr[] 
    transform(arr, arr+n, arr, increment); 
  
    for (int i=0; i<n; i++) 
        cout << arr[i] << " "; 
  
    return 0; 
} 
*/
#include<iostream>
#include<list>
#include<algorithm>
#include<string>
using namespace std;

int multi(int i)
{
    return (i*2);
}
int main()
{
    list<int>l;
     int i;
    for(i=0;i<=20;i++)
    {
        l.push_back(i);
    }
    
    list<int>::iterator p;    //iterator will access every elements of list/vector.
    
    cout<<"WITHOUT TRANSFORMATION :"<<endl;
    for(p=l.begin();p!=l.end();p++)
    {
        cout<<*p<<" ";
    }
    
    transform(l.begin(),l.end(),l.begin(),multi);
    
    cout<<endl<<"WITH TRANSFORMATION :"<<endl;
    for(p=l.begin();p!=l.end();p++)
    {
        cout<<*p<<" ";
    }
 
    return 0;
    
}
