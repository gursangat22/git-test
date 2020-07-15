#include <iostream>
 using namespace std;
class atype 
{
 int a[3];
  public: 
  atype(int i, int j, int k)
   { 
   a[0] = i; 
   a[1] = j;
    a[2] = k; 
	} 
	int &operator[](int i)  //& refrence variable used so [] operator on left side of = operator
	 { 
	 return a[i]; 
	 }  
};
int main() 
{ 
atype ob(1, 2, 3);
 cout<<ob[0]<<endl;
 // displays 2
 cout<<ob[2]<<endl;
 ob[1]=34;
 cout<<ob[1]<<endl;
return 0;
}

