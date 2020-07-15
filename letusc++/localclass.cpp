#include <iostream>
using namespace std;
void fun();
int main()
{
    fun();
    return 0;
    }
 
 void fun()
 {
     class clas{
         int x;
    public:
         void fn(int i){
             x=i;
         }
         int display()
         { return x;}
     }  k;
    
     k.fn(8);
   cout<<  k.display();
}
