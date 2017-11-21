#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include <iostream>
using namespace std;

void cir(int a,int b,int r)
{

	circle(a,b,20);
      //	setcolor(YELLOW);
	circle(a-8,b-6,4);
	circle(a+8,b-6,4);
      //	setfillstyle(SOLID_FILL,YELLOW);
       //	floodfill(a-8,b-6,YELLOW);
       //	floodfill(a+8,b-6,YELLOW);
	arc(a,b,210,330,12);

}

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c://tc//bgi");
	int a=50,b=70;
	int k=0,page=0;

    while(k<=23)
    {
        if(k!=0)
            a+=20;
        setactivepage(page);
        setvisualpage(1-page);

           // case 1
        if((k&1)==0){
            cleardevice();
            circle(a,b-20,20);
            line(a,b,a,b+35);
            line(a,b+10,a+15,b+30);
            line(a,b+10,a+15,b+15);
            line(a,b+35,a-20,b+70);
            line(a,b+35,a+20,b+70);
            line(0,b+70,getmaxx(),b+70);
        }
        else{
           // case 2
            cleardevice();
            a=a+20;
            circle(a,b-20,20);
            line(a,b,a,b+35);
            line(a,b+10,a+15,b+30);
            line(a,b+10,a+15,b+15);
            line(a,b+35,a,b+70);
            line(a,b+35,a+10,b+57);
            line(a+10,b+57,a-5,b+65);
            line(0,b+70,getmaxx(),b+70);
        }
        page=1-page;
        delay(200);
        k++;

    }
    settextstyle(10,0,10);
    outtextxy(90,70,"Bye !!");
    setvisualpage(1);
	delay(1000*2);
	closegraph();
	return 0;
}
