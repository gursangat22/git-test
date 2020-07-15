#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class Shape
{
    public:
    virtual double calculatePerimeter()=0;
};
class Circle:public Shape
{
    double radius;
    public:
    Circle()
    {
        
    }
    void setRadius(double radius)
    {
        this->radius=radius;
        
    }
    double getRadius()
    {
        return radius;
    }
    double calculatePerimeter()
    {
        double peri;
        peri = 2*3.14*radius;
        cout<<"Perimeter of Circle is:";
        printf("%.2f",peri);
    }
};
class Rectangle:public Shape
{
    double length,width;
    public:
     Rectangle()
    {
        
    }
    void setLength(double length)
    {
        this->length=length;
        
    }
    double getLength()
    {
        return length;
    }
     void setWidth(double width)
    {
        this->width= width;
        
    }
    double getWidth()
    {
        return width; 
    }
    double calculatePerimeter()
    {
        double peri;
        peri = 2*(length+width);
        cout<<"Perimeter of Rectangle is:";
        printf("%.2f",peri);
    }
};
class Square:public Shape
{
  double length;
  public:
  Square()
  {
      
  }
  void setLength(double length)
    {
        this->length=length;
        
    }
    double getLength()
    {
        return length;
    }
    double calculatePerimeter()
    {
        double peri;
        peri = 4*length;
        cout<<"Perimeter of Square is:";
        printf("%.2f",peri);
    }
};
int main()
{
    Shape *s;
    Circle c;
    Square sq;
    Rectangle r;
    int shape;
    double radi,len,wid;
    
    cout<<"Select the shape:"<<endl;
    cout<<"1.Circle"<<endl;
    cout<<"2.Rectangle"<<endl;
    cout<<"3.Square"<<endl;
    cin>>shape;
    
    if(shape==1)
    {
        s=&c;
        cout<<"Enter the radius of the circle:"<<endl;
        cin>>radi;
        c.setRadius(radi);
        s->calculatePerimeter();
    }
     if(shape==2)
    {
        s=&r;
        cout<<"Enter the length of the rectangle:"<<endl;
        cin>>len;
        r.setLength(len);
        cout<<"Enter the width of the rectangle:"<<endl;
        cin>>wid;
        r.setWidth(wid);
        s->calculatePerimeter();
    }
     if(shape==3)
    {
        s=&sq;
        cout<<"Enter the length of the circle:"<<endl;
        cin>>len;
        sq.setLength(len);
        s->calculatePerimeter();
    }
    return 0; 
}
