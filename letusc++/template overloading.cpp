#include <iostream>

using namespace std;

template <class type>

type sum(type x, type y) //fn declaration

{

return(x+y);

}
   template <class type>
   type sum(type x,type y,type z)
   {
       return (x+y+z);
   }
int main()
{  
cout<<"sum="<<sum<int>(1,2.6)<<endl; //its better ke datatype likhdo
cout<<"sum="<<sum<float>(1.4,2.5)<<endl;
cout<<"2sum="<<sum<float>(98.6, 19.4,7)<<endl;
cout<<"2sum="<<sum<int>(98, 19,7.4);
return 0;

}
