// A simple C++ program to show working of getline 
#include <iostream> 
#include <cstring> 
using namespace std; 
int main() 
{ 
	string str; 
	int t = 4; 
	while (t--) 
	{ 
		// Read a line from standard input in str 
		getline(cin, str); 
		cout << str << " : newline" << endl; 
	} 
	return 0; 
} 

