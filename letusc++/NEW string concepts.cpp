#include<iostream>
#include<string>
using namespace std;
int main()
{  // TO PRINT THE CHARACTER AT THAT INDEX
	string g="i am gursangat";
	cout<<g.at(3)<<endl;
	//output the character present on that index
	//g.length gives directly the length of the string
	for(int x=0;x<g.length();x++)
	{
		cout<<g.at(x);
	}
	//TO PRINT THE SUBSTRING FROM THE MAIN STRING
	cout<<endl<<g.substr(5,9);
	//starts printing from 5th character and prints next 9 characters as a word
	//TO SWAP TWO STRINGS
	
	string s="i am not gursangat";
	
	s.swap(g);  //or g.swap(s);
	cout<<endl<<"new g="<<g<<endl<<"new s="<<s;
	
	cout<<endl<<g.find("t");   //this start searching from the left(from starting)  
	cout<<endl<<g.rfind("t");  //rfind just start searching from the end and rest index is same 
	cout<<endl<<s.find("t");   //o/p same as below becoz only one t is present and therefore same number
	cout<<endl<<s.rfind("t");
	cout<<endl<<s.capacity();  // tells the length of the string same as .length() function
 	cout<<endl<<s.length();
 	
 	g.insert(18," thats ok"); //inserting thats ok at 18th position (index)
 	cout<<endl<<g;
 	
 	g.erase(9);  //9 to baad sara erase 
 	cout<<endl<<g;
 	g.replace(9,9,"gursangat singh");  //"gursangat" replaced by "gursangat singh"
 	cout<<endl<<g;
	return 0;
}
