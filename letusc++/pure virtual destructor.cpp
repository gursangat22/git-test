#include <iostream> 
using namespace std;
class Base 
{ 
public: 
	virtual ~Base()=0; // Pure virtual destructor 
}; 
Base::~Base()   //ICD OR OCD CAN BE GIVEN
{ 
	cout << "Pure virtual destructor is called"; 
} 

class Derived : public Base 
{ 
public: 
	~Derived() 
	{ 
		cout << "~Derived() is executed\n"; 
	} 
}; 

int main() 
{ 
	Base *b = new Derived(); 
	delete b;    //first derived constructor will be called then base class construcor will be called
	return 0; 
}

