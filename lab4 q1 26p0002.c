
#include<stdio.h>
int main()
{ int y;
printf( "enter the  year\n");
scanf("%d",&y);
if(y%4==0){
if(y%100==0)
{if(y%400==0)
printf("%d is a leap year",y);
else
printf("%d is not aleap year",y);
}
else
printf("the %d year is  leap",y);
}

else
printf("the %d year is not leap",y);

return 0;
}
