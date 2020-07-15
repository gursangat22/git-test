
#include <iostream> 
using namespace std; 
class Base 
{ 
public: 
	 int f(int i) 
	{ 
		cout << "f(int): "; 
		return i+3; 
	} 
}; 
class Derived : public Base 
{ 
public: 
	double f(double d) 
	{ 
		cout << "f(double): "; 
		return d+3.3; 
	} 
}; 
int main() 
{  
    Derived *d=new Derived;  //inhertance me overloading nhi lagti yeh sirf derived class dekhta aur usko call krdia 
    /* Overloading doesn’t work for derived class in C++ programming language. 
	There is no overload resolution between Base and Derived. The compiler 
	looks into the scope of Derived, finds the single 
	function “double f(double)” and calls it. It never disturbs with the (enclosing) scope of Base.*/
	cout << d->f(3) << '\n'; 
	cout << d->f(3.3) << '\n'; 
	delete d; 
	return 0; 
}

