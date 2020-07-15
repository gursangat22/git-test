#include <iostream>
using namespace std;

   class Test {

   public: Test() 
                {
                cout << "In constructor"<<endl; 
				}
         ~Test() 
		{ 
		cout << "In destructor"<<endl;
		 }
};
void myfunc() { 
          static Test obj;  //as object is declared default constructor is called automatically
		    }

int main() {

     cout << "Start main()"<<endl; 
     myfunc();
     cout << "End main()"<<endl;
return 0;
}
