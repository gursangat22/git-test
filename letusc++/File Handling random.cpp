#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	
    string s;
    getline(cin,s);
    ofstream obj1("randomm.txt");
    obj1<<s;
    obj1.close();
	
	string s1;
	ifstream obj2("random.txt");
	getline(obj2,s1);
	cout<<"READING FROM A FILE"<<endl<<s1;
	obj2.close();    
    return 0;
    
}
