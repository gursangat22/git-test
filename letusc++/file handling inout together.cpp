#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string arr, sed;
	char ch;
	int count=0;
	ofstream my("inout.txt");
	getline(cin,arr);
	my<<arr;
	my.close();

	ifstream myi("inout.txt");
	myi.get(ch);
   while(!myi.eof())
   {
      cout<<ch;
	myi.get(ch);  //reading from the file with spaces 
     count++;
   }
   cout<<"count="<<count;
	myi.close();
	return 0;
}
//IN THIS BELOW CODE ONE SPACES ARE NOT THERE SO THAT WILL NOT GIVE CORRECT NUMBER 
	/* #include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string arr; 
	char sed;
	int count=0;
	ofstream my("inout.txt");
	getline(cin,arr);
	my<<arr;
	
	my.close();
	ifstream myi("inout.txt");
	myi>>sed;
   while(!myi.eof())
   {
      cout<<sed;
	  myi>>sed;
     count++;
   }
   cout<<"count="<<count;
	myi.close();
	return 0;	
}
*/
	
	

