#include<iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
    set<string>s;
    string ss;
    cout<<"Enter the strings"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>ss;
        s.insert(ss);
    }
    cout<<endl<<"ascending order set"<<endl;
    for(auto ii=s.begin();ii!=s.end();ii++)
    {
        cout<<*ii<<endl;
    }
    
    cout<<endl<<"enter range so input lower bound and upper bound"<<endl;
    string lower,upper;
    
    cin>>lower>>upper;
    cout<<"elements lying in this range are ->"<<endl;
    
    for(auto ii=s.lower_bound(lower);ii!=s.upper_bound(upper);ii++)
    {
        cout<<*ii<<" ";
    }
    
    
    
    
    
    
    
    return 0;
}
