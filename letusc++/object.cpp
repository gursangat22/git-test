#include <iostream>
using namespace std;
class time{
    int hours,minutes;
public:
    int times(int h,int m)
    {
        hours=h;
        minutes=m;
    }
    void display()
    {
        cout<<hours<<"hours and "<<minutes<<"minutes"<<endl;
    }
    void sum(time ,time );  //fn declaration having object as arguments
};
    
          void time :: sum(time t1,time t2)  //fn definition;
          { 
           minutes= t1.minutes+t2.minutes;
           hours= minutes/60;
           minutes=minutes%60;
           hours=hours+t1.hours+t2.hours;
          }
          
          int main()
          {
          time T1,T2,T3;
          T1.times(2,35);
          T2.times(6,45);
          T3.sum(T1,T2);  //T3=T1+T2; fn call;
        T3.display();
          return 0;
      }
   