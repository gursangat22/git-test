// C++ program to show unary operator overloading without friend function
#include <iostream> 

using namespace std; 

class Distance { 
public: 

	// Member Object 
	int feet, inch; 

	// Constructor to initialize the object's value 
	Distance(int f, int i) 
	{ 
		this->feet = f; //(feet=f; inch=i;)then also works
		this->inch = i; 
	} 

	// Overloading(--) operator to perform decrement 
	// operation of Distance object 
	void operator--()     //je ede vich int as an argument pass krdoge ta d1-- karna pauga to make it work
	{ 
		feet--;    
		inch--; 
		cout << "\nFeet & Inches(Decrement): " << feet << "'" << inch; 
	} 
	void operator++() 
	{ 
		feet++;    
		inch++; 
		cout << "\nFeet & Inches(increment): " << feet << "'" << inch; 
	} 
		void operator++(int) 
	{ 
		feet++;    
		inch++; 
		cout << "\nFeet & Inches(increment): " << feet << "'" << inch; 
	} 
}; 

// Driver Code 
int main() 
{   
	// Declare and Initialize the constructor 
	Distance d1(8, 9);  //implicit constructor call
    cout<<"before overloading 8'9 "<<endl;
	// Use (-) unary operator by single operand 
	 --d1; //or d1-- krdo decrement da koi farak ni panda (int necessar ni ha)
	 ++d1;
	 d1++;
	return 0; 
} 

