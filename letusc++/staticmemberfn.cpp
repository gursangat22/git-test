#include <iostream>
using namespace std;
 class test
 {
     int no;
     static int count;
     public:
     void setno();      //OCD 
     void display();   //OCD
     static void dispcount();   //OCD
 };
        int test::count;        //variable definition 
        void test::setno()     //fn definition;
     {
         no=count++;
     } 
     void test::display()
     {
         cout<<"object no "<<no<<endl;
     }
       void test::dispcount()     //OCD   hold only static variables
     {
         cout<<"counter"<<count<<endl;
     }
   int main()
   {
       test x;
       x.setno();
       x.display();
       x.dispcount(); 
       
       x.setno();
       x.display();
       x.dispcount(); 
       
       x.setno();
       x.display();
       x.dispcount(); 
       

       return 0;
   }
