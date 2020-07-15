#include <iostream> 
#include <set> 
using namespace std; 
  
int main() 
{ 
    // sum variable declaration 
    int sum = 0; 
  
    // set declaration 
    set<int> myset; 
    myset.emplace(7); //myset.insert(); also
    myset.emplace(9); 
    myset.emplace(4); 
    myset.emplace(6); 
    myset.emplace(2); 
    myset.emplace(5); 
    myset.emplace(3); 
  
    // iterator declaration 
    set<int>::iterator it; 
  
  for(it=myset.begin();it!=myset.end();it++)
  {
      cout<<*it<<" ";
      sum=sum+*it;
      
  }
  /*  // finding sum of elements 
    while (!myset.empty()) 
	{ 
        it = myset.begin(); 
        sum = sum + *it; 
        it++; 
    } 
  
    // printing the sum */ 
    cout << sum;
    
    cout<<endl;
    
    //______________________________________________________________________________________________
    set<pair<int,int>>s2;
    s2.emplace(10,12);
    s2.emplace(11,13);
    s2.emplace(12,14);  //s2.insert() will not work  //s2.insert(make_pair(12,14) will work
    
    for(auto i=s2.begin();i!=s2.end();i++)
    {
        cout<<(*i).first<<" "<<i->second<<endl;
    }
    
    set<int>s3;
    for(int i=1;i<=10;i++)
    {
        s3.insert(i);
    }
       cout<<"s3->"<<endl;
    for(auto q=s3.begin();q!=s3.end();q++)
    {
        cout<<*q<<" ";
    }
    
     cout<<endl;
     cout<<"after swapped"<<endl<<"myset->";
 // myset.swap(s3);// this also works 
 swap(myset,s3);
  for(auto ii=myset.begin();ii!=myset.end();ii++)
  {
      cout<<*ii<<" ";
  }
  s3.emplace(1); //1 at the begenning
  cout<<"after swapped"<<endl<<"s3->";
  for(auto q=s3.begin();q!=s3.end();q++)
    {
        cout<<*q<<" ";
    }
  
    return 0; 
} 
