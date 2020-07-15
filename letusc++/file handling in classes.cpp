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
			ofstream file("bookfile.txt");//file created and opened for writing
			file.write((char*)this,sizeof(*this)); 
			file.close();
		}
};

    int main()
    {
    	book b1;
    	b1.getbookdata();
    	b1.showbookdata();
    	b1.storebook();
    	return 0;
	}

