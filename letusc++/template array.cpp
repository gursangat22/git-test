#include <iostream>
using namespace std;
 
 template <class t>
 t arraysum(t a[0],int size) //fn declaration  //output (t) v ussi datatype form vich hoega jehra input datatype jaega
 {
 t s=0; //s=sum of array
 for(int i=0;i<size;i++)
 {
   s=s+a[i]; 	
 }
 return s;
}
  int main()
  {
    int x[]={1,3,4,5,6,7,75,5,4,4,3};
    float y[]={1.2,5.64,5.4,5.65,4.54,};
  	
  	cout<<"array integer sum="<<arraysum(x,11)<<endl;  //<int><float> likho chahe na likho
    cout<<"array float sum="<<arraysum(y,5);  //int of size has been declared
    return 0; 
  }
