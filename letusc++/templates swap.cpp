#include<iostream>
using namespace std;
 
 template<class t>
 void swap1(t &m,t&n)
 {
 	t temp;
 	temp=m;
 	m=n;
 	n=temp;
 }
 int main()
 {
 	int a,b;
 	cin>>a>>b;
 	swap1(a,b);
 	cout<<a<<b;
 	return 0;
 }
