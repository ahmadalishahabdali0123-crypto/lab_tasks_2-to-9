#include<stdio.h>
int main()
{  
float w,h,bmi;
printf("enter the weight in kg and height in meters\n");
scanf("%f %f",&w,&h);
bmi=w/(h*h);
printf("BMI =%.2f\n",bmi);
if(bmi<18.5)
printf("underweight ");
else if(bmi>18.5&&bmi<25)
printf("normal");
else if(bmi>=25 && bmi<30)
printf("overweight");
else 
printf("OBESE");
return 0;s
}