#include <iostream>
using namespace std;
int main()
{
	try 
	{
		try
		{
			cout<<"first time running"<<endl;
			throw 10;
			cout<<"nhi chalega"<<endl;
			
		}
		catch(int x)
		{
			cout<<"first time running caught"<<endl;
			throw;
			cout<<"nhi chalega"<<endl;
		}
	}     //this closing } bracket is here because throw to baad khatam hojanda -try, te catch new {} brackets ch anda
		catch(int u)
		{
			cout<<"second time running"<<endl;
		}
	}


