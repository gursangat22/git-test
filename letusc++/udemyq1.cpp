#include <iostream>
using namespace std;
int main()
{
    int total,n,n1;
    float tax,cost;
    cout<<"tell the number of large rooms u wanted to clean?\n";
    cin>>n;
    cout<<"tell the number of small rooms u wanted to clean\n" ;     
    cin>>n1;
    total=(35*n)+(25*n1);
    cout<<"total="<<total<<endl;
    tax=(0.06*total);
    cout<<"tax="<<tax;
    cost=total+tax;
    cout<<"cost="<<cost;
    return 0;
}