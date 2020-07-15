#include<iostream>
#include<string>
using namespace std;

class PersonType{
	string name,firstname,lastname,middlename;
	public:
		void setName(string name)
		{
			this->name=name;
		}
			void setfirstName(string firstname)
		{
			this->firstname=firstname;
		}
			void setlastName(string lastname)
		{
			this->lastname=lastname;
		}
			void setmiddleName(string middlename)
		{
			this->middlename=middlename;
		}
		void display()
		{
			cout<<"full name entered->"<<name<<endl<<" your entered name->"<<firstname<<" "<<middlename<<" "<<lastname<<endl;
		}
		void check()
		{
			if(name.compare(firstname)==0)
			{
				cout<<"First name matches with the entered input";
			}
		   
		 } 
};

int main()
{
	PersonType pt;
	string n,fn,ln,mn;
	getline(cin,n);
	pt.setName(n);
	getline(cin,fn);
	pt.setfirstName(fn);
	getline(cin,mn);
	pt.setmiddleName(mn);
	getline(cin,ln);
	pt.setlastName(ln);
	pt.display();
	pt.check();
	
}
	
