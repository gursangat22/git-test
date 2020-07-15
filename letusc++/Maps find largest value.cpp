#include<iostream>
#include<string>
#include<map>
using namespace std;


   
    int main()
    {
    	//find the largest value of a key
    	
    	 map<int,int>m;
    	 m.insert(make_pair(1,5));
    	 m.insert(make_pair(41,65));
    	 m.insert(make_pair(31,75));
    	 m.insert(make_pair(13,56));
    	 m.insert(make_pair(178,85));
    	
    	map<int,int>::iterator i;
    	for(i=m.begin();i!=m.end();i++)
    	{
    		cout<<i->first<<" "<<i->second<<endl;    		
		}
    	
//    	map<int,int>p=make_pair(0,0);
    	//    	p<int,int>::iterator pp;
    	
    	pair<int,int>p;
    	
    	p=make_pair(0,0);
    	
        int max=p.second;
        int key;
//        int key= i->first;
        
		for(i=m.begin();i!=m.end();i++)
    	{
    		if((i->second)>max)
			{
				max=i->second;
//				cout<<i->first<<" ";
				key=i->first;
			}		
		}
		
    	cout<<"key->"<<key<<"Max value->"<<max<<endl;
    	return 0;
    	
	}




