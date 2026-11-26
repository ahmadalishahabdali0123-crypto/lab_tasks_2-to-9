#include<stdio.h>
int main()
{ int a,b,c;
printf("enter the sides of triangles\n");
scanf("%d %d %d",&a,&b,&c);

if(b<a+c&&c<a+b&&a<b+c)
{printf(" it is a valid triangle\n");

if(a==b==c)
printf("the triangle is equilateral");
else if(a==b||a==c||b==c)
printf("it is a isosceles triangle");
else 
printf("it is a scalene triangle");
}
else 
printf(" it is not a valid triangle");
return 0;
}