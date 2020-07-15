#include <iostream> 
using namespace std;
class loc 
{ 
int longitude, latitude;
 public:
loc() {} 
loc(int lg, int lt) 
{ 
longitude = lg; 
latitude = lt;
 }
void show() 
{ 

  cout << longitude <<" "<< latitude <<endl;
  }
loc operator+(loc op2);    //OCD
loc operator()(int i, int j);  //OCD
};
  // Overload ( ) for loc. 
   loc loc::operator()(int i, int j)    //() operator de vich jo marzi paalo 
{ 
 longitude = i; latitude = j;
 return *this;
}
 // Overload + for loc.
 loc loc::operator+(loc op2)    //+normal
 {
  loc temp;
 temp.longitude = op2.longitude + longitude;
 temp.latitude = op2.latitude + latitude; 
 return temp;
}
int main() 
{  
loc ob1(10, 20),ob2(1, 1);
ob1.show();  //normal show
ob1(7, 8); // can be executed by itself  overload previous one
ob1.show();   //not normal show 7 and 8 will be printed 
ob1 = ob2 + ob1(10, 10); // can be used in expressions ob2.plusoperator(ob1(10,10));
//ede vich obj1.longitude aur obj1.latitude banega te ode dona vich value sadi wali 10,10 chalijaegi 
ob1.show();
return 0;
}
