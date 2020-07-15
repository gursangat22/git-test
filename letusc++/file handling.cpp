#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	cout<<"FILE OPERATION STARTED"<<endl;
	char arr[100];
	cout<<"Enter the content"<<endl;
	cin.getline(arr,100);
	ofstream myfile("all.txt",ios::app); // file created and opened for writing(no need to seperately open the file
	//ios::app will add new input in the already existing file without overwriting anything
	// myfile is the object//
 	myfile<<arr; //everything written copied into file
	myfile.close();
 	cout<<"FILE OPERATION SUCCESSFULL"<<endl;
//_______________________________________________________________________________________________________________________// 	
 	cout<<"READING FROM FILE STARTED"<<endl;
 	char arr1[100];
	ifstream obj("all.txt");
	// file opened automatically for reading only(read mode)
	// object->(obj) da content jo ke file vich stored ha arr1 vich pake print show krana  
 	obj.getline(arr1,100);   //reading from a file
 	
 	cout<<"READ FROM FILE ARRAY CONTENT-:>"<<endl<<arr1<<endl;
 	cout<<"FILE READING OPERATION SUCCESSFULL"<<endl; 
 	obj.close();
 	 return 0;
} 
