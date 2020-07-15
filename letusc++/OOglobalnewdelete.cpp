#include<iostream>
using namespace std;

		 //parametrized and constructor defined simantaneously
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

int main()
{
	int *x = new int; //for global overloading nothing change 
	delete x;
	string *p=new string;
	delete p;
	float * o =new float;
	delete o;
	return 0;
}
