#include <iostream>
using namespace std;


class A
 { 
protected: 
int i; 
public: 
A(int a) { i = a;}   //A is a constructor and we do not show return type in constructor
friend void show(); 
}; 
class B: public A 
{ 
int j;   
public:
 B(int a, int b) : A(a) {j=b;} 
}; 
void show()
 { 
  B b(-2,55);  //parametrized constructor
  cout<<b.i<<", "<<b.j; 
}
int main() 
{
    show();  //friend fn called normally
    return 0;
    } 
