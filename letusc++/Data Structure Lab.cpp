#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	int x;
	string ch;
	int a[n];
 
	
	do{
	       
	    	cout<<endl<<"Enter 1 for insertion"<<endl;
			cout<<"Enter 2 for deletion"<<endl;
			cout<<"Enter 3 for searching"<<endl;
			cout<<"Enter 4 for printing"<<endl;
			cout<<"Enter 5 for exiting"<<endl;
			cout<<"Enter 6 to create a array"<<endl;
			cin>>x;
			
			switch(x)
			{
			    case 1:
			     int num;
			     cin>>num;
		         n++;
			     a[n-1]=num;
			    break;
			    
			    case 2:
			    int m;
			    cin>>m; //index
			    for(int k=m;k<n;k++)
			    {
			        a[k]=a[k+1];
			    }
			    n--;
			    break;
			    
			    case 3:
			    	int b;
			    	cin>>b;
			    for(int i=0;i<n;i++)
			    {
			    	if(a[i]==b)
			    	{
			    		cout<<"number found at the index "<<i<<" and at the position "<<i+1<<endl;
					}
				}
				case 4:
				  	for(int i=0;i<n;i++)
	                {
	                cout<<a[i]<<" ";
	                }
	                cout<<endl;
	                break;
				  	case 5:
				  		exit(1);
				  		break;
				  		
					case 6:
					cout<<"Enter the number of integers to be entered initially."<<endl;
					cin>>n;
				  	  for(int i=0;i<n;i++)
                      {
	                	cin>>a[i];
	                  }
	                  break;
			        default:
			        cout<<"wrong choice";
			    }
				cout<<"enter yes/no"<<endl;				
                cin>>ch;
	}while(ch=="yes");
	    
	  	    return 0;
	}
