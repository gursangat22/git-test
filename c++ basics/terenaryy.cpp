#include <iostream>
using namespace std;
int main()
{
    int i=15;
    i>16?cout<<"greater"<<endl : cout<<"smaller"<<endl; 
    switch(i)
    {
    case 1:cout<<"not nice";
    break;
    case 15:cout<<"nice";
    break;
    }
    return 0;
}