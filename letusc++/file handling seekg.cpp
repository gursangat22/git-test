#include<iostream>
#include<fstream>
using namespace std;

int main()
{
string str;
char arr;

getline(cin,str);
ofstream file("al.txt");
cout<<file.tellp()<<endl; //before reading
file<<str;
file.seekp(3);
file<<"ok"; 
cout<<file.tellp()<<endl; //after writing
file.close();


ifstream my("al.txt");
cout<<my.tellg();  //before reading
my>>arr;
cout<<my.tellg()<<endl;  //after reading 1 character
cout<<(char)my.get();   //pointing to character after reading 1 character
my.seekg(0);
cout<<my.tellg()<<endl;
cout<<(char)my.get();
my.close();
return 0;
}
