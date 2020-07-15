#include<iostream>
using namespace std;

class Base
{
    public:
    virtual ~Base()     //if this not virtual then derived class destructor will not be called
    {
        cout << "Base Destructor\n"; 
    }
};

class Derived:public Base
{
    public:
    ~Derived() 
    { 
        cout<< "Derived Destructor"; 
    }
}; 

int main()
{
    Base* b = new Derived;     // Upcasting
    delete b;
    return 0;
    //OR_____________________________________________
	//NEW METHOD IN R.N.B
	//Base *b;
	 // Derived d;
	 // this will work without VIRTUAL keyword in base class 
}
