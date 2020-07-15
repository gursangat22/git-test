#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	
	string m;
	getline(cin,m);
	 
	 stringstream ss;
	 ss<<m;        //stringstream ss(m);
	 //STRING TO INT CONVERSION
	int n;    
	ss>>n;   //this n will contain the value of string m through stringstream and will be converted into integer
	cout<<m<<" "<<n<<endl;
	cout<<m+"3"<<endl;
	
}
