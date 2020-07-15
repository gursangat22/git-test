#include <iostream>
using namespace std;
class student
{
public:
 string name;
int roll;
int marks;
void setstudentdata()
{
    cin>>name>>roll>>marks;
}
void getstudentdata()
{
    cout<<name<<roll<<marks<<endl;
}
};
int main()
{
    student x[3];
    int i,j;
    for(i=0;i<3;i++) 
    {
        x[i].setstudentdata();
    }
    for(j=0;j<3;j++)
    {
        x[j].getstudentdata();
    }
    return 0;
}