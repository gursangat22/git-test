   //    FILE HANDLING FOR CLASSES IS DONE BY THIS METHOD 
//___________________________________________________________________________________________________________________________//
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class book
{
	int id;
	string name;
	float price;
	public:
		book()
		{
			id=0;
			name="nothing";
			price=0;
		}
		
		void getbookdata()
		{
			cout<<"Enter book details :"<<endl;
			getline(cin,name);
			cin>>id>>price;
		}
		void showbookdata()
		{
			cout<<"Book Details :"<<endl;
			cout<<name<<endl<<id<<endl<<price<<endl;
		}
		void storebook()
		{
			ofstream file("bookfile.txt",ios::app|ios::binary);//file created and opened for writing with object->file
			file.write((char*)this,sizeof(*this)); 
	  //predefined function ->from this function everything is written into file
			file.close();
		} 
		void viewallbooks()
		{
			ifstream outputfile("bookfile.txt",ios::in|ios::binary);
			// output object created and file opened for reading(read mode)
			 //jo write hua woh read hoga //write is a predefined function 
			 if(!outputfile)
			 {
			 	cout<<"no file"<<endl;
			 }
			 else{
			 	outputfile.read((char*)this,sizeof(*this));
		    	while(!outputfile.eof())
			{
			    showbookdata(); //shows all data from file
			   outputfile.read((char*)this,sizeof(*this)); 
			 }
			 }
			    outputfile.close();
     	
     }
};

    int main()
    {
    	book b1;
		b1.getbookdata();
    	b1.showbookdata();
        b1.storebook();
    	b1.viewallbooks();
    	return 0;
	}

