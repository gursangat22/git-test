#include <iostream>
#include<string>
using namespace std;



    template <class d>
    d arraya(d *arr,d value,int size)
    {
        for(int i=0;i<size;i++)
        {
            if(arr[i]==value)
            {
                cout<<"it is present at "<<i+1<<" position and the value is ->"<<value<<endl;
                
            }
        }
    }

int main()
{
   
    int arrr[]={1,4,54,5656,67,7,87,78,89,89};
    char arrrr[]="gursangat";
    int valuee;
    cout<<"Enter the value to found out"<<endl;
    cin>>valuee;
    cin.ignore();
    cout<<"enter the character"<<endl;
    char ch;
    cin>>ch;
  
    arraya(arrr,valuee,10);
    arraya(arrrr,ch,9);   
   
   
   
   

    return 0;
}

