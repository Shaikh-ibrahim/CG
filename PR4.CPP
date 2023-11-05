#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void flood(int x,int y,int f_color,int b_color){
 if(getpixel (x,y)==b_color){
  putpixel(x,y,f_color);
  flood(x+1,y,f_color,b_color);
  flood(x-1,y,f_color,b_color);
  flood(x,y+1,f_color,b_color);
  flood(x,y-1,f_color,b_color);



 }

}
void main(){
 int x1=10,y1=10,x2=80,y2=80,x=40,y=40;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\TurboC3\\bgi");

 rectangle(x1,y1,x2,y2);
 flood(x,y,10,0);
 delay(10);
 getch();
 closegraph();

}