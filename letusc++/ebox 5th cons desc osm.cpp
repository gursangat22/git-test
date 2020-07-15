#include <iostream>
using namespace std;
class Event{
    private:
        string name;
        string detail;
        string type;
        string organiser;
        int attendeesCount;
        double projectedExpenses;
    public:
        Event(){ }//constructor`
        Event(string name, string detail, string type, string organiser, int attendeesCount, double projectedExpenses)
        {
            this->name = name;
            this->detail = detail;
            this->type = type;
            this->organiser = organiser;
            this->attendeesCount = attendeesCount;
            this->projectedExpenses = projectedExpenses;
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
        void setAttendeesCount(int attendeesCount){
            this->attendeesCount = attendeesCount;
        }
        void setProjectedExpenses(double projectedExpenses){
            this->projectedExpenses = projectedExpenses;
        }
        string getName(){
            return this->name;
        }
        string getDetail()
        {
            return this->detail;
        }
        string getType(){
            return this->type;
        }
        string getOrganiser(){
            return this->organiser;
        }
        int getAttendeesCount(){
            return this->attendeesCount;
        }
        double getProjectedExpenses(){
            return this->projectedExpenses;
        }
       friend class EventExport;
};

class EventExport{
    public:
        void exportCSVFormat(Event *e, int num) //details printing
        {
			
            for(int j=0;j<num;j++)
            {
                cout<<e[j].getName()<<", "<<e[j].getDetail()<<", "<<e[j].getType()<<
                ", "<<e[j].getOrganiser()<<", "<<e[j].getAttendeesCount()<<", "<<e[j].getProjectedExpenses()<<endl;
            /* 
            cout<<(e+i)->name<<", "<<(e+i)->details<<", "<<(e+i)->type<<", "<<
            (e+i)->organiser<<", "<<(e+i)->attendeesCount<<", "<<(e+i)->projectedExpenses<<endl;
            also this can be done  */
                
            }
        }
        void exportNameOrganiserInfo(Event *e, int num, string type)
        {
            // fill the code name and organiserfor given type 
           for(int j=0;j<num;j++)
           {
               if(e[j].getType()==type)
               {
                   cout<<e[j].getName()<<", "<<e[j].getOrganiser()<<endl;
               }
           }

        }
};

int main()
{
    int x,ac;
    string dt,nm,tp,og;
    double pe;
    cout<<"Enter the number of events :"<<endl;
    cin>>x;
   Event event[x];
  for(int i=0;i<x;i++)
  {
  cout<<"Enter the details of event "<<i+1<<endl;
  cout<<"Name :"<<endl;
  cin.ignore();
  getline(cin,nm);
  cout<<"Detail :"<<endl;
  cin>>dt;
  cout<<"Type :"<<endl;
  cin>>tp;
  cout<<"Organiser :"<<endl;
  cin.ignore();
  getline(cin,og);
  cout<<"Attendees Count :"<<endl;
  cin>>ac;
  cout<<"Projected Expenses :"<<endl;
  cin>>pe;
  
        event[i].setName(nm);
        event[i].setDetail(dt);
        event[i].setType(tp);
        event[i].setOrganiser(og);
        event[i].setAttendeesCount(ac);
        event[i].setProjectedExpenses(pe);

}
    int option;
    EventExport ee;
    cout<<"1. Export all the event details in CSV format"<<endl;                                                                        
    cout<<"2. Export name and organiser of the given event type"<<endl;
    cin>>option;
    if(option==1)
    {   
        ee.exportCSVFormat(event,x);
    }
    else if(option==2)
    {  string Type;
        cout<<"Enter the type"<<endl;
        cin>>Type;
        ee.exportNameOrganiserInfo(event,x,Type);
    }
    else 
    {
        cout<<"Invalid choice";
    }
      return 0;
}





