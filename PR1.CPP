#include <stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
void main(){
float x,y,x1,x2,y1,y2,dx,dy,step;
int i,gd=DETECT,gm,ch;
intigraph(&gd,&gm,"c:\\Turboc3\\bgi");
printf("enter coordinates of x1 & y1:\n");
scanf("%f%f",&x1,&y1);
printf("enter coordinated of x2 & y2:\n");
scanf("%f%f",&x2,&y2);
dx=abs(x2-x1);
dy=abs(y2-y1);
if(dx>=dy)
  step=dx;
  else
  step=dy;
  dx=dx/step;
  dy=dy/step;
  x=x1;
  y=y1;
  i=1;
  printf("\n menu\n");
  printf("\n 1.straight line\n \n2.dot line\n \n3.dash line\n");
  printf("enter your choice");
  scanf("%d",&ch);
  switch(ch){
case 1:
clrscr();
while(i<=step){
putpixel(x,y,0);
x=x+dx;
y=y+dy;
i=i+1;
delay(50);
}
break;
case 2:
while(i<=step){
if(i%2==0)
{putpixel(x,y,0);   }
x=x+dx;
y=y+dy;
i=i+1;
delay(50);


}
break;
case 3:
clrscr();
while(i<=step){
 if(i%4!=0){
  putpixel(x,y,0);
 }
 x=x=dx;
 y=y+dy;
 i=i+1;
 delay(50);






}
break;
default:
printf("error");
break;

}
getch();
closegraph();
}






}





}