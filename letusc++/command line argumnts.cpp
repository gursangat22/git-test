// C program to illustrate 
// command line arguments 
#include<iostream> 

int main(int argc,char* argv[]) 
{ 
	int counter; 
	printf("Program Name Is: %s",argv[0]); 
	if(argc==1) 
		printf("\nNo Extra Command Line Argument Passed Other Than Program Name"); 
	if(argc>=2) 
	{ 
		cout<<"Number Of Arguments Passed"<<argc; 
		cout<<"\n----Following Are The Command Line Arguments Passed----"; 
		for( counter=0;counter<argc;counter++) 
			cout<<<argc<<argv;
	} 
	return 0; 
} 

