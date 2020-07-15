#include <iostream>
using namespace std;
class car
{
	int a;
	 int b;
public:
    string name;
    int model;

    void getname();  //fn declaration; outsidecd
    void getmodel()  //fn definition; inside cd
    {
        cout<<"model no is"<<model<<endl;
        a=2;
        b=4;
        cout<<this->a<<endl;
        cout<<this->b;
    }
};
    void car::getname() //fn definition;
    {
      cout<<"name of car is :"<<name;    
    }
    int main()
    {
    	
        car obj; //declaring object And initializing values
        obj.name="breeza";
        obj.model=12324;
    
    obj.getname();  //fn calls
    cout<<"\n";
    obj.getmodel();
    return 0;
}
