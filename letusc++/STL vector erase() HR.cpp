#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    vector<int>v;
    int input;
    cin>>input;
    for(int i=0;i<input;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        
    }
    int pos;
    cin>>pos;
    pos=pos-1;
    v.erase(v.begin()+pos);

    //enter the range
    int lower,upper;
    cin>>lower>>upper;
    lower=lower-1;
    upper=upper-1;  
    v.erase((v.begin()+lower),(v.begin()+upper));
    
    cout<<v.size()<<endl;
    for(auto ii=v.begin();ii!=v.end();ii++)
    {
        cout<<*ii<<" ";
    }
    
    
    
    return 0;
}

