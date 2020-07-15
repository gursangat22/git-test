//SNAKE GAME
#include <iostream>
#include<conio.h>
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
    
	gameover=false;//game is not over now its started
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
	
int i, j;  
    for (i = 1; i <= height; i++)  
    {  
        for (j = 1; j <= width; j++)  
        {  
            if (i == 1 || i == height ||  j == 1 || j == width)          
                {cout << "#";} 
            if(i==y&&j==x)
            {
                cout<<"O"; //head diplayed by O
            }
            if(i==fruity&&j==fruitx)
            {
                cout<<"F";//fruit placed randomly
            }
            else
                cout << "   "; 
        }  
        cout << endl; 
    }  
  
	
	//BOTTOM WALL
	for(int l=0;l<width+2;l++)
	cout<<"#";
	cout<<endl;
}
void input()  //controls handling
{
	if(_kbhit())
	{
	    switch (_getch())
	    {
	       case 'a':
	       dir=LEFT;
	       break;
	       case 'd':
	       dir=RIGHT;
	       break;
	       case 'w':
	       dir=UP;
	       break;
	       case 's':
	       dir=DOWN;
	       break;
	       case 'x':
	       gameover=true;//gamw will be over on pressing x
	       break;
	    }
	}
}
void logic()
{
	switch (dir)
	    {
	       
	       case LEFT:
	       x--;
	       break;
	       
	       case RIGHT:
	       x++;
	       break;
	       
	       case UP:
	       y--;
	       break;
	       
	       case DOWN:
	       y++;
	       break;
	      default:
	      break;
}
void main()
{
    
	setup();
	while(!gameover) //jad tak false ni hunda
	{
		draw();
		input();
		logic();
	    //sleep(10); lows out game no use
	}
return 0;
}
