#include <iostream>
using namespace std;

template <typename T>
T maxx(T a,T b) 
{
    return (a>b?a:b);
}
int main () 
{
	int x,y;
	x=90;
	y=89;
	cout<<maxx(x,y)<<endl;
    
    cout<<maxx<int>(34,56)<<endl;
    cout<< maxx<double>(5.0,7.7);
   
    return 0;
}
