#include <iostream> 
using namespace std;
class Counter 
{
    public: 
    static int count;
    Counter() 
    {
        count++;   
    }
    ~Counter()
    {
        count--;
    }
       
}; 
        int Counter::count;
    void f();
    void f()
    {
    Counter temp;     //3rd object which will be destroyed after function finished
    cout << "Objects in existence: ";
    cout << Counter::count << "\n";
    Counter t;      //4th object which will be destroyed after function finished
    cout << "Objects in existence: ";
    cout << t.count<< "\n"; // temp is destroyed when f() returns
    }     
   
   int main()
   {
    Counter o1;
    cout << "Objects in existence: ";
    cout <<o1.count<<endl;
    Counter o2; 
    cout << "Objects in existence: ";
    cout << Counter::count<<endl;
    f(); 
    cout << "Objects in existence: ";
    cout << Counter::count<< "\n";
    return 0;
   }

