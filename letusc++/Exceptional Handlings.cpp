#include <iostream>
# include <math.h>
using namespace std;

int main()
{
  // processing of expression sqrt(a)/sqrt(b)
  double a,b;
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;

  double c;

  try 
  {  // the beginning of try block
    if (b == 0)
      throw 1;
    if (b < 0)
      throw 2;
    if (a < 0)
      throw 2;
    if (a==0)
      throw "numenator should be non zero";
      
	  	   c = sqrt(a) / sqrt(b);
      cout << "c = " << c << endl;
      
}
  catch (int e) // error catching
  {                                  //all exceptions are not checked jo uppar agya woh print hojega chahe aur if conditions bhi satisfy ho
    if (e == 1)
      cout << "Division by 0." << endl;
    if (e == 2)
      cout << "Negative root not possible" << endl;
}
   catch (const char*m)   
   {
   	cout<<m;
   }
   
  
  return 0;
}
