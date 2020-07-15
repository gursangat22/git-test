#include <iostream>
using namespace std;

class A
{
public:
    virtual void display()=0;
};
class B:public A
{
    int val1;
    public:
    B( int x)
    {
        val1=x;
    }
    void display()
    {
        cout<<"val1 is ="<<val1<<endl;
    }
};
class C:public A
{
    int val2;
    public:
    C(int x)
    {
        val2=x;
    }
    void display()
    {
        cout<<"val2 is ="<<val2;
    }
};
int main()
{
    A*bp;   //base class having base pointer 
    B objb(100);
    C objc(900);
    bp=&objb;   //base class pointer having address of object of class B
    bp->display();
    bp=&objc;     //base class pointer having address of object of class C
    bp->display();
    return 0;
}
    
    
