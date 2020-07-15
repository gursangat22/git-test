#include <iostream>
using namespace std;
class distance
{
	int x,y;
	public:
		distance()
		{
			
		}
		distance(int a,int b)
		{
			x=a;
			y=b;
		}
		void display()
		{
			cout<<"Total distance in km and m";
			cout<<x<<"+"<<y<<endl;
		}
		distance operator +(distance );
};
    distance distance::operator +(distance c)
{
	distance temp;
	temp.x=x+c.x;
	temp.y=y+c.y;
	return temp;
}
    int main()
{
	distance d1(5,4),d2(3,2),sum;
	
	sum=d1+d2;
	cout<<"First distance:"<<endl;
	d1.display();
	cout<<"Second distance:"<<endl;
	d2.display();
	cout<<"sum of the distance:"<<endl;
	sum.display();
	return 0;	
}
