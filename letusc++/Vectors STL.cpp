#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
     if (v.empty() == false) 
        cout << "\nVector is not empty"; 
    else
        cout << "Vector is empty initially"<<endl;
    for(int i=1;i<=10;i++)
    {
        v.emplace_back(i*100);  //v.push_back(); same work
    }
    cout<<"size="<<v.size()<<endl;
    
    for(auto it=v.begin();it!=v.end();it++)  //auto it directly declares it as a iterator
{
    cout<<*it<<"_";
}
cout<<endl;

v.pop_back();  //last element removed  //erase();

vector<int>::iterator ii;
for(ii=v.begin();ii!=v.end();++ii)
{
    cout<<*ii<<" ";
}
   cout<<endl<<"size="<<v.size()<<endl;
  cout<<endl<<"CAPACITY->"<<v.capacity();
   cout << "\nReference operator [v] : v[2] = " << v[2]<<endl;  //3rd element
   for(int j=0;j<v.size();j++)
   {
       cout<<v[j]<<" ";
   }
   cout<<endl<<"CAPACITY->"<<v.capacity()<<endl;
   
   cout<<"max_size->"<<v.max_size();
   
   v.insert(v.begin(),1090);  //container size increases;
   cout<<endl<<"size="<<v.size()<<endl;
   
   cout<<endl<<"v[0]=>"<<v[0]<<endl;
   
   for(int j=0;j<v.size();j++)
   {
       cout<<v[j]<<" ";  
   }
   
   cout<<endl;
   v.push_back(12);
  
   v.insert(v.begin()+7,1,650); //8th element to piche 650 pata ikk vari
   for(auto k:v)
   {
       cout<<k<<" ";
   }
   cout<<endl<<"size="<<v.size()<<endl;
   
   vector<int>v2;
   for(int i=1;i<=10;i++)
   {
       v2.push_back(i);
   }
   
   for(auto o:v2)
   {
       cout<<o<<" ";
       
   }
   
   v.swap(v2);
   cout<<endl;
   for(auto o:v2)
   {
       cout<<o<<" ";
   }
   
   //_____________________________________________________________________________________
   // CHARACTER VECTOR
   
   vector<char>v3;
   cout<<endl;
   string g="gursangat singh";
   
   for(int i=0;g[i];i++)
   {
       v3.push_back(g[i]);
   }
   
   vector<char>::iterator io;
   for(io=v3.begin();io!=v3.end();io++)
    {
         cout<<*io; 
   }
   cout<<endl;
   for(io=v3.begin();io!=v3.end();io++)
    {    *io=toupper(*io);
         cout<<*io;
   }
   
   cout<<endl;
   for(auto iop=v3.begin();iop!=v3.end();iop++)
    {
         cout<<*iop;
   }
   cout<<endl;
   for(auto iii: v3)
    {
         cout<<iii;
   }
   
 /*  vector<vector<int> >v4;
   for(auto w:v4)
   {
       for(auto q:v4)
       {
           cout<<"";
       }
   }
   */
    return 0;
}
