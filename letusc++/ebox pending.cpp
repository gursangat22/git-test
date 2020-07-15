#include <iostream>
using namespace std;
class Event{
    protected:
        string name;
        string detail;
        string type;
        string organiser;
    public:
        Event(){} //default constructor
        Event(string name, string detail, string type, string organiser){
            this->name = name;
            this->detail = detail;
            this->type = type;
            this->organiser = organiser;
        }
        void setName(string name){
            this->name = name;
        }
        void setDetail(string detail){
            this->detail = detail;
        }
        void setType(string type){
            this->type = type;
        }
        void setOrganiser(string organiser){
            this->organiser = organiser;
        }
        string getName(){
            return this->name;
        }
        string getDetail(){
            return this->detail;
        }
        string getType(){
            return this->type;
        }
        string getOrganiser(){
            return this->organiser;
        }
};

class Exhibition : // fill the code{
    private:
        int noOfStalls;
    public:
    // fill the code
        Exhibition
        Exhibition(string name, string detail, string type, string organiser,int noOfstalls)
        {
        	this->noOfstalls=noOfstalls;
		}
        void setNoOfStalls(int noOfStalls){
            this->noOfStalls = noOfStalls;
        }
        int getNoOfStalls(){
            return this->noOfStalls;
        }
        void display(){
             // fill the code
        }
};


class StageEvent :  // fill the code{
    private:
        int noOfSeats;
    public:
         // fill the code
         StageEvent()
         {
		 }
		 StageEvent(String name, String detail, String type, String organiser, Integer noOfSeats)
		 {
		 	this->noOfSeats=noOfSeats;
		 }
        void setNoOfSeats(int noOfSeats){
            this->noOfSeats = noOfSeats;
        }
        int getNoOfSeats(){
            return this->noOfSeats;
        }
        void display(){
             // fill the code
        }
};

int main(){
    int choice;
    Exhibition e;
    
    int i=0;
    string delimiter = ",";
    size_t pos = 0;
    string token;
    string exhibitionDetail, stageEventDetail;
    string* arr = new string[25];
    cout<<"Choose Event type\n";
    cout<<"1.Exhibition\n";
    cout<<"2.Stage Event\n";
    cin>>choice;
    switch(choice){
        case 1:
        {
             // fill the code
        }
        case 2:
        {
             // fill the code
        }
        default:
            cout<<"Invalid choice\n";
            break;
    }
    return 0;
}

