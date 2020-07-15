#include <iostream>
using namespace std;

   class student
{
    int id;
    string name;
    public:
    void get()
	{
        cin>>name >>id;
    }
    void put()
    {
        cout<<name<<id<<endl;
    }
};
class marks 
{   protected:
     int m1,m2,m3;
  public:
void getmarks()
{
    cin>>m1>>m2>>m3;
} 
  void putmarks()endl
  {
      cout<<m1<<endl<<m2<<endl<<m3<<endl;
  }
};
class result : public student,public marks
{
    int total;
    float avg;
public:
    void show()
    {
        total = m1+m2+m3;  //protected members of base class can be used
        avg=total/3.0;
        cout<<"total="<< total<<"avg="<<avg<<endl;
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
