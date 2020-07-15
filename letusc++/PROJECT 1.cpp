#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstdlib>
using namespace std;

class Book{
	
	public:
	int bookid;
	string title;
	float price;
	
	
		Book()
		{}
		void getbookdetails();
		void showbookdetails();
		int storebook();
		void displayallbooks();
		void searchbook(string );
		
};
   void Book::getbookdetails()
   {
   	cout<<"\n ENTER BOOK NAME-:"<<endl;
   	getline(cin,title);
   	cout<<"ENTER BOOK ID-:"<<endl;
   	cin>>bookid;
   	cout<<"ENTER BOOK PRICE-:"<<endl;
	cin>>price;	
	cout<<"BOOK DETAILS ENTERED"<<endl;
   }
   
   void Book::showbookdetails()   //when student wants to know about the book details
   {
   	cout<<"BOOK DETAILS->"<<endl;
   	cout<<"BOOK NAME->"<<title<<endl;
   	cout<<"BOOK ID->"<<bookid<<endl;
   	cout<<"BOOK PRICE->"<<price<<" Rs "<<endl;
   }
   void Book::searchbook(string t)
   {
        cout<<"BOOK SEARCHING START..."<<endl;
    	ifstream ifile("book.txt",ios::app|ios::binary);
     	if(!ifile)
     	{
     	  cout<<"no file";
     	}
     	else{
     	ifile.read((char*)this,sizeof(*this));
     	while(!ifile.eof())
     	{
     		if(t.compare(title)==0)
     		{
     			showbookdetails();
     			ifile.read((char*)this,sizeof(*this));
			 }
			 else
			 {
			 	cout<<"BOOK NOT FOUND"<<endl;
			 }
		 }
		 ifile.close();
   	}
   }
   int Book::storebook()   //do while loop lgadena baar puvhan lai ke hor enter krwani ke nbi
   {
   	ofstream file("book.txt",ios::app|ios::binary);
   	file.write((char*)this,sizeof(*this));
   	cout<<endl<<"BOOKS DATA STORED INTO FILE"<<endl;
   	file.close();
   	return(1);
   }
   
  void Book::displayallbooks()
   {	cout<<"BOOKS DATA READING FROM THE FILE"<<endl;
     	ifstream ifile("book.txt",ios::app|ios::binary);
     	if(!ifile)
     	{
     	    cout<<"no file";
     	}
     	else{
     	    ifile.read((char*)this,sizeof(*this));
     	while(!ifile.eof())
     	{
     	    showbookdetails();
     	    ifile.read((char*)this,sizeof(*this));
		}
		ifile.close();
	}
   }

   int main()
   {
   	/* string name,rn;
   	 int rollno;
   	 cout<<"WELCOME TO THE LIBRARY"<<endl;
   	 cout<<"THIS MANAGEMENT SOFTWARE WILL HELP YOU TO READ THE BOOK OF YOUR CHOICE"<<endl;
   	 cout<<"ENTER YOUR DETAILS"<<endl;
   	 cout<<"ENTER YOUR NAME"<<endl;
   	 getline(cin,name);
   	 cout<<"ENTER YOUR ROLL NO."<<endl;
   	 getline(cin,rn);
   	// if(rn.substr()==1019){			
   	 rollno=stoi(rn);
    //} 
    // else
	//{
	 //	cout<<"ROLL NO ENTERED IS INVALID";
	//}   	
   	*/
   	Book b;
    b.getbookdetails();
   	//b.showbookdetails();
   	b.storebook();
   	//b.displayallbooks();
   	b.searchbook("neww");
   	
   	
   	
   	
   	
   	
   	
   	
   	return 0;
   }
   
   
   
   
