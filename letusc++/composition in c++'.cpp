#include <iostream>
using namespace std;
 
 class author  //container class
 {
     string authorname;
     friend class book;
 };
 class book  //contained class
 {
     string bookname;
     int bookprice;
     author a;  //object of class 1 is declared in 2nd class
      public:
void getdata()
{
    cout<<"enter author name"<<endl;
    cin>>a.authorname;
    cout<<"enter book name"<<endl;
    cin>>bookname;
    cout<<"enter book prioce"<<endl;
        cin>>bookprice; 
}
 void putdata()
 {
     cout<<"author name="<<a.authorname;
      cout<<"book name="<<bookname;
       cout<<"book price="<<bookprice;
 }
 };
 int main()
 {
     book b;
     //author a; is declared already
     b.getdata();
     b.putdata();
     return 0;
     
 }
 