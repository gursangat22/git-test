#include <iostream>
using namespace std;
class Bank 
{
//fill your code here
public:
	virtual void deposit(double cash)=0;
    virtual void withdraw(double cash)=0;
    virtual void checkBalance()=0;
};

class ProcessCash :public Bank //DERIVED CLASS
{
    
	private:
	double balance;
	public:
	void setBalance(double balance){
		this->balance = balance;
	}
	double getBalance(){
        return balance;
		//fill your code here
	}
	void deposit(double cash){
		//fill your code here
        balance = balance + cash;
       
	}
	void withdraw(double cash)
    {
		//fill your code here
        if(cash<balance)
        {
            balance=balance-cash;
            
        }
        
        
	}
	void checkBalance(){
		//fill your code here
        
        cout<<"Available balance in your account is "<<getBalance()<<endl;
	}
};


int main()
{
    
   Bank *b;
   ProcessCash pc;
   b=&pc;
   int n;
   double csh,bal,bala;
   string ch;
   cout<<"Enter the initial balance"<<endl;
   cin>>bal;
   pc.setBalance(bal);
   do
   {
       cout<<"Select the operation:"<<endl;
       cout<<"1.Cash deposit"<<endl;
       cout<<"2.Cash withdraw"<<endl;
       cout<<"3.Check balance"<<endl;
       cin>>n;
       if(n==1)
       {
           cout<<"Enter the cash to be deposited"<<endl;
           cin>>csh;
           b->deposit(csh);
           cout<<"Cash deposited. Total balance is "<<pc.getBalance();
       }
       else if(n==2)
       {
           cout<<"Enter the cash to be withdrawn"<<endl;
           cin>>csh;
         
           bala = pc.getBalance();
           if(csh<bala)
           {
           b->withdraw(csh);
           cout<<"Cash withdrawn. Available balance is "<<pc.getBalance();}
           else
           {cout<<"Cannot process. Available balance is "<<pc.getBalance();}
       }
        else if(n==3)
        {
            b->checkBalance();
        }
       
       cout<<endl<<"Do you want to do more transaction?(yes/no)"<<endl;
       cin>>ch;
       
   }while(ch=="yes");
   return 0;
}




