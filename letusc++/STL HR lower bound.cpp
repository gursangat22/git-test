#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int>v;                                          
    int n;                        
    cin>>n;       
    for(int i=0;i<n;i++)  
    {                               
        int x;                          
        cin>>x;                                        
        v.push_back(x);                            
    }  
    int q;                        
    cin>>q;                                                   
    for(int i=0;i<q;i++)            
    {
        int r;                                                            
        cin>>r;                                                      
        auto ii=lower_bound(v.begin(),v.end(),r);                         
        if(r==*ii)                                                       
        {
            cout<<"Yes "<<(ii-v.begin()+1)<<endl;                        
        }
        else                                                        
        {
            cout<<"No "<<(ii-v.begin()+1)<<endl;                
       /* for(int ii=1;ii<=v.size();ii++)
        {
        }
            if(r==v[ii])
            {
                cout<<"Yes "<<ii+1<<endl; 
            }
        
           if(r!=v[ii])
            {
                cout<<"No "<<ii+1<<endl;
            }
        } */
        
    }
    return 0;
}

