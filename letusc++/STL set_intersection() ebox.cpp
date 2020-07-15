#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{    
    int n;
        vector<string>v1,v2,v3(10);
        string s,e;
        cout<<"Enter the number of active users:"<<endl;
        cin>>n;
        cout<<"Enter the active users name:"<<endl;
        
        for(int i=0;i<n;i++)
        {
            cin>>s;
            v1.push_back(s);
            
        }
        int n2;
        cout<<"Enter the number of users whose account is going to expire:"<<endl;
        cin>>n2;;
        cout<<"Enter the users name:"<<endl;
        
        for(int k=0;k<n2;k++)
        {
            cin>>e;
            v2.push_back(e);
            
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        
        
        vector<string>::iterator j,l;
        
        l=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
        v3.resize(l-v3.begin());
    //   cout<<"size of new vector :"<<v3.size()<<endl;
        if(v3.empty())
        {
            cout<<"No accounts of active users to be expired."<<endl;
        }
        else
        {
            cout<<"Active users whose account is going to expire:"<<endl;
          for(auto h:v3)
           {
               
            cout<<h<<endl;
            }
        
        }
        
        
        
        
        return 0;
}

