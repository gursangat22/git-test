#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	ofstream fout("read.txt");
    fout<<"ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
    //entering something into file
    fout.close();
     
//__________________________________________________________________________________________________________________________________________//
     
    ifstream fin("read.txt");
	while(!fin.eof())
	{   
	    cout<<"character now =>"<<ch;
		cout<<"postion of this alphabet->"<<fin.tellg()<<endl;
		
	    fin>>ch;  //reading from file	
       
	 } 
	 fin.close();
	 return 0;
}
