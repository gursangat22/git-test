#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{ 
    map<int,string>m;   //mp<key,string>m; my key is a integer and values are string
    
    m[243]="gursangat";
    m[24]="singh";
    m[432]="sangat";
    m[235]="gursangat singh";
    m[333]="gursangat pahwa";
    m.insert(pair<int,string>(120,"sang"));

  cout<<m[235]<<endl;
   cout<<"__________________________________________________________________"<<endl;
   cout<<"SORTED TABLE BELOW"<<endl;
   for(auto i=m.begin();i!=m.end();i++)
   {
       cout<<i->first<<" "<<i->second<<endl;
   }
   cout<<"__________________________________________________________________"<<endl;
   cout<<"SORTED TABLE BELOW"<<endl;
   for(auto ii:m)
   {
       cout<<ii.first<<" "<<ii.second<<endl;   //here in this case it is exception (.) is used instead of (->) 
   }
    if(m.count(24))
   {
       cout<<"key 24 is present"<<endl;
   }
   else
{
    cout<<"key 24 is not present"<<endl;
}   
   m.erase(m.begin(),m.find(243));
   cout<<endl<<"AFTER ERASING till particular key"<<endl;
   for(auto i=m.begin();i!=m.end();i++)
   {
       cout<<i->first<<" "<<i->second<<endl;
   }
   
  cout<<"no of elements that are removed ->"<< m.erase(432)<<endl;
    cout<<endl<<"AFTER ERASING"<<endl;
   for(auto i=m.begin();i!=m.end();i++)
   {
       cout<<i->first<<" "<<i->second<<endl;
   }
   
  
 return 0;  
}
