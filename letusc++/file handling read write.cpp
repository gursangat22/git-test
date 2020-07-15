#include<iostream>
#include<fstream>
using namespace std;
class my
{
	int age;
	string name;
	public:
	my()
	{
	    age=0;
	    name="noname";
	}
		my(string name,int age)
		{
			this->name=name;
			this->age=age;
		}
		void get()
		{
			cout<<"name="<<name;
			cout<<"age="<<age;
		}
		
};

int main()
{
	my m("gursangat",18);
	//object m da content fil me write krana
	ofstream file("my.txt",ios::out);
	if(!file)
	{
		cout<<"error in file opening";	
	}
	else 
	{
		file.write((char*)&m,sizeof(my));
	}
	
	file.close();
	//we want to save the content written that in a object itself of class my
	//as comparison as we read normally and save it in a string and prints it,in this too we write the object's content in a new object of that class and read it
    my n(m);  //this object now contains content of m object;0
    
	ifstream if_obj("my.txt",ios::in);
    
	if_obj.read((char*)&n,sizeof(my)); 
	
	n.get();
	
	if_obj.close();
	return 0;
}
