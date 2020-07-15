#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int>s;
    int n,y,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
         cin>>x;
        
        if(x==1)
        {
            cin>>y;
            s.insert(y);
        }
        else if(x==2)
        {
          cin>>y;
          s.erase(y);
        }
        else if(x==3)
        {
          cin>>y;
          if(s.find(y)!=s.end())
          {
             cout<<"Yes"<<endl;
          }
          else
          {
              cout<<"No";
          }
        }
    }
    return 0;
}




