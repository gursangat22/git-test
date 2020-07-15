#include<iostream>
#include<stdio.h>
#include<malloc.h>
using namespace std;
class Item
{
    string name;
    int cost;
public:
    Item()
    {
    }
    Item(string name, int cost)
    {
        this->name = name;
        this->cost = cost;
    }
    void setName()
    {
        this->name=name;
    }
    void setCost()
    {
        this->cost=cost;
    }
    string getName()
    {
        return name;
    }
    int getCost()
    {
        return cost;
    }
    void display()
    {
    // fill the code here
    cout<<"The item details are:"<<endl;
    cout<<"Item name:"<<getName()<<endl;
    cout<<"Item cost:"<<getCost()<<endl;
    }
        void * operator new(size_t size)
        {
            cout<<"Overloading new operator"<<endl;
         void *p=malloc(size);
         return p;  //returning  a void operator
        }
 
    void operator delete(void * p)  //output void it should return nothing
    {
       cout<<"Overloading delete operator"<<endl;
       free(p);
    }
};

int main()
{
 string name;
    int price;
    cout<<"Enter the item details:"<<endl;
    getline(cin,name);
    cin>>price;
    
    Item *i=new Item(name,price);
    
    i->display();
    delete i;
    return 0;
    
}

