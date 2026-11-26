#include<stdio.h>
#include<math.h>
int main()
{

/*printf() and scanf() uses stdio.h header file and returns int value
 sqrt(),pow(),ceil(),floor() uses math.h header file and returns double value */
double a,b,hypotenuse,rup,rdown,area;

printf("Enter side a:");
scanf("%lf\n",&a);
printf("Enter side b:");
scanf("%lf\n",&b);
hypotenuse=sqrt(pow(a,2)+pow(b,2)); 
rup=ceil(hypotenuse);
rdown=floor(hypotenuse);
area=1/2*(a*b);
printf("HYPOTENUSE :%lf\n",hypotenuse);
printf("Rounded up:%lf\n",rup);
printf("Rounded down:%lf\n",rdown);
printf("Area :%lf\n",area);


return 0;
}                                 