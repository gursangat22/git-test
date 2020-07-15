#include <iostream>
using namespace std;
void pattern();
int main()
{
  
  pattern();
  pattern();
  pattern();
  pattern();
  return 0;
     }
     void pattern()
     {
            int i,n,j;
            cin>>n;
     for(i=0;i<n;i++)
     {
         for(j=0;j<=i;j++)
         {
             cout<<"*";
         }
         cout<<"\n";
     }
}