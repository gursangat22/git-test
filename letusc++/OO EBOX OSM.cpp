#include <iostream>
using namespace std;
class Distance
{
    private:
    int feet,inches;
    public:
    void setFeet(int feet)
    {
         this->feet=feet;
    }
    void setInches(int inches)
    {
        this->inches=inches;
    }
    int setFeet()
    {
        return this->feet;
    }
    int setInches()
    {
        return this->inches;
    }
    Distance operator+(const Distance& d) 
    {
       Distance temp;
       temp.feet= feet+ d.feet;
       temp.inches = inches + d.inches;
       
       if(temp.inches>=12)
       {
           ++temp.feet;   //final feet me ek plus hojaega and 
           temp.inches -= 12;
       
       while(temp.inches>12)
       {
       	temp.inches-=12;
       	++temp.feet;
	   }
      }
       return temp;
      }
      void display()
      {
           cout<<"The sum of two Distance is"<<endl;
           cout<<"Feet:"<<feet<<endl;
           cout<<"Inches:"<<inches<<endl;
      }
};

int main()
{
    int feet,inches;
    Distance d,d1,d2;
    cout<<"Enter feet and inches of distance 1:"<<endl;
     int f, i;
     cin>>f;
     cin>>i;
     d1.setFeet(f);
     d1.setInches(i);
     cout<<"Enter feet and inches of distance 2:"<<endl;
     cin>>f;
     cin>>i;
     d2.setFeet(f);
     d2.setInches(i);
     
     d=d1+d2;
     d.display();
    return 0;
} 
