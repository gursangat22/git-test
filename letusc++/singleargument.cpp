#include <iostream> 
#include <cstring>
using namespace std;
class myclass 
{
 int marks,roll,a;
 string name;
public:
 myclass(int i)
 { a=i;}
 void inputmarks()
 {
     cin>>name>>marks>>roll;
 }
 void displaymarks () //inside class declaration
 {
     cout<<name<<roll<<marks<<"\a";
 }
 int geta()
 {
     return a;
 }
 };
int main()
 {  
     myclass n=100;
  cout<< n.geta();
 //without calling myclass fn it has been called automatically

return 0;
}
