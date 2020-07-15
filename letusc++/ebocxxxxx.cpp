 #include<iostream>
 using namespace std;
 # define MAX_SIZE 5
 
 template<class T>
 T SearchInArray(T x[],T element)
  {    int i;
      for(i=0;i<MAX_SIZE;i++)
      {  
         if(x[i]==element)
         {
             cout<<" Element "<<element<<" is found"<<endl;
             break;
         }
      }
         if(x[i]!=element)
         cout<<" Element "<<element<<" is not found"<<endl;
      
  }
  int main()
  {
      int array[MAX_SIZE],i_element;
      float f_array[MAX_SIZE],f_element;
      int i;
      cout<<"Enter 5 integer numbers"<<endl;
      for(i=0;i<MAX_SIZE;i++)
      {
          cin>>array[i];
      }
      cout<<"Enter element to search:";
      cin>>i_element;
      
      SearchInArray<int>(array,i_element);
      
      cout<<"Enter 5 float numbers"<<endl;
      for(i=0;i<MAX_SIZE;i++)
      {
          cin>>f_array[i];
      }
      cout<<"Enter element to search:";
      cin>>f_element;
      
      SearchInArray<float>(f_array,f_element);
      return 0;
     
      
  }
