#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	int numbers[10]; 
	int choice;
	int s1=0,s2=0;
	int x=0;
	ofstream fout("oddeven.txt");
	cout<<"enter the numbers"<<endl;
	for(int i=0;i<10;i++)
	{
	 cin>>numbers[i];
     fout<<numbers[i]<<" ";  //ohi number jehra input horeha ohi file object vich jareha//  
    }
	
	fout.close();
	
	ifstream fin("oddeven.txt");
	int storen[10]; 
    while(!fin.eof())
    {
        fin >> storen[x];  //storing in an array , reading from a file
        x++;
    }

	cout<<"Enter the choice"<<endl;
	cout<<"1.Odd"<<endl<<"2.Even";
	cin>>choice;
	
	switch(choice)
	{
	    case 1:
	  	for(int k=0;k<10;k++)
	  	{ 
		  if((storen[k]%2)!=0)
		  	s1=s1+storen[k];
	    }
	  cout<<"The total of all odd numbers is "<<s1;
		break;
		 
		case 2:
		 	for(int k=0;k<10;k++)
	  { 
	  	    if((storen[k]%2)==0)
		  	s2=s2+storen[k];
	  }
	   cout<<"The total of all even numbers is "<<s2;
		break;
	
	}
	fin.close();
	return 0;
}
