
#include <iostream>
using namespace std;
class example
{   
    public:
    int a;
    void add(example e)                 //this fn is having 
//inside function declaration//object as a argument 
    {
        a=a+e.a;
    }
};
int main()
{
    example e1,e2;
    e1.a=25;
    e2.a=30;
    cout<<"initia values ="<<"object 1="<<e1.a<<"object 2="<<e2.a<<endl;
   //passing object in fn as a argument
    e1.add(e1);
    e2.add(e2);
    cout<<"new="<<e1.a<<e2.a<<endl;
    return 0;

}
