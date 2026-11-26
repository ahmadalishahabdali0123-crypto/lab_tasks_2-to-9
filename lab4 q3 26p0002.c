#include<stdio.h>
int main()
{
int x,y;
printf("enter the x and y coordinates: ");
scanf("%d %d",&x,&y);
if(x==0 && y==0)
printf("the points %d and %d are on origin/n",x,y);
else if(y==0 && x!=0)
printf("the points %d and %d are on x axis/n",x,y);
else if(x==0 && y!=0)
printf("the points %d and %d are on y axis/n",x,y);
else if(x>0 && y>0)
printf("the points are in  quadrant 1/n");
else if(x<0 && y>0)
printf("the points are in quadrant 2/n");
else if(x<0 && y<0)
printf(" the points are in quadrant 3");
else (x>0 && y<0);
printf("/nthe points are in quadrant 4");
return 0;
}