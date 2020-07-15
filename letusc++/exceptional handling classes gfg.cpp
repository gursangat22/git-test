#include<iostream> 
#include<exception>
using namespace std; 

class Base {}; 
class Derived: public Base {}; 
int main() 
{ 
Derived d; 
Base f;
// some other stuff 
try { 
	// Some monitored code 
	throw d;
	
} 
catch(Base b) 
{ 
		cout<<"Caught Derived Exception"<<endl; 
} 
try 
{ 
	// Some monitored code 
	
// 	throw f; //base class object will not be catched by derived object 
	throw d;
} 
catch(Derived h) { 
		cout<<"Caught Base Exception"; 
} 

return 0; 
} 

