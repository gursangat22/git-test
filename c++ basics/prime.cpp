/* prime*/
#include <iostream>
using namespace std;
int main()
{ 
    int i,n,c,a;
    cin>>n;
    for(i=100;i<=n;i++)
   { c=0;
    for(a=0;a<=i;a++) 
    	{
    	   if((i%a)==0)
    	   c++;
	}
       if(c=2)
      cout<<i<<endl;
	}
    return 0;
}
