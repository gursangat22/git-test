#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	char str[]=" my name is sangat ";
	vector<char>v1,v2(30);
	unsigned int i;
	
	for(i=0;str[i];i++)
	{
		v1.push_back(str[i]);
	}
	cout<<"ORIGINAL STATEMENT"<<endl;
	for(i=0;i<v1.size();i++)
	{
	   cout<<v1[i];
	}
	remove_copy(v1.begin(),v1.end(),v2.begin(),' ');
	
	cout<<endl<<"REMOVED spaces STATEMENT"<<endl;
	for(i=0;i<v2.size();i++)
	{
	   cout<<v2[i];
	}
	replace_copy(v1.begin(),v1.end(),v2.begin(),' ','*');
	
	cout<<endl<<"NEW STATEMENT WITH stars"<<endl;
	for(i=0;i<v2.size();i++)
	{
	   cout<<v2[i];
	}
	return 0;
}
