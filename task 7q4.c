#include<stdio.h>
float toFarenhite(float c);
float toCelsius(float f);
void printTable(int start,int end,int step);
int main()
{
int start,end,step;
float c,f;
printf("Start:");
scanf("%d",&start);
printf("\nEnd:");
scanf("%d",&end);
printf("\nStep:");
scanf("%d",&step);
printTable(start,end,step);
printf("\nEnter a temperature in farenhite:");
scanf("%f",&f);
printf("\n%f F =%.2f C",f,toCelsius(f)); 
return 0;

}
float toFarenhite( float c)
{float f;
f= c *(9/5)+32;
 return f;
}
float toCelsius(float f)
{
float c;
c= (f-32)*(5/9);
return c;

}
void printTable(int start,int end,int step)
{
printf("Celsius \t Farenhite\n");
for(int i=start;i<=end; i=i+step)
{
float f= toFarenhite(i);
printf("%d \t %d",i,f);


}


}

