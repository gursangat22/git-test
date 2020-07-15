#include <iostream>
using namespace std;
int main()
{
    int i; //enumerators;
    enum family{
        father,mother,son
    };//enumeration;
    enum family age1,age2,age3;
    age1=father;
    age2=son;
    age3=mother;
    cout<<age1<<","<<age2<<","<<age3<<endl;
    for(i=father;i<=son;i++)
    {
        cout<<i<<endl;
    }
    int total=100;
    int & sum=total;
    cout<<total<<endl<<sum;
    return 0;
}