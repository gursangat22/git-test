#include <iostream>
using namespace std;
class Visitor{
    private:
        string name;
        char gender;
        int age;
    public:
        void initializeData(string name, char gender, int age){
            this->name = name;
            this->gender = gender;
            this->age = age;
        }
        void displayData(){
            if(this->gender=='m'| this->gender=='M'){
                if(this->age<10)
                    cout<<"Welcome "+this->name+"! Please wait for a minute!";
                else
                    cout<<"Welcome Mr."+this->name+"! Please wait for a minute!";
            }
            else if(this->gender=='f'| this->gender=='F'){
                if(this->age<10)
                    cout<<"Welcome "+this->name+" ! Please wait for a minute!";
                else
                    cout<<"Welcome Ms."+this->name+"! Please wait for a minute!";
            }
        }
};
int main() 
{
    string name;
    char gender;
    int age;
    Visitor v;
    cout<<"Enter your name\n";
    cin>>name;
    cout<<"Enter the gender M/m F/f\n";
    cin>>gender;
    cout<<"Enter your age\n";
    cin>>age;
    v.initializeData(name, gender, age);
    v.displayData();
    return 0;
}
