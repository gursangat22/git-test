#include <iostream>
using namespace std;
class Book{
    protected:
    string name;
    string author;
    int price;
    string publication;
    
    public:
    Book(){}
    
    Book(string nae, string author, int price, string publication)
    {
        name=nae;
        this->author=author;
        this->price=price;
        this->publication=publication;
    }
};
class PrintedBook: public Book{
    private:
    int  numOfPages;
    string paperType;
    
    public:
    PrintedBook(){}
    //fill your code
    
    PrintedBook(string name,string author,int price,string publicaton,int numOfPages,string paperType):Book(name,author,price,publication)
   {
       this->numOfPages=numOfPages;
       this->paperType=paperType;
   }
   
   void displayDetails()
    {
       //fill your code
       cout<<"Printed Book Details"<<endl;
       cout<<"Name :"<<name<<endl;
       cout<<"Author :"<<author<<endl;
       cout<<"Price :"<<price<<endl; 
       cout<<"Publication :"<<publication<<endl; 
       cout<<"Number Of Pages :"<<numOfPages<<endl;
       cout<<"Paper Type :"<<paperType<<endl;
   
   }
};
class EBook: public Book{
    private:
    string diskType;
    int size;
    
    public:
    
    //parametrized constructor below
    EBook(string name,string author,int price,string publication,string diskType, int size):Book(name,author,price,publication)
    {
        this->diskType=diskType;
        this->size=size;
    }
    
    void displayDetails()
    {
        //fill your code
        cout<<"Printed Book Details"<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Author :"<<author<<endl;
        cout<<"Price :"<<price<<endl; 
        cout<<"Publication :"<<publication<<endl; 
        cout<<"Disk Type :"<<diskType<<endl;
        cout<<"Size :"<<size<<endl;

    }
};
int main()
{
    string diskType,name,author,publication,paperType;
    int size,price,numOfPages;
    int ch;
    //fill your code
   
    cout<<"Enter the type of book"<<endl;
    cout<<"1.PrintedBook"<<endl<<"2.EBook"<<endl;
    cin>>ch;
    if(ch==1){
         
    cout<<"Enter the book name"<<endl;
    cin>>name;
    cout<<"Enter the author name"<<endl;
    cin>>author;
    cout<<"Enter the price"<<endl;
    cin>>price;
    cout<<"Enter the publication name"<<endl;
    cin>>publication;
    cout<<"Enter the number of pages of the book"<<endl;
    cin>>numOfPages;
    cout<<"Enter the paper type of the book"<<endl;
    cin>>paperType;

    PrintedBook pb =PrintedBook(name,author,price,publication,numOfPages,paperType);
    pb.displayDetails();
    }
    else if(ch==2)
    {
       
        cout<<"Enter the book name"<<endl;
    cin>>name;
    cout<<"Enter the author name"<<endl;
    cin>>author;
    cout<<"Enter the price"<<endl;
    cin>>price;
    cout<<"Enter the publication name"<<endl;
    cin>>publication;
    cout<<"Enter the disk type of the book"<<endl;
    cin>>diskType;
    cout<<"Enter the size of the disk"<<endl;
    cin>>size;

    EBook e=EBook(name,author,price,publication,diskType,size);
    e.displayDetails();
    }
    
    
    
    return 0;
}
