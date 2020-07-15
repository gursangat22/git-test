#include <iostream>
using namespace std;

class counter
{   private:
    int code;
	static int count;
	public:
		
		void set()
		{
		   code=++count;
		}
		void showw()
		{
			cout<<"code count="<<code<<endl;
		}
   static void show()
	{
		cout<<"count="<<count<<endl;
		}	
};
 int counter::count;  //static variable definition
int main()
{
	counter a,b,c;
	a.set();
    counter::show();
	b.set();
	a.set();
    counter::show();
	c.set();
	counter::show();
	a.showw();
	b.showw();
	c.showw();
	
	return 0;
}
		
