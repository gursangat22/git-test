#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
  
	ofstream fout("read.txt",ios::ate);
    cout<<fout.tellp()<<endl;
    fout<<"abcdefghijklmnopqrstuvwxyz";
    //now entering something into file
    cout<<"after reading content of all file now position->"<<fout.tellp()<<endl;
    fout.seekp(3,ios_base::beg);
    cout<<"starting se 3 aage and pointing at 'd' that was 3rd position ->"<<fout.tellp()<<endl;
  
    fout<<"gursangat";
    char arr[90];
	fout.close();
	//__________________________________________________________________________________________________________//
	ifstream fin("read.txt");
	fin.getline(arr,90);
	cout<<arr<<endl;
    cout<<"starting position from where to start eading the file->"<<fin.tellg()<<endl;
    cout<<(char)fin.get()<<endl;
    cout<<fin.tellg()<<endl;
    fin.seekg(8);
    cout<<fin.tellg()<<endl;
    cout<<(char)fin.get()<<endl;
    cout<<fin.tellg()<<endl;
    fin.seekg(3,ios_base::cur);
    cout<<fin.tellg()<<"->";
    cout<<(char)fin.get()<<endl;
    fin.seekg(-4,ios_base::end);
    cout<<fin.tellg();
    cout<<(char)fin.get();
    return 0;
 }
