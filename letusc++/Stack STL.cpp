#include <iostream> 
#include <stack> 
using namespace std; 
  
int main() 
{ 
    
    stack<int>s;
    stack<int>s1;
    
    cout<<s.size()<<" "<<s1.size()<<endl;
   
    s.push(51);
    s.push(156);
    s.push(133);
    s.push(1121);
    s.push(112);
    s.push(11);
     if(s.empty())
       {
           cout<<"yes it is empty "<<endl;
       }
       else
       {
           cout<<"no,it is not empty"<<endl;
       }
    
     cout<<"size->";
     cout<<s.size()<<endl;
     cout<<s.top()<<endl;
     s.pop();  //deletes 11 from stack
     cout<<s.top()<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
     cout<<endl;
  
   
   
   s1.emplace(3);
    s1.emplace(233);
     s1.emplace(323);
      s1.emplace(332);
       s1.emplace(344);
        cout<<"size->";
    cout<<s1.size()<<endl;
     while(!s1.empty())
     {
         cout<<s1.top()<<" ";
         s1.pop();
     }
     
    // cout<<endl<<s1.top(); this do not works and give us segmentation fault beacuse stack is empty everything has been printed
    cout<<endl;
    cout<<"size->";
    cout<<s.size()<<" "<<s1.size()<<endl;
    
    //s.swap(s1); this will swap when both have not been printed and are not empty unlike this code
    return 0;
} 
