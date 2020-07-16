#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


class temp{
	int t;
	public:
		temp()
		{
			t=0;
		}
		temp(int x)
		{
			t=x;
		}
		int get()
		{
			return t;
		}

};

    bool operator<(temp a,temp b)
    {
    	return a.get()<b.get();
	}
      
    bool operator==(temp a,temp b)
    {
    	a.get()==b.get();
    	
	}
     
    int main()
	
 {
     vector<temp>v;
	 
	 for(int i=1;i<=10;i++)	
	 {
	 	v.push_back(temp(i));
	 	
	 }
	v.push_back(71);
//	 for(auto h:v)
//	 {
//	 	cout<<h.get()<<" ";
//	 }
	 
	 for(int k=0;k<v.size();k++)
	 {
	    cout<<v[k].get()<<" ";	
	 } 

      
     cout<<" C*Degree ^ temperature"<<endl; 
      for(int k=0;k<v.size();k++)
	 {
	    v[k]=(int)(v[k].get()-32)*5/9;	
	 } 
      
      for(int k=0;k<v.size();k++)
	 {
	    cout<<v[k].get()<<" ";	
	 } 

      
      
      
     return 0;


 } 











