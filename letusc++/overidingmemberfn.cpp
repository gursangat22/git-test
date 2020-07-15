#include <iostream>
using namespace std;

//SINGLE LEVEL INHERITANCE
class papa
{
public:
 void display()
    {
        cout<<"beta parlo"<<endl;
    }
};
class beta:public papa
{
public:
    void display()
    {
        cout<<"okssss done ";
    }
};
int main()
{
    beta d;
    d.papa::display();  // this one to call specially base class function
    d.display();
    return 0;
}
