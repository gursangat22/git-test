#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	cout<<"FILE OPERATION STARTED"<<endl;
	char arr[100];
	cout<<"Enter the content"<<endl;
	cin.getline(arr,100);
	ofstream myfile("all.dat",ios::app); // file created and opened for writing(no need to seperately open the file
	//ios::app will add new input in the already existing file without overwriting anything
	// myfile is the object//
 	myfile<<arr; //everything written copied into file
	myfile.close();
 	cout<<"FILE OPERATION SUCCESSFULL"<<endl;
//_______________________________________________________________________________________________________________________// 
    // WITHOUT USING GETLINE (USING ARR1 AS A CHAR AND PASTING CONTENT FROM FILE ONE WORD BY WORD)	
 	cout<<"READING FROM FILE STARTED"<<endl;
 	string arr1; //char arr1; willl be different 
	ifstream obj("all.dat",ios::app);
	// file opened automatically for reading only(read mode)
	// object->(obj) da content jo ke file vich stored ha arr1 vich pake print show krana  
 	obj>>arr1;
 	while(!obj.eof())
 	{
 		cout<<arr1;
 		obj>>arr1;  //when one thing is pasted/written into arr1 it automatically points to next position in arr1
 		// jad tak sara maal of file without spaces arr1 vich copy ni hojanda tadtak eh repeat krda rahega till eof
	}
	//	getline(obj,arr1); this will print whole statement with spaces 
 	cout<<endl<<"READ FROM FILE ARRAY CONTENT-:>"<<endl<<arr1<<endl;//this is of no use prints last char or string depending on arr1 data type//this produce last char because the cursor/pointer at that time is pointing towards the last character
 	cout<<"FILE READING OPERATION SUCCESSFULL"<<endl; 
 	 return 0;
} 
