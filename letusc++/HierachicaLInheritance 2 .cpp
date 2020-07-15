#include <iostream> 
#include <string> 
using namespace std; 
//Base Class
class member 
{ 
string gender;
 int age; 
public:
 void get() 
{
 cout << "Age: ";
 cin >> age;
 cout << "Gender: "; 
 cin >> gender; 
 } 
  void disp() {
 cout << "Age: " << age << endl<<"Gender: " << gender << endl;
  } 
};
//derived from member 
class stud : public member  //1st derived class
 { 
   string level; 
   public: 
   
   void getdata()
 { 	
   member::get();  //function called of base class 
   cout << "Class: ";
   cin >> level;   
 } 
   void disp2()
 { 
 	member::disp();
    cout << "Level: " << level;
 } 
 }; 
  //staff class derived from member

class staff : public member    //2nd derived class
{ 
   float salary; 
   public:
   void getdata() 
   {
    member::get();   //function called of base class and no need of calling in main function
   cout << "Salary: Rs.";
   cin >> salary; 
   } 
   void disp3()
    {
    member::disp(); 
   cout << "Salary: Rs." << salary << endl;
 } 
 };

int main() 
{ int n;
cout<<"for printing level chose 1. and for printing salary chose 2"<<endl;
cin>>n;

//member M; 
staff S; 
stud s; 
if (n==1)
{
s.getdata(); 
s.disp2();
}
if(n==2)
{
S.getdata(); 
S.disp3();
}
return(0);
 }




