#include<iostream>
#include<string>
#include<list>
using namespace std;

int main()
{
    
    list<int>l;
    
    for(int i=1;i<=10;i++)
    {
        l.push_back(i*i);
    }
    
    for(auto ii:l)
    {
        cout<<ii<<" ";
    }
    cout<<endl;
    l.push_front(2);
     for(auto ii:l)
    {
        cout<<ii<<" ";
    }
    cout<<endl;
    l.pop_back();
    for(auto ii:l)
    {
        cout<<ii<<" ";
    }
    cout<<endl;
     l.sort();
     for(auto ii:l)
    {
        cout<<ii<<" ";
    }
    cout<<endl;
    l.reverse();
    for(auto ii:l)
    {
        cout<<ii<<" ";
    }
    cout<<endl;
    
    list<int>l2{1,2,3,4,5,6,7,8,9};
    
    l2.insert(l2.begin(),l.begin(),l.end());
    for(auto iii:l2)
    {
       
        cout<<iii<<" ";
    }
    cout<<endl<<"__________________________________________________________________________________________"<<endl;
    
    l2.insert(l2.begin(),1,23);
    for(auto iii:l2)
    {
       
        cout<<iii<<" ";
    }
    
    cout<<endl<<"__________________________________________________________________________________________"<<endl;
    
    l2.unique(); //remove consecutivee duplicate elements;
    
     for(auto iii:l2)
    {
       
        cout<<iii<<" ";
    }
    
    if(l>=l2)
    {
        cout<<"l is greater then l2"<<endl;
    }
    else
    {cout<<"l2 is greater then l"<<endl;
    }
  /*  l2.merge(l);  //it will sort not itself;
    l2.sort();
     cout<<"SORTED AND MERGED"<<endl;
    for(auto iii:l2)
    {
       
        cout<<iii<<" ";
    } */
    
    return 0;
    
    /* 
	int main()
   {
    
    list<int>l;
    
    for(int i=1;i<=10;i++)
    {
        l.push_back(i*i);
    }
    for(auto ii:l)
    {
        cout<<ii<<" ";
    }
    cout<<endl;
    list<int>l2{1,34,46,56,56,67,7,67,56,56,54,54,45,44,34,3434,3434,34};
    for(auto iie:l2)
    {
        cout<<iie<<" ";
    }
    if(l>=l2)
    {
        cout<<"l is greater then l2";
    }
    else
    {
        cout<<"l2 is greater then l";
    }
    */
    
    
    
}
