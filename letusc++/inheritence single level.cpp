 #include <iostream>
 using namespace std;
  
  class student
  {
      int id;
      string name;
     public:
    void get()
    {
        cin>>name>>id;
    }   
    void put()
    {  cout<<"name and id is \n";
        cout<<name<<endl<<id<<endl;
    }
  };
  class phystu : public student   //single level inheritance
  {
      int h,w;
       public:
       void getphy()
       {
           cin>>h>>w;
       }
       void putphy()
       {   
           cout<<"height and weight is \n";
           cout<<h<<"  "<<w<<endl;
       }
  };
  int main()
  {
  phystu p;
  p.get();
  p.put();
  p.getphy();
  p.putphy();
  return 0;
  }
