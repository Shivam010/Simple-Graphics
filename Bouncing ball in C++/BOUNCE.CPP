#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void cir(int a,int b,int r)
{
    cleardevice();
    setcolor(7);
    circle(a,b,r);
    setfillstyle(SOLID_FILL,7);
    floodfill(a,b,7);
    line(0,295,681,295);
    settextstyle(0,0,8);
}

int main()
{
	int a,b,r=25;
	a=b=30;
	int gd=DETECT,gm;
	//initgraph(&gd,&gm,"c://tc//bgi");
	initwindow(681,295);
	cir(a,b,r);
	int i=9,j,m=120;
	j=m;
	int page=0;
	while(i--)
	{
	   while(j--)
	   {
	       setactivepage(page);
	       setvisualpage(1-page);
	      if(i%2==0)
		b+=2;
	      else
		b-=2;
	      a++;
	      delay(12);
	      cir(a,b,r);
	      page=1-page;
	   }
	   if(i%2==0)
		m=3*m/4;
	   j=m;
	   a++;
	}
	cleardevice();
	printf("\n\n\n\n\n\n\t\t\t\t THE END");
	printf("\n\n\t\t\t\tTHANK YOU");

	setcolor(YELLOW);
	circle(288,250,25);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(288,250,YELLOW);
	setcolor(RED);
	circle(280,244,5);
	circle(296,244,5);
	setfillstyle(SOLID_FILL,4);
	floodfill(280,244,4);
	floodfill(296,244,4);
	arc(288,250,210,330,15);
	settextstyle(0,0,15);
	printf("\n\n\t\t\t      SHIVAM RATHORE\n");
	getch();
	closegraph();
	return 0;
}
