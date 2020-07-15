#include <iostream>
using namespace std;
int main()
{
    int i=10,j;
    if(i>2)
    {
        cout<<"nice"<<endl;
    }
    else
        {
        cout<<"not nice"<<endl;  
           }
    for(j=0;j<i;j++)
        {
         if ((j%2)==0)
       {     cout<<j<<"  \n";
        }
        }
         for(j=0;j<i;j++)
       {     cout<<j*j<<" \n ";
        }
        return 0;
}