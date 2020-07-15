#include<iostream>

using namespace std;

class base

{
public:

 virtual ~base()  //virtual destructor (remove if u want then non virtual destructor
 

{ cout << "destructing base\n"; }
};

class derived : public base

{
public:

~derived()

{ cout << "destructing derived\n"; }
};

int main()

{ base *p=new derived; //derived da sara maal edar pata ode base object pointer ch pata 
                       // but if virtual krdage ta derived wala v output vich aega 
                       // and if alag to derived class da object bnawage ta fer pakka automatic destructor call hoega
                       // chahe virtual howe chae non-virtual;
delete p;


return 0;
}
