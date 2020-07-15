#include <iostream>
using namespace std;
class item 
{
private:
    static int count;
    int number;
public:
    int setdata(int a)
    {
        number=a;
        count++;
    }
    void display()
    {
        cout<<"count "<<count<<endl;
    }
    static int fncount()
    {
        cout<<"count "<<count<<endl;
    }
};
  int item :: count;   //static variable definition
   int main()
   {
       item a,b,c;
       a.display();
       a.setdata(2);
       a.display();
       b.setdata(23);
       b.display();
       c.display();
       c.fncount();
       item::fncount();
       return 0;
   }

