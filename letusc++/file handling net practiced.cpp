#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//10-06-20 21:28
int main()
{
	string m;
	ofstream file("vowels.txt");
	getline(cin,m);
	file<<m;
	file.close();
	
	
	ifstream vowel("vowels.txt");
	char ch;
	string s;
	while(!vowel.eof())
	{
		vowel>>s;
		if(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u')
		{
			cout<<s;
		}
   }
		vowel.close();
	    return 0;	
   
}
