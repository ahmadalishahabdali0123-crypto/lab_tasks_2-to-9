#include<stdio.h>
int main()
{
int w;
printf("enter the weight\n");
scanf("%d",&w);
if (w>2)
{if (w%2==0)
printf("yes");
else 
printf("no it cannot be split accordingly");
}
else 
printf("no it cannot be split accordingly");
return 0;
}