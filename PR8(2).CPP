#include<conio.h>
#include<graphics.h>
#include<stdio.h>
void main(){
 int gd=DETECT,gm;
 int i,j;
 initgraph(&gd,&gm,"c:\\TurboC3\\bgi");
 int a[10][10]={{0,1,1,1,1,1,1,1,1,1},
		{0,1,0,0,0,0,0,0,0,0},
		{0,1,0,0,0,0,0,0,0,0},
		{0,1,1,1,1,1,1,1,1,1},
		{0,1,0,0,0,0,0,0,0,0},
		{0,1,0,0,0,0,0,0,0,0},
		{0,1,0,0,0,0,0,0,0,0},
		{0,1,0,0,0,0,0,0,0,0},
		{0,1,0,0,0,0,0,0,0,0},
		{0,1,0,0,0,0,0,0,0,0}};


for(i=0;i<10;i++){

 for(j=0;j<10;j++){
  if(a[i][j]==1)
  putpixel(j+250,i+300,RED);

 }

}



getch();
closegraph();


}