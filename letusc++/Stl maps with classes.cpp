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
		Name()
		{
		  s="none";
		}
		
//		void setname(string s){
//			this->s=s;
//		}
	     Name(string s)
	     {
	     	this->s=s;
		 }
	   string getname(){
	   	return s;
	   }  	
	
};

bool operator<(Name a,Name b)
{
	if(a.getname()<b.getname())
	{
		return true;
	}
}

class Number{
	string n;
	public:
		Number(){
        n="0";		
		}
		
//		void setnum(int n){
//			this->n=n;
//		}
	     Number(string n)
	     {
	     	this->n=n;
		 }
		 
	     string getnu()
		{
	   	 return n;
	   
		 }  
	     
	
	
};


int main()
{
	map<Name,Number>m;
	
//	Name N;
//	Number nn;
//	m.insert(make_pair(N.setname("sangat"),nn.setnum(87)));
	
	m.insert(pair<Name,Number>(Name("sangat"),Number("34")));
	m.insert(pair<Name,Number>(Name("honey"),Number("56")));
	m.insert(pair<Name,Number>(Name("yo"),Number("78")));
	m.insert(pair<Name,Number>(Name("gat"),Number("35")));
	m.insert(pair<Name,Number>(Name("pangat"),Number("89")));
	m.insert(pair<Name,Number>(Name("gat"),Number("67")));
	
	string str;
	cin>>str;
     
	map<Name,Number>::iterator p,it;
	
	it=m.find(Name(str));   //return an iterator
//	for(p=m.begin();p!=m.end();p++)
//	{
	if(it==m.end())
	{ 
      cout<<"not found"<<endl;
	}
	else
	{
        cout<<"number is ->";
		cout<<it->second.getnu()<<endl;
	}
//}
	
	
}







