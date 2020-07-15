#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Binary{

          private:
      	  int age;
      	  string name;
		  public:
		  Binary()
		  {
		  }
		  Binary(string n,int a)
		  {
		  	this->name=n;
		  	this->age=a;
		  }
		  
		  void display()
		  {
		  	cout<<"my name is "<<name<<" and my age is "<<age<<endl;
	      } 

};

int main()
{
	Binary b("gursangat",18);
	
	ofstream file("mine.bin",ios::binary); //writing to a file
	file.write((char*)&b,sizeof(Binary));
	
	file.close();
	
	Binary readd;
	ifstream reaad("mine.bin",ios::binary); //reading from the file
	reaad.read((char*)&readd,sizeof(Binary));
	
	b.display();
	readd.display();
	reaad.close();
	return 0;
	
}

     

