#include<iostream>
#include <exception>
using namespace std;
class InvalidDateException: public exception{
    //Fill your code here\\
    
    public:
    void message() 
    {
        cout<<"InvalidDateException:Please enter the date again."<<endl;
    }
};
string* splitString(string str){
    string* arr = new string[25];
    int i=0;
    string delimiter = "/";
    size_t pos = 0;
    string token;
    while ((pos = str.find(delimiter)) != string::npos) {
        token = str.substr(0, pos);
        arr[i]=token;
        str.erase(0, pos + delimiter.length());
        i++;
    }
    arr[i]=str;
    return arr;
}
int main()
{
    int n,day,month,year;
    bool value;
    int q1=0,q2=0,q3=0,q4=0;
    InvalidDateException ide;
    cout<<"Enter the number of events"<<endl;
    cin>>n;
    
      while(value!=true)
    {
        try
        {
        for(static int k=0;k<n;k++) 
        { cout<<"Enter the date of event "<<k+1<<" in dd/mm/yyyy format"<<endl;
        cin>>day>>month>>year;
        
        if(day<1||day>31)
        {
            throw 7;
        }
        else if(month<1||month>12)
        {
            throw 'e';
        }
        else if(year!=2017)
        {
           throw "InvalidDateException:Please enter the date again.";  
        }
        value=true;
        if(month>=1&&month<=3)
     {
         q1+=1;
     }
        
       else if(month>=4&&month<=6)
     {
         q2+=1;
     }
        
        if(month>=7&&month<=9)
     {
         q3+=1;
     }
        
        if(month>=10&&month<=12)
     {
         q4+=1;
     }
        }
    }
       catch(...)
       {
             value=false;
             ide.message();
       }
    }
    cout<<"Number of events in first quarter:"<<q1<<endl;
    cout<<"Number of events in second quarter:"<<q2<<endl;
    cout<<"Number of events in third quarter:"<<q3<<endl;
    cout<<"Number of events in fourth quarter:"<<q4<<endl;
   return 0; 
}

    
    




