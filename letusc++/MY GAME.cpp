//SNAKE GAME
#include <iostream>
using namespace std;
bool gameover; //gameover can contain true/false coz it is a boolean;
const int width=20; //MAP DIMENSIONS
const int height=20;
int x,y; //head  position
int fruitx,fruity; //fruit position
int score;
enum edirection{
	STOP=0,LEFT,RIGHT,UP,DOWN
};
 edirection dir; //variable of enum contains any enum value
void setup()
{ 
    
	gameover=false;
     dir=STOP;
       x=width/2; //snake at the center of map
       y=height/2;
       fruitx =rand()%width; //fruit placed at random directions in map
       fruity=rand()%height;
       score=0;
       
}
void draw()
{
	//draw map;
	system("cls");
	for(int k=0;k<width+2;k++)
	cout<<"#"; //TOP WALL MADE OF #
	cout<<endl;
	
	for(int i=0;i<height;i++)
	{
		for(int j=0;j<width;j++)
		{
			if(j==0)
			cout<<"#";
			
			
			cout<<" ";
			
		    if(j==width-1)
			cout<<"#";
		}
		cout<<endl;
	}
	
	
	//BOTTOM WALL
	for(int l=0;l<width+2;l++)
	cout<<"#";
}
void input()
{
	
}
void logic()
{
	
}
int main()
{
	setup();
	while(!gameover) //jad tak false ni hunda
	{
		draw();
		input();
		logic();
	    //sleep(10); lows out game no use
	}
}
