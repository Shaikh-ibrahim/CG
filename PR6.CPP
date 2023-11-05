#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<conio.h>
void main(){
 double put_x,put_y,r;
 int x[4],y[4],i;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\TurboC3\\bgi");
 printf("\n bezier curve!!!!");
 printf("\n enter coordinates of x and y respectively");
 for(i=0;i<4;i++){
  scanf("%d%d",&x[i],&y[i]);
  putpixel(x[i],y[i],3);
 }
for(r=0.0;r<=1.0;r=r+0.001){
 put_x=pow(1-r,3)*x[0]+3*r*pow(1-r,2)*x[1]+3*r*r*(1-r)*x[2]+pow(r,3)*x[3];
 put_y=pow(1-r,3)*y[0]+3*r*pow(1-r,2)*y[1]+3*r*r*(1-r)*y[2]+pow(r,3)*y[3];
 putpixel(put_x,put_y,RED);

}
getch();
closegraph();




}