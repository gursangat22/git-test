#include <iostream>
#include<string>
#include<list>
#include<algorithm>
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
	
//	void display(list<ItemType> item)
//	{
//// fill the code
//  }
};


int main()
{ 
        
   int n;
   string nm;
   double d,cpd;
   cout<<"Enter the number of item type:"<<endl;
   cin>>n;  
   if(n<0)
  {
  	cout<<"Invalid Number"<<endl;
  }   
   list<ItemType>it(n);
   for(int i=1;i<=n;i++)
   {
   	
   cout<<"Enter details of item type "<<i<<endl;
   cout<<"Enter the item type name:"<<endl;
   cin>>nm;
   cout<<"Enter the deposit:"<<endl;
   cin>>d;
   cout<<"Enter cost per day:"<<endl;
   cin>>cpd;
   it.push_back(ItemType(nm,d,cpd));

}

  
   list<ItemType>::iterator p;
  
    for(p=it.begin();p!=it.end();p++)
    {
    	
    	cout<<p->getCostPerDay()<<endl;
	}
 
 

 
 




}



