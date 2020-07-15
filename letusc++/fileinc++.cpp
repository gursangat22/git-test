#include <iostream>
#include <fstream>
using namespace std;
class student
{
	int id;
	char name[20];
	public:
		void getstu()
		{
			cout<<"enter student name";
			cin>>id>>name;
		}

};
        int main()
        {
        	student s;      //s de vich memory ha sari stack de vich that is temporary
        	
        	ofstream file;
        	file.open("stu.dat");  //using open member function,a file is created and opened 
        	char op;
        	do
        	{
        		s.getstu();
        		file.write((char*) &s,sizeof(s)); //write the data into file in character format and data is present in s;
        	    cout<<"one row creted";
        	    cout<<"any more to be added [y/n]";
        	    cin>>op;
        	} while(op=='y'||op=='Y');
			file.close();
		}
		
        	
