#include<iostream>
using namespace std;
class item
{
  int a,b;
  public:
  	void get(int a,int b)
  	{
  		this->a=a;
  		this->b=b;
	  }
    void display()
            {
            	cout<<"a="<<a<<endl<<"b="<<b<<endl;
			}
			void friend operator -(item &m)
			{
				m.a=-m.a;
				m.b=-m.b;
			}
};
  int main()
  {
  	item n;
  	n.get(12,13);
  	n.display();
  	-n;
  	cout<<"after operator overloading!"<<endl;
  	n.display();
  	return 0;
  }
