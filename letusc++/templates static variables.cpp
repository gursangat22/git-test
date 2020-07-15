#include <iostream>
using namespace std;

template<class t>

void fun(t k)
{
	static int i=90;
	cout<<++i<<endl;
}

int main()
{
	fun<int>(8);
	fun<int>(9);
	fun<float>(8.6);
	// both results will be differen tdue to ++i and i++
	
	return 0;
}
// ALSO THIS
/* #include <iostream>
using namespace std;
template <typename T>
void fun(const T&x){
 static int count = 0;
 cout << "x = " << x << " count = " << count << endl;
 ++count;
 return;
}
int main(){
 fun(1);
 fun('A');
 fun(1.1);
 fun(9);
 return 0;
} */
