#include<iostream>
using namespace std;
class test
{
	int x,b,v,c,d;
	public:
		test (int x=0):x{x}
	    {}                    //parametrized and constructor defined simantaneously
		void *operator new(size_t size)
		{
			cout<<"Overloading new opeator size "<<size<<endl;
			void * p = malloc(size); //malloc use for memory creation
			return p;
		}
   void operator delete (void *p) //output void delete void ptr
	{
		cout<<"Overloading delete operator"<<endl;
		free(p);
	}
};
int main()
{
	test *p=new test; //local scope overloading when i will write this new wale fun kol jaega te othe jake test class da size dedega
	delete p;
	int *x = new int; //for global overloading nothing change 
	delete x;
}
