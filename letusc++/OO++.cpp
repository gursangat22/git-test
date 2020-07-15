// UNARY OPERATOR OVERLOADING
#include<iostream>
using namespace std;

class increment{
	int a;
	public:
		increment()    //default constructor
		{
			a=0;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
		}
		void operator++()
		{
			++a;
		}
		increment operator++(int)  //output object ha so class name likhea
		{
			increment x;
			x.a=a++;
		    return x;
		}
		
};

       int main()
       {
       	increment i,i2;
       	++i;
       	i.show();
       	i2=i++;   //i2=i.operator++(int); 
       	i2.show();   //ede vich i di value phele bina icrement hoe i2 kol gai ha
       	i.show();
       	i2=i++;        // ethe i di value 2 ha so duabara i2 kol chalegi
       	i2.show();
       	return 0;
	   }
