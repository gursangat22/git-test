#include <iostream>
 using namespace std;
 class Event 
 {
 protected:
 string name;
 public:
 virtual string getEvent();
 void setName(string name){
 this->name=name;
 }
 };
 class Sports: public Event{
 public:
 string getEvent() { 
 return name; 
 }
 };
 int main(){
 Sports s;
 s.setName("Chess");
 cout << "Event Name: " << s.getEvent() << endl;
 return 0;
 } 
