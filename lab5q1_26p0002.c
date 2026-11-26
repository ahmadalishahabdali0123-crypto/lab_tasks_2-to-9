#include<stdio.h>
int main()
{int ball,runs,boundaries=0,count,dotball=0,total=0;
count=1;
while(count<=6)
{
ball=count;
printf("runs at ball %d=\n",ball);
scanf("%d",&runs);
total=total+runs;
if(runs==4||runs==6)
{
boundaries= boundaries +1; 
}
else if(runs==0)
dotball= dotball+1;
count++;
}
printf("the total runs=%d",total);
printf("\nboundaries=%d",boundaries);
printf("\ndot balls =%d",dotball);
return 0;
}