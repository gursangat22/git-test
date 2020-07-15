#include <iostream>
#include <stdio.h>
#include <exception>
using namespace std;
int main()
{
    int n,no;
    char want,x;
    cout<<"Enter the total number of seats available:"<<endl;
    cin>>n;
   int seats[n];
   seats[1]=seats[2]=seats[3]=1;
   for(int i=4;i<=n;i++)
   {
       seats[i]=0;
   }
   cout<<"Seat Availability"<<endl;
    for(int k=1;k<=n;k++)
  {
      cout<<seats[k]<<" ";
  }
 
   cout<<endl<<"Do you want to book a seat(y/n):"<<endl;
   cin>>want;
   while(want=='y')
   {
   cout<<"Enter the seat number:"<<endl;
   cin>>no;
   try
   {
   if(no>n)
   {
       throw 2;
   }
   else if(no<0||no==0)
   {
       throw 3;
   }
   else if(seats[no]==1)
   {
       throw 's';
   }
   else 
   seats[no]=1;
   cout<<"Seat booked successfully"<<endl;
   }
   catch(int i)
   {
       cout<<"ArrayIndexOutOfBoundsException"<<endl;
   }
   catch(char e)
   {
       cout<<"SeatNotAvailableException"<<endl;
   }
   
    cout<<"Do you want to book a seat(y/n):"<<endl;
   cin>>want;
   }
   if(want=='n')
   {
       cout<<"Seat booking details"<<endl;
       for(int p=1;p<=n;p++)
   {
      cout<<seats[p]<<" ";
    }
   }

   
return 0;

}

