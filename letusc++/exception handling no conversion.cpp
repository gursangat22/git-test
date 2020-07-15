#include <iostream> 
using namespace std; 

int main() 
{ 
	try { 
	throw 'a'; 
	cout<<"nothing printed";
	} 
	catch (int x) { 
		cout << "Caught " << x; 
	} 
	
	catch (...) { 
		cout << "Default Exception\n"; 
	} 
	return 0; 
}

