#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    map<string,int>m;
    int n,x,marks;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==1)
        {
          
          cin>>s;
          cin>>marks;
          m[s]+=marks;
        }
        else if(x==2)
        {
         cin>>s;
         m.erase(s);
        }
        else if(x==3)
        {
            cin>>s;
            if(m.find(s)!=m.end())
            {
              cout<<m[s]<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
    }
    return 0;
}




