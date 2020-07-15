#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

class Myclass {
	int x;
public:
	friend void* operator new(size_t size);
	friend void operator delete(void*);
	Myclass(int i) 
	{
		x = i;
		cout << "Constructor called \n";
	}
	~Myclass()
	 {
	  cout << "Destructor called \n"; 
	}
};


void* operator new(size_t size)
{
	void *storage = malloc(size);
	cout << "new called \n";
	return storage;
}

void operator delete(void *p )
{
	cout<<"delete called \n";
	free(p);
}

int main()
{
	Myclass *m = new Myclass(5);
	delete m;
	return 0;
}


