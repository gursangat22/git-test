#include<iostream> 

using namespace std; 

void fun(int &x) { 
	x=-x; 
} 
	
int main() { 
	int u = 10; 
	fun(u); 
	cout<<"New value of new u  is "<<u; 
	return 0; 
} 

