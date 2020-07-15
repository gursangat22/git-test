#include <iostream>
using namespace std;

class student  //base 1 class
{
    int id;
    string name;
public:
void get()
{
    cin>>name>>id;
}
void put()
{
    cout<<name<<id<<endl;
}
};
class marks: public student // acts a base class and is a derived class too
{
protected:
     int m1,m2,m3;
public:
    void getmarks()
    {
        cin>>m1>>m2>>m3;
    }
    void putmarks()
    {
        cout<<m1<<m2<<m3<<endl;
    }
};
  class result : public marks    //here marks class act as a base class here
  {
      int total;
      float avg;
public:
      void show()
      {
          total=m1+m2+m3;
          avg=total/3.0;
          cout<<"total="<<total<<endl;
          cout<<" avg="<<avg;
      }
  };
  int main()
  {
      result r;
      r.get();
      r.put();
      r.getmarks();
      r.putmarks();
      r.show();
      return 0;
  }
