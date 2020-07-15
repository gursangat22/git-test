// UNARY OPERATOR OVERLOADING WITHOUT FRIEND
#include<iostream>
using namespace std;

class minu{
	int a;
	public:
		minu()
		{
		    cin>>a;
		}
	
		void friend operator-(minu &z);
		
		void show()
		{
			cout<<"a="<<a<<endl;
		}
		
};
       void operator-(minu &z)   ////NORMAL OCD OF FRIEND FUN()
        {
			
			z.a=-z.a;     // andar wala access krega through z // 
		}
		/*   IF THROUGH CREATING INTERNAL OBJECT//
		
		 minu operator-(minu &z)   ////NORMAL OCD OF FRIEND FUN()
        {
            minu m;
			m.a=(-z.a);  
			return m;
			 
		}*/
       int main()
       {
       	minu i;
       	-i;   //i.operator--();
       	i.show();
       
       	return 0;
	   }
