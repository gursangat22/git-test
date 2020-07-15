#include<iostream>
using namespace std;

class A 
{ 
protected: int a; 
public: A(int i)
 { 
       a=i;
 } 
friend void show(); 
}; 
class B: public A 
{    private:
             int j;   
         public:
             B(int i, int b):A(i)  
{
        j=b;
} 
}; 
       void show()                 //this shows friend function cannot access private members of its derived class
          {                       //definition of friend fn
            B s(2,55);           //constructor  call
           cout<<s.a<<" , "<<s.j;    //it will work only if j is public in derived class,it cant access private member of if derived class
		   }
 
int main() {
              show();  //friend function called
              return 0;
        } 


