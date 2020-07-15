#include<iostream>
#include<string>
using namespace std;
class ContactDetails
{
    private:
    string mobile;
    string alternateMobile;
    string landLine;
    string email;
    public:
    ContactDetails(){}
    ContactDetails(string mobile,string alternateMobile,string landLine,string email)
    {
        this->mobile=mobile;
        this->alternateMobile=alternateMobile;
        this->landLine=landLine;
        this->email=email;
    }
        // fill code
    void display(bool emailstatus,bool mobilestatus)
    {    
        if(emailstatus==true&&mobilestatus==true)
        {
        	cout<<"Registered Successfully"<<endl;
		}
		else 
		{
			cout<<"Please check your details."<<endl;
		}
    }
    friend bool validateEmail(string e1);
    friend bool findDuplicates(string a,string b);
};

bool validateEmail(string e1) //frnd function call kita 
{  
		size_t f1=e1.find('@');
    size_t f2=e1.find(".com");
    if(f1!=string::npos&&f2!=string::npos)
	return true;
	else 
	return false;
    
}

bool  findDuplicates(string a,string b)
{
    //fill code
    if(a==b)
    return false;
     else
    return true;
}
int main()
{
    
    string mobno,almobno,landline,id;
    bool emailid,dnum;
    cout<<"Enter details for Registration:"<<endl;
    cout<<"Enter Mobile Number:"<<endl;
    cin>>mobno;
    cout<<"Enter Alternate Mobile Number:"<<endl;
    cin>>almobno;
    cout<<"Enter Landline Number:"<<endl;
    cin>>landline;
    cout<<"Enter Email-Id:"<<endl;
    cin>>id;
    //fill 
    ContactDetails cd (mobno,almobno,landline,id); //parmetrized constructor values initialized
    emailid=validateEmail(id); //calling frnd functions 
   dnum= findDuplicates(mobno,almobno);
    cd.display(emailid,dnum); //output integer ha so ma code ch pata
    return 0;
}
