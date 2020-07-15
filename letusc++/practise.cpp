#include <iostream>
using namespace std;

class Donor
{
    public:
    string name;
    int age;
    float height;
    float weight;
    string gender;
    string bloodGroup;
    
    void display()
    {
      cout<<"Donor details are :"<<endl;
      cout<<"Name :"<<name<<endl;
      cout<<"Age :"<<age<<endl;
      cout<<"height :"<<height<<endl;
      cout<<"weight :"<<weight<<endl;
      cout<<"Gender :"<<gender<<endl;
      cout<<"Blood Group :"<<bloodGroup<<endl;
    }
};
class Main: public Donor
{
    public:
    void setdata()
    {
        cout<<"Enter the donor details "<<endl;
        cout<<"Enter the name :"<<endl;
        cin>>name;
        cout<<"Enter the age :"<<endl;
        cin>>age;
        cout<<"Enter the weight :"<<endl;
        cin>>weight;
        cout<<"Enter the gender :"<<endl;
        cin>>gender;
        cout<<"Enter the blood group :"<<endl;
        cin>>bloodGroup;
    }
};
int main()
{
    Main m;
    m.setdata();
    m.display();
    return 0;
}
