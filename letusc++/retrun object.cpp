#include <iostream>
using namespace std;

class me
{
    static int count;
    int number;
    public:
    void getdata(int x)
    {
        number=x;
        count++;
    }
    void countval()
    {
       cout<<"count"<<endl;
       cout<<count;
    }
};
int me::count;

int main()
{
    me m1,m2,m3,m4;
    m1.getdata(1);
    m2.getdata(2);
    m3.getdata(4);
    m4.getdata(4);
    m3.countval();
    return 0;
}