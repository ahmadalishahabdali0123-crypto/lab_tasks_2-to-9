#include<stdio.h>
int main()
{
float f;
int i;
float difference;
printf("enter a float number between -1000 and1000\n");
scanf("%f",&f);
 i=(int)f;
difference=f-i;
printf("Original value of float:%.2f\n",f);
printf("converted integer:%d\n",i);
printf("difference:%f",difference);
return 0;
}