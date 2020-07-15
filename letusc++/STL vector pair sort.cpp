#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool sortvector(pair<string,int>a,pair<string,int>b)
{
    return  b.second>a.second;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<string,int>>v;
    
    int test;
    for(int i=0;i<n;i++)
    {
        cin>>test;
        
        for(int j=0;j<test;j++)
        {
         int m;
         string s;
         cin>>s>>m;
         v.push_back(make_pair(s,m));
         
        }
    }
    
       sort(v.begin(),v.end(),sortvector);
       
       
    // reverse(v.begin(),v.end());
    for (int i=0; i<v.size(); i++) 
    { 
        // "first" and "second" are used to access 
        // 1st and 2nd element of pair respectively 
        cout << v[i].first << " " 
             << v[i].second << endl; 
    } 
    return 0;
    
    
    
    
}
