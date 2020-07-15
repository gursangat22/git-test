#include<iostream>
#include<stdio.h>
#include<string>
#include <cstdlib>
using namespace std;

int main()
{   int n=0;
    bool value;
    while(value!=true)
   {
        cout<<"Enter the number of t-shirts you want to order:"<<endl;
        
        
   try 
   {    
       
         
        if(cin>>n)     //cin flag ikko vari dinda so ohnu baar baar clear krna panda 
        {
            value=true;
            cout<<"Your order for: "<<n<<" t-shirts has been successfully placed";
            exit(1);
        }  
        else       
        throw 9;
      
    }
    catch(int a)                                                                                         
    {   value=false;
        cin.clear(); //this function will clear everything and will allow input to cin ...
        cin.ignore();
        
        cout<<"Please enter an Integer only."<<endl;
       
   }
       
   }
    
    return 0;
}
