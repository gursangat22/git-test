#include<iostream>
using namespace std;
class Item
{
    private:
    string name;
    double cost;
    public:
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return this->name;
    }
    void setCost(double cost){
        this->cost=cost;
    }
    double getCost(){
        return this->cost;
    }
    bool operator >=(Item i)
    {
      bool r=(cost>i.cost)?true:false;
      return r;
    }      
};


int main()

{
   // fill the code
        Item i1,i2;
        double cost;
        string name,nm;
        cout<<"Enter the item 1"<<endl;
        
        getline(cin,name);
        cin>>cost;
        i1.setName(name);
        i1.setCost(cost);
        cout<<"Enter the item 2"<<endl;
        cin.ignore();
        getline(cin,nm);
        cin>>cost;
        i2.setName(nm);
        i2.setCost(cost);
        
        if(i1>=i2)
        {
            cout<<i1.getName()<<" is costlier or equal to "<<i2.getName();
        }
        else
        {
             cout<<i2.getName()<<" is costlier or equal to "<<i1.getName();
        }
        
}
	

