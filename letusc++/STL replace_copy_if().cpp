// CPP code to illustrate 
// replace_copy_if 
#include <iostream> 
#include <algorithm> 
#include <vector> 
using namespace std; 

// Function to check if number is even 
int IsEven(int i) 
{ 
	return ((i % 2) == 0); 
} 

// Function to print content of vector 
void print(vector<int>& v) 
{ 
	int len = v.size(); 
	for (int i = 0; i < len; i++) 
		cout << v[i] << " "; 
	cout << endl; 
} 

// Function to replace all even numbers from vector v1 and 
// copying them to v2 
void replace_copy_ifDemo(vector<int>& v1, vector<int>& v2) 
{ 
	replace_copy_if(v1.begin(), v1.end(), v2.begin(), IsEven, 0); 
} 

// Driver Code 
int main() 
{ 
	vector<int> v1, v2; 

	for (int i = 1; i <= 10; i++) 
		v1.push_back(i); 

	cout << "Before replace_copy_if : "; 
	print(v1); 

	v2.resize(v1.size()); // allocate space 
	replace_copy_ifDemo(v1, v2); 

	cout << "After replace_copy_if : "; 
	print(v2); 

	return 0; 
} 

