#include <iostream>

using namespace std;

class Hall 
{
	public:
    int arr[100];
    int size;
    
    Hall(int size)
    {
        for(int i=0;i<size;i++)
        {
            cout<<"Post your rating for hall "<<i<<endl;
            cin>>arr[i];
        }
    }   
    
    int operator[](int j)
{
    for(int i=0;i<size;i++)
    {
        if(i=j) //je mera match kreha koi v value 
        {
         return arr[j];
        }
        else 
        {
            cout<<"Hall "<<j<<" does not exist"<<endl;
        return 0;
    }
    }
} 
};

int main() 
{
    int n;
    cout<<"Enter total number of halls"<<endl;
    cin>>n;
    Hall h(n);  //h is the object
    
    string ch;
    
    do
    {
        int num;
        cout<<"Enter the hall index to find its rating"<<endl;
        cin>>num;
        int r=h[num];
        if(r==0)
        {
         cout<<"Rating for hall "<<num<<" is 0"<<endl;
        }
        else 
        {
        cout<<"Rating for hall "<<num<<" is "<<h[num]<<endl;
       
        }
            
        cout<<"Do you want to continue(yes/no):";
        cin>>ch;
    } while(ch=="yes");
      return 0;
      
      
}


