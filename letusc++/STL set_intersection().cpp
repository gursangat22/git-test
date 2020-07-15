#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    
    int arr1[]={1,2,3,4,4,5,6,67,88};
    int arr2[]={3,45,6,78,8,8,6,6};
    
    vector<int>s;
    vector<int>::iterator i;
    
    i=set_intersection(arr1,arr1+9,arr2,arr2+8,s.begin());
    s.resize(i-s.begin());
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
}
