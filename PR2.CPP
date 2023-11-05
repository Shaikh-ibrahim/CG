
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main(){
int x,y,x1,y1,x2,y2,i,p,dx,dy;
int gd=DETECT,gm,ch;
initgraph(&gd,&gm,"c:\\TurboC3\\bgi");
printf("enter coordinates of x1,y1:\n");
scanf("%d%d",&x1,&y1);
printf("enter coordiantes of x2,y2:\n");
scanf("%d%d",&x2,&y2);
printf("menu");
printf("\n1.straiht line\n \n2.dot \n3.dash");
printf("\n enter your choice\n");
scanf("%d",&ch);

dx =x2=x1;
dy=y2-y1;
p=(2*dy)-dx;
x=x1;
y=y1;
i=x1;
switch(ch){
case 1:
while(x<=x2){
if(p>=0){
 putpixel(x,y,0);
  y=y+1;
  p=p+2*(dy-dx);


}
else{
 putpixel(x,y,0);
 p=p+(2*dy);
 x=x+1;
 delay(10);


}
break;
case 2:
clrscr();
while (i<=x2){
 if(i%2==0)
 if(p>=0){
  putpixel(x,y,0);
  y=y+1;
  p=p+2*(dy-dx);


 }
 else{
  putpixel(x,y,0);
  p=p+(2*dy);
  x=x+1;
  i=i+1;
  delay(54);

 }
 break;
 case 3:
 clrscr();
 while(i<=x2){
  if(i%4!=0)
  if(p>=0){
    putpixel(x,y,0);
    y=y+1;
    p=p+2*(dy-dx);


  }
  else{
   putpixel(x,y,0);
   x=x+1;
   p=p+(2*dy);
   i=i+1;
   delay(454);


  }
  break;
  default:
  printf("error");
  break;

 }



}




}








}









getch();
closegraph();


}