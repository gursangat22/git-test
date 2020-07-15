#include <iostream>
#include<string>
#include<list>
#include<stdio.h>
using namespace std;
class ItemType
{
    private:
	string name;
	double deposit,costPerDay;
	public :
	ItemType()
	{
	}
	ItemType(string name,double deposit,double costPerDay)
	{
	this->name=name;
	this->deposit=deposit;
	this->costPerDay=costPerDay;
	}
	void setName(string name)
	{
	this->name=name;
	}
	void setDeposit(double deposit)
	{
	this->deposit=deposit;
	}
	void setCostPerDay(double costperday1)
	{
  this->costPerDay=costperday1;
	}
	string getItemName()
	{
	return name;
	}
	double getItemDeposit()
	{
	return deposit;
	}
	double getCostPerDay()
	{
	return costPerDay;
	}
	
	void display(list<ItemType> item)
	{
     cout<<name<<deposit<<costPerDay;
  }
};


int main()
{
    int n;
     string name;
     double deposit,costPerDay;
     list<ItemType>l;
     list<ItemType>::iterator ii;
      cout<<"Enter the number of item type:"<<endl;
     cin>>n;
     if(n<0)
     {
         cout<<"Invalid number"<<endl;
     }
     else
     {
     for(int i=1;i<=n;i++)
     {
         cout<<"Enter details of item type "<<i<<endl;
         cout<<"Enter the item type name:"<<endl;
         cin>>name;
         cout<<"Enter the deposit:"<<endl;
         cin>>deposit;
         cout<<"Enter the cost per day:"<<endl;
         cin>>costPerDay;
          
         ItemType io(name,deposit,costPerDay);
         
         l.push_back(io);        
       }
        
        for(ii=l.begin();ii!=l.end();ii++)
        {
          cout<<*ii; 
        }
     }
      
      return 0;
     }



