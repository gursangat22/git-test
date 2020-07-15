#include <iostream>
using namespace std;

class sample
{
    int x;
public:
    void getdata(int a)
    {
        x=a;
    }
    void display()
    {
        cout<<x<<endl;
    }
    sample add(sample b)
    {
        sample c;
        c.x=x+b.x;
        return c;
    }
};
int main()
{
    sample s1,s2,s3;
    s1.getdata(10);
    s2.getdata(120);
    s3=s1.add(s2);
    s3.display();
    return 0;
    
}
