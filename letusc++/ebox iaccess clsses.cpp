#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
class Donor
{
private:
 string name;
 int age;
 float height;
 float weight;
 string gender;
 string bloodGroup;
 public:
 string getName()
 {
     return name;
 }
 void setName(string a)
 {
     name=a;
 }
 int getAge()
 {
     return age;
 }
 void setAge(int b)
 {
     age=b;
 }
 float getHeight()
 {
     return height;
 }
 void setHeight(float c)
 {
     height=c;
 }
 float getWeight()
 {
     return weight;
 }
 void setWeight(float d)
 {
     weight=d;
 }
 string getGender()
 {
     return gender;
 }
 void setGender(string e)
 {
     gender=e;
 }
 string getBloodGroup()
 {
     return bloodGroup;
 }
 void setBloodGroup(string f)
 {
     bloodGroup=f;
 }
void search(Donor donor[],string bloodGroup,int n)
{
   	for(int k=0;k<n;k++)
   	{
   		if(donor[k]==bloodGroup)
   		{
   			cout<<donor[k].getName();
		   }
	   }

}
};

int main()
{

     
   
    int AGE,x;
    float HEIGHT,WEIGHT;
    string NAME,BLOODGROUP,GENDER,bg;
    // bg=blood group to be founded
    
    cout<<"Enter the number of donors:";
    cin>>x;//no of donors
    Donor d[x];
    for(int i=0;i<x;i++)
    {
    	cout<<"Enter the donor details "<<i+1<<endl;
        cout<<"Enter the Name :"<<endl;
        cin>>NAME;
        d[i].setName(NAME);
        cout<<"Enter the Age :"<<endl;
        cin>>AGE
        d[i].setAge(NAME);
        cout<<"Enter the height :"<<endl;
        cin>>HEIGHT;
        d[i].setHeight(HEIGHT);        
		cout<<"Enter the weight :"<<endl;
        cin>>WEIGHT;
        d[i].setWeight(WEIGHT);
        cout<<"Enter the Gender :"
        cin>>GENDER;
        d[i].setGender(GENDER);
        cout<<"Enter the Blood Group :"<<endl;
        cin>>BLOODGROUP;
        d[i].setBloodGroup(BLOOGGROUP);
   	}
   	 cout<<"Enter the Bloodgroup details to be known:"<<endl;
   	 cin>>bg;
      d[0].search(d,bg,x);
	  return 0; 
}

