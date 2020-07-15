#include <iostream>
using namespace std;
 
 class student   //base class
 {  
  int rollno;
  string name;
  public:
  void get()
   {
       cout<<"enter rollno and name"<<endl;
       cin>>rollno>>name;
   }
  void put()
   {
       cout<<name<<endl<<rollno;
   }
  };
 class marks:public virtual student //1st derived class
 {  
     protected:
     int m1,m2,m3;
  public:
     void getma()
     {   cout<<"enter marks"<<endl;
         cin>>m1>>m2>>m3;
     }
     void displayma()
     {
         cout<<m1<<endl<<m2<<endl<<m3;
     }
     
 };
 class sports:public virtual student //2nd derived class
 {  
     protected:
     int spomarks;
     public:
     void enterspo()
     { 
        cout<<"enter sports marks"<<endl;
         cin>>spomarks;
     }
     void displayspo()
     {
         cout<<spomarks;
     }
     
 };
 // downward MULTIPLE INHERITANCE
 class result:public marks,public sports
 {
    int tot;
    int avg;
    public:
    void showtot()
    {
    tot= m1+m2+m3;
    avg=tot/3;   
     } 
     void display()
    { 
     cout<<"total= and avg="<<tot<<avg<<endl;
     cout<<"avg+spomarks="<<
     avg+spomarks<<endl;
    }
    
 };
 int main()
 {  
     result r;
     r.get();
     r.getma();
     r.enterspo();
     r.put();
     r.displayma();
     r.displayspo();
     r.showtot();
     r.display();
     return 0;
 }
