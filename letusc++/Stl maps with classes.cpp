#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<string>
using namespace std;


// MAP key-names and value-> numbers

class Name{
	string s;
	public:
		Name(){}
		
		void setname(string ss){
			s=ss;
		}
	     
	   string getname(){
	   	return s;
	   }  	
	
};

bool operator<(setname a,setname b)
{
	return strcmp(a.getname(),b.getname())<0;
}

class Number{
	int n;
	public:
		Number(){}
		
		void setnum(int ss){
			n=ss;
		}
	     
	   int getnum(){
	   	return n;
	   }  
	     
	
	
};


int main()
{
	map<Name,Number>m;
	
	m.insert(pair<Name,Number>(setname("sangat"),setnum(87)));
	
	
	string f;
	cin>>f;
     
	map<Name,Number>m::iterator p;
	
	p=m.find(getname(f));
	
	if(p!=m.end())
	{
		cout<p->second;//
	}
	
	
	
	
}







