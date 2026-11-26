#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the values of a,b,c");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
if(a>c)
printf("a=%d is the largest value",a);
else 
printf("c=%d is  the largest value",c);
}
else
{ 
if(b>c)
printf("b=%d is the largest value",b);
else 
printf("c=%d is the largest value",c); 
}
return 0;
}



