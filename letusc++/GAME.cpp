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
            {   bool print=false;
            	for(k<0;k<ntail;k++)
            	{ 
            	if(tailx[k]==j && taily[k]==i)
				{
					cout<<"o";
					print=true;
					}	
				}
			if(!print)
                cout <<" "; 
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
    int prevx=tailx[0];
    int prevy=taily[0];
    int prev2x,prev2y;
    tailx[0]=x;
    taily[0]=y;
    for(int i=1;i<ntail;i++)
    {
    	prev2x=tailx[i]; //to keep the current position
    	prev2y=taily[i];
    	tailx[i]=prevx;
    	taily[i]=prevy;
    	prevx=prev2x;
    	prev=prev2y;
    	
	}
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
	      if(x>width||x<0||y>height||y<0)
	      gameover=true; //hit the wall and game over if not then below code
	    /* if(x>=width) 
	     x=0; 
	     elseif(x<0)
	     x=width-1;
	     if(y>=height)
	     y=0;
	     elseif(y<0)
	     y=height-1;
	     */ 
	      for(int i=0;i<ntail;i++)
	      {
	      	if(tailx[i]==x && taily[i]==y)
	      	gameover=true;
		  }
	      if(x==fruitx&&y==fruity)
	      score+=10;
	      //fruits will keep on placed randomly
	      fruitx =rand()%width; //fruit placed at random directions in map
          fruity=rand()%height;
          ntail++;
	      cout<<"Score"<<score<<endl;
}

    int main{
	setup();
	while(!gameover) //jad tak false ni hunda
	{
		draw();
		input();
		logic();
	   // sleep(10); lows out game no use  and <windows.h> is ud=sed for this
	}
return 0;
}
 
