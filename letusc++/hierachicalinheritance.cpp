#include <iostream>
using namespace std;

class acc   //base class
{
    string name;
    int accno;
    public:
    void getacc()
{
    cout<<"enter the name"<<endl;
    cin>>name;
    cout<<"enter account number"<<endl;
    cin>>accno;
}
    void putacc()
{  
    cout<<name<<endl<<accno<<endl;
}
};
   class saving: public acc  //first derived class
{
   float bal;
   public:
   void getba()
{
    cout<<"enter balance"<<endl;
    cin>>bal;
}    
    void putba()
{
    cout<<"balance is "<<bal<<endl;
    if(bal<500)
    {
        cout<<"min balance required rs 500 !!!!!saving account not created"<<endl;
    }
    else
    {
        cout<<"saving account created"<<endl;
    }
    }
};
   class current:public acc     //2nd derived class
{
    float bal;
    public:
    void getba()
{
    cout<<"enter balance"<<endl;
    cin>>bal;
}    
    void putba()
{
    cout<<"balance is"<<bal<<endl;
    if(bal<1000)
    {
        cout<<"min balance required rs 1000 !!!!!current account not created"<<endl;
    }
    else
    {
        cout<<"current account created"<<endl;
    }
    }
};
    int main()
{  
    int option;
    cout<<"there are two options   Select one of these for creating an account"<<endl;
    cout<<" 1-> current account  2-> saving account ";
    cin>>option;
    cout<<"your selected option is "<<option<<endl;
    if(option==1)
    {
        current c;
        c.getacc();
        c.getba();
        c.putacc();
        c.putba();
    }
   else if(option==2)
    {
        saving s;
        s.getacc();
        s.getba();
        s.putacc();
        s.putba();
    }
    else 
    {
        cout<<"you have selected wrong option";
    }
    return 0;
}
  
