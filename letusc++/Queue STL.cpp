#include<iostream>
#include<queue> 
using namespace std;

   int main()
   {
       queue<int>q;
       
       for(int i=1;i<=10;i++)
       {
           //q.push(i);   // this works
            q.emplace(i); //this works
          // q.insert();  //  EXCEPTION this does not works
       }
       
       if(q.empty())
       {
           cout<<"yes it is empty "<<endl;
       }
       else
       {
           cout<<"no,it is not empty"<<endl;
       }
        // cout<<q.top();
        cout<<"q.front ->"<<q.front()<<endl;
        cout<<"q.back ->"<<q.back()<<endl;
       
        q.pop();  // 1 is deleted from the queue
        
        cout<<"q.front ->"<<q.front()<<endl;
        
       while(!q.empty())
       {
           cout<<q.front()<<" ";
           q.pop();
       }
       
       if(q.empty())
       {
           cout<<endl<<"yes it is empty "<<endl;
       }
       else
       {
           cout<<"no it is not empty"<<endl;
       }
       return 0;
       
       
   }
   
