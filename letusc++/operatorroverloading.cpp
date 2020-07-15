//	BINARY OPERATOR OVERLOADING!!!!!
#include <iostream>
using namespace std;
class test{
    int a;
    public:
    void geta()
	{   cout<<"enter the value "<<endl;
        cin>>a;
    }
    void operator == (test t)
    {
        if(a==t.a)
        {
            cout<<"equal";
        }
        else{
            cout<<"not eq";
        }
    }
};
int main()
{
    test t1,t2;
    t1.geta();
    t2.geta();
    t1==t2;  //2 objects are comparable directly (not classes)binary operator //t1.comparison(t2);
    return 0;
}
