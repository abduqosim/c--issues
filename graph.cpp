#include <iostream>
#include <graphics.h>
#include <conio.h>
main ()
{
	initwindow (500,500);
	circle (100,100,50);
	circle (200,100,50);
	circle (300,100,50);
	
	setfillstyle (1,YELLOW);
	floodfill (100,100,white);
	getch();
	closegraph();
	
	
	
	
}
