
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
int x,y,p,xc,yc,r;
int gd=DETECT,gm;
void display_circle(){
 putpixel(xc+x,yc+y,10);
 putpixel(xc-x,yc+y,10);
 putpixel(xc+x,yc-y,10);
 putpixel(xc-x,yc-y,10);
 putpixel(xc+y,yc+x,10);
 putpixel(xc-y,yc+x,10);
 putpixel(xc+y,yc-x,10);
 putpixel(xc-y,yc-x,10);






}
void main(){
 clrscr();
 printf("\n midpoint drawing algoithm");
 printf("enter the value of the center of coordinate");
 printf("\n xc");
 scanf("%d",&xc);
 printf("\n yc=");
 scanf("%d",&yc);
 printf("enter radius=");
 scanf("%d",&r);
 x=0;
 y=r;
 initgraph(&gd,&gm,"c:\\TurboC3\\bgi");
 display_circle();
 p=1-r;
 while (x<y){
  x++;
  if(p<0){

   p=p+2*x+3;
  }
  else{
  y--;
  p=p+2*(x-y)+5;

  }
  display_circle();
 }
   getch();
   closegraph();


}