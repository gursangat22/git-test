
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
  
	ofstream fout("read.txt");
	 cout<<"fout wala "<<fout.tellp()<<endl;
    fout<<"abcdefghijklmnopqrstuvwxyz"; 
    //entering something into file
    fout.seekp(10);
     cout<<"fout wala "<<fout.tellp()<<endl;
    fout.seekp(10,ios::cur);
     cout<<"fout wala "<<fout.tellp()<<endl;
    
   
	fout.close();
	ifstream fin("read.txt");
    cout<<fin.tellg()<<endl;
    cout<<(char)fin.get()<<endl;
    cout<<fin.tellg()<<endl;
    fin.seekg(8);
    cout<<fin.tellg()<<endl;
    cout<<(char)fin.get()<<endl;
    cout<<fin.tellg()<<endl;
    fin.seekg(3,ios_base::cur);
    cout<<fin.tellg()<<"->";
    cout<<(char)fin.get()<<endl;  //now pointing towards 13
    fin.seekg(-4,ios_base::cur);  //4 position piche aega //hun chahe jiste khara ohnu ginlo ya na gino //
    //ma khena jiste khara ohnu chdke piche jao te 4th term te khrado//ya sab kuch chado do ke index counting krlo jo +- kekrke
    //index auga uss index te jo houga oh print houga for example here 13-4=9 so 9th index 10th element j will print;
    cout<<fin.tellg()<<"->";
    cout<<(char)fin.get();
     fin.seekg(-4,ios_base::end);
     cout<<fin.tellg();//this will print w instead of v;
     
    return 0;
 }
