#include <iostream>
#include <vector>
using namespace std;

int fact(int x)
{
    if(x<=1){
    return 1;
    }
    return x*fact(x-1);
}

int main()
{
    int a;
    cin>>a;
    cout<<"factorial of "<<a<<" is "<<fact(a);
    return 0;

}
