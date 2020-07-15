#include <iostream>
#include<exception>
using namespace std;
 
class Test {
  static int count;
  int id;
public:
  Test() {
    count++;
    id = count;
    cout << "Constructing object number " << id << endl;
    if(id == 5) //if id ==6 then nothing will be thrown and catch statement will not be thrown
       throw 4;
  }
  ~Test() { cout << "Destructing object number " << id << endl; }
};
 
int Test::count = 0;
 
int main() {
  try {
    Test array[5];  //0 1 2 3 4 will be run value entered will be 1 2 3 4 5 
    //throw statement of try block is upside
  } catch(int i)
   {
    cout << "Caught " << i << endl;
  }
}
