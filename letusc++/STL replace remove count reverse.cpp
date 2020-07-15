#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;



 bool check(int i)
    {
        if(i%2==0)
        {
         return true;
        }
        else
        {return false;}
    }


int main()
{
    
    vector<int>v;
    
    for(int i=1;i<=20;i++)
    {
        v.push_back(i);
    }
    
    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
     
    int c=count(v.begin(),v.end(),5);
    int ii=count_if(v.begin(),v.end(),check);
    cout<<"\n no of 5's are "<<c<<endl;
    cout<<"number of evens are ->"<<ii<<endl;
    
    vector<char>v1,v2(30);
    char s[]="hello nice to meet u";
    
    for(int k=0;s[k];k++)
    {
        v1.push_back(s[k]);
    }
   cout<<"v1[i]->";
   
    for(auto ii=v1.begin();ii!=v1.end();ii++)
    {
        cout<<*ii;
    }
    
    cout<<endl<<"v2->";
    remove_copy(v1.begin(),v1.end(),v2.begin(),' ');
    
    for(auto ii=v2.begin();ii!=v2.end();ii++)
    {
        cout<<*ii;
    }
    
    
    replace_copy(v1.begin(),v1.end(),v2.begin(),' ',':');
    
    cout<<endl<<"after replacing-->v[2]>";
     for(auto ii=v2.begin();ii!=v2.end();ii++)
    {
        cout<<*ii;
    }
    
    
    replace_copy(v1.begin(),v1.end(),v2.begin(),' ','*');
    cout<<endl<<"after replacing-->v[2]>";
     for(auto ii=v2.begin();ii!=v2.end();ii++)
    {
        cout<<*ii;
    }
    
    cout<<endl<<"after reversing -->";
    reverse(v2.begin(),v2.end());
    for(auto ii=v2.begin();ii!=v2.end();ii++)
    {
        cout<<*ii;
    }
    
    
    
    
    
    
    
    
}
