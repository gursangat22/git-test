//USING TELLG() AND TELLP() IN FILE HANDLING
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int pos;  //pos=position
	char name;
	string name1;
	ifstream fin("all.txt");
	if(!fin)
	{
		cout<<"FILE NOT FOUND"<<endl;
	}
		pos=fin.tellg();
		cout<<"after reading nothing, position ->"<<pos<<endl;
        fin>>name; //when character is read
	    pos=fin.tellg();
	    cout<<"after reading 1 char, position ->"<<pos<<endl;
		fin>>name1; //when one string is read
		pos=fin.tellg();
    	cout<<"after reading 1 string, position ->"<<pos<<endl;
//_____________________________________________________________________________________________________________________________//
	 // in this we will input something to change the current position
	
    string ch;
	int position;
	ofstream file("all.txt",ios::app);
	if(!file)
	{
		cout<<"FILE NOT FOUND"<<endl;
	}
		pos=fin.tellg();
	position=file.tellp();
	cout<<"NOW WRITING STARTS IN OFSTREAM"<<endl;
	cout<<"position without writing anything->"<<position<<endl;
	cout<<"ENTER ANY VALUE"<<endl;
    getline(cin,ch);
    file<<ch;
    position=file.tellp();
    cout<<"new position after new string has been written->"<<position<<endl;
    return 0;
}
	
	
	
	
	
	
	
	

