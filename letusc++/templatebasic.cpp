#include <iostream>
using namespace std;
 
 template <class t1,class t2>
 float sum(t1 a,t2 b)
 {
 	return a+b;
 }
 int main()
 {
 cout<<"integer sum="<<sum<int,int>(1,2)<<endl;
 cout<<"float sum="<<sum<float,float>(2.3,3.4)<<endl;
 cout<<"float sum="<<sum<float,int>(1.2,4)<<endl;
  return  0;
}
 
