#include <iostream>     
using namespace std;
class student
{
    int id;
    string name;
    public:
    	friend void operator<<(ostream &sout,student &s) //friend will take input of private member  //ICD
    	{   
    		sout<<s.id<<" ";
    		sout<<s.name;
		}
        friend void operator >>(istream &sin,student &s)		
        {
        	sin>>s.id;
        	sin>>s.name;
		}

};
int main()
{
	student s;
	cin>>s;    //user defined operator coz s object is used after <<and>>
	cout<<s;  // user defined operator becoz object is in the place of pre defined operator
	return 0;
}
