#include<iostream>
using namespace std;
 
 template <class T1, class T2>
void show(T1 a, T2 b){cout<<a<<", "<<b<<endl;}
void show(int a, int b){cout<<"For integer cases"<<a<<", "<<b<<endl;}
int main(){
show(100,"hdb");
show(3,3);
return 0;
}


