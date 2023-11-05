
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void boundaryfill(int x,int y,int f_color,int b_color)
{
 if(getpixel (x,y)!=b_color && getpixel (x,y) != f_color){
  putpixel(x,y,f_color);
  boundaryfill(x+1,y,f_color,b_color);
  boundaryfill(x-1,y,f_color,b_color);
  boundaryfill(x,y+1,f_color,b_color);
  boundaryfill(x,y-1,f_color,b_color);


 }


}
void main(){
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\TurboC3\\bgi");
 int x1=10,y1=10,x2=70,y2=75,x=40,y=40;
 rectangle(x1,y1,x2,y2);
 boundaryfill(x,y,10,15);
 delay(10);
 getch();
 closegraph();




}